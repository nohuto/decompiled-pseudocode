/*
 * XREFs of PspCreateThread @ 0x140622D64
 * Callers:
 *     NtCreateThreadEx @ 0x140623100 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x140889180 (NtCreateThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1401322F0 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     PspMapThreadCreationFlags @ 0x1406230A4 (PspMapThreadCreationFlags.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rdx
  char PreviousMode; // cl
  _KPROCESS *v16; // rbx
  int v17; // edi
  __int64 result; // rax
  _KPROCESS *v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r12
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v29; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  _KPROCESS *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38[3]; // [rsp+B8h] [rbp-48h] BYREF
  struct _ACCESS_STATE v39[2]; // [rsp+D0h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v37 = a1;
  v32 = a6;
  v36 = a7;
  v34 = a9;
  HIDWORD(v28) = a2;
  Process = CurrentThread->ApcState.Process;
  v33 = a13;
  v35 = a3;
  v31 = Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  v29 = 0LL;
  v16 = 0LL;
  v27 = PreviousMode;
  v17 = -1073741816;
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
  v19 = v31;
  if ( v16 != v31 )
  {
    if ( !PspIsProcessReadyForRemoteThread((__int64)v16) )
      return 3221225473LL;
    v19 = v31;
  }
  v20 = a11;
  if ( a11 && a8 )
    v20 = -(__int64)((v16->SecureState.SecureHandle & 1) != 0) & a11;
  if ( !v32
    && !v20
    && ((v16[2].UserTime & 1) != 0
     || (v19[2].UserTime & 1) != 0
     || (v16[2].ReadyTime & 0x4000) != 0
     || (v19[2].ReadyTime & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v27 )
  {
    v25 = HIDWORD(v16[2].ActiveProcessors.Bitmap[0]);
    if ( (v25 & 0x1000) != 0 || (v25 & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v16, 0x72437350u);
      return (unsigned int)v17;
    }
  }
  if ( (v16[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 && !v16[2].ActiveProcessors.Bitmap[9] && a8 )
  {
    v17 = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, &v28);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v17 = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v16, 0x72437350u);
  v38[0] = v34;
  v26 = v20;
  v21 = v32;
  v17 = PspAllocateThread(v16, v35, v27, v32, a8, v38, v26, a12, (int *)&v28, &v29, (_BYTE *)v33, (__int64)v39);
  if ( v17 < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v16, 0x72437350u);
  inserted = PspInsertThread(
               (ULONG_PTR)v29,
               v16,
               v34,
               &v28,
               HIDWORD(v28),
               (_BYTE *)v33,
               v21,
               a12,
               v39,
               (PVOID *)v37,
               (_OWORD *)v36);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v16[1].ProfileListHead.Blink;
  v24 = inserted;
  ExReleaseRundownProtection_0(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ObfDereferenceObject(v29);
  return v24;
}
