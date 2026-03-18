/*
 * XREFs of PspCreateThread @ 0x14060CCFC
 * Callers:
 *     NtCreateThreadEx @ 0x14060CA00 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1406B4000 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x1408C4670 (NtCreateThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140131350 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspMapThreadCreationFlags @ 0x14060D05C (PspMapThreadCreationFlags.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // al
  _KPROCESS *v16; // rbx
  int Thread; // edi
  __int64 result; // rax
  _KPROCESS *v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r12
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // [rsp+30h] [rbp-D0h]
  char v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+68h] [rbp-98h]
  PVOID v30; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-40h]
  _BYTE AccessState[400]; // [rsp+D0h] [rbp-30h] BYREF

  v28 = 0;
  v33 = a6;
  v37 = a7;
  v35 = a9;
  v36 = a3;
  v29 = a2;
  v38 = a1;
  v34 = a13;
  memset(AccessState, 0, sizeof(AccessState));
  CurrentThread = KeGetCurrentThread();
  v40 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  v30 = 0LL;
  v16 = 0LL;
  v27 = PreviousMode;
  Thread = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    v16 = (_KPROCESS *)Object;
    goto LABEL_5;
  }
  if ( a8 )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v16 = a5;
LABEL_6:
  v19 = Process;
  if ( v16 != Process )
  {
    if ( !PspIsProcessReadyForRemoteThread((ULONG_PTR)v16) )
      return 3221225473LL;
    v19 = Process;
  }
  v20 = a11;
  if ( a11 && a8 )
    v20 = -(__int64)((v16->SecureState.SecureHandle & 1) != 0) & a11;
  if ( !v33
    && !v20
    && ((*(_DWORD *)&v16[2].Spare2[7] & 1) != 0
     || (*(_DWORD *)&v19[2].Spare2[7] & 1) != 0
     || (*(_DWORD *)&v16[2].Spare2[11] & 0x4000) != 0
     || (*(_DWORD *)&v19[2].Spare2[11] & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v27 )
  {
    v25 = HIDWORD(v16[2].ActiveProcessors.Bitmap[4]);
    if ( (v25 & 0x1000) != 0 || (v25 & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v16, 0x72437350u);
      return (unsigned int)Thread;
    }
  }
  if ( (v16[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) != 0 && !v16[2].ActiveProcessors.Bitmap[13] && a8 )
  {
    Thread = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, &v28);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    Thread = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v16, 0x72437350u);
  v39 = v35;
  v26 = v20;
  v21 = v33;
  Thread = PspAllocateThread(
             (ULONG_PTR)v16,
             a8,
             (__int64)&v39,
             v26,
             a12,
             (__int64)&v28,
             (__int64)&v30,
             v34,
             (__int64)AccessState);
  if ( Thread < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v16, 0x72437350u);
  inserted = PspInsertThread(
               (char *)v30,
               v16,
               v35,
               &v28,
               v29,
               (_BYTE *)v34,
               v21,
               a12,
               (PACCESS_STATE)AccessState,
               (PVOID *)v38,
               (_OWORD *)v37);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v16[1].ProfileListHead.Blink;
  v24 = inserted;
  ExReleaseRundownProtection_0(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ObfDereferenceObject(v30);
  return v24;
}
