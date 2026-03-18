/*
 * XREFs of CmUnloadKey @ 0x1406B8CA4
 * Callers:
 *     NtUnloadKey @ 0x1406B8B80 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x1406B8BA0 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140749F20 (NtUnloadKey2.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmConvertHandleToKernelHandle @ 0x14063D520 (CmConvertHandleToKernelHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     CmpRetryBackOff @ 0x1408315E8 (CmpRetryBackOff.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  char v5; // r15
  unsigned int v6; // esi
  KPROCESSOR_MODE PreviousMode; // r14
  char v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 Length; // bx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  wchar_t *v13; // rsi
  void *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  signed int v19; // ebx
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  int Object; // [rsp+20h] [rbp-268h]
  char v26; // [rsp+42h] [rbp-246h]
  PVOID v27; // [rsp+48h] [rbp-240h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-238h] BYREF
  PVOID v29; // [rsp+60h] [rbp-228h]
  unsigned int v30; // [rsp+68h] [rbp-220h]
  _DWORD v31[3]; // [rsp+6Ch] [rbp-21Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-210h]
  HANDLE Handle; // [rsp+80h] [rbp-208h] BYREF
  __int128 v34; // [rsp+88h] [rbp-200h] BYREF
  UNICODE_STRING v35; // [rsp+A0h] [rbp-1E8h]
  PVOID v36; // [rsp+B0h] [rbp-1D8h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-1D0h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-1C0h]
  __int128 v39; // [rsp+D8h] [rbp-1B0h]
  _QWORD v40[5]; // [rsp+E8h] [rbp-1A0h] BYREF
  _QWORD v41[38]; // [rsp+110h] [rbp-178h] BYREF

  v5 = a3;
  v6 = a2;
  v30 = a2;
  memset(v41, 0, 0x128uLL);
  v34 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v41, 0, 0x128uLL);
  v41[19] = &v41[18];
  v41[18] = &v41[18];
  memset(&v41[27], 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = 0LL;
  v29 = 0LL;
  Privileges = 0LL;
  Handle = 0LL;
  memset(v40, 0, sizeof(v40));
  v9 = 0;
  *((_QWORD *)&v34 + 1) = &v34;
  *(_QWORD *)&v34 = &v34;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = CmpAcquireShutdownRundown();
  if ( !v26 )
  {
LABEL_51:
    v19 = -1073741431;
    goto LABEL_36;
  }
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    if ( (v6 & 0xFFFFFFFE) != 0 )
    {
      v19 = -1073741811;
    }
    else
    {
      if ( PreviousMode == 1 && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v37 = *(_OWORD *)a1;
      v38 = *(_OWORD *)(a1 + 16);
      v39 = *(_OWORD *)(a1 + 32);
      if ( PreviousMode == 1 )
      {
        v35 = (UNICODE_STRING)0LL;
        v15 = v38;
        if ( (unsigned __int64)v38 >= 0x7FFFFFFF0000LL )
          v15 = 0x7FFFFFFF0000LL;
        v16 = *(_DWORD *)v15;
        *(_DWORD *)&v35.Length = v16;
        v17 = *(_QWORD *)(v15 + 8);
        v35.Buffer = (wchar_t *)v17;
        DestinationString = v35;
        if ( (_WORD)v16 )
        {
          if ( (v17 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = v17 + (unsigned __int16)v16;
          if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
      }
      Length = DestinationString.Length;
      if ( DestinationString.Length )
      {
        TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                               0x7FFFFFFF0000LL,
                                                               DestinationString.Length,
                                                               0x35374D43u);
        Privileges = TransientPoolWithQuotaTag;
        if ( !TransientPoolWithQuotaTag )
        {
          v19 = -1073741670;
          v31[1] = -1073741670;
          goto LABEL_36;
        }
        v13 = (wchar_t *)TransientPoolWithQuotaTag;
        memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
        DestinationString.Length = Length;
        DestinationString.MaximumLength = Length;
        DestinationString.Buffer = v13;
        v6 = v30;
        v5 = a3;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      *(_QWORD *)&v38 = &DestinationString;
      v39 = 0LL;
      if ( PreviousMode == 1 )
      {
        v19 = CmConvertHandleToKernelHandle(*((void **)&v37 + 1), v14, 1, 0, &Handle);
        if ( v19 < 0 )
          goto LABEL_36;
        *((_QWORD *)&v37 + 1) = Handle;
      }
      LODWORD(v41[3]) = 0;
      LODWORD(v41[0]) = 4;
      LOBYTE(Object) = 0;
      v20 = ObReferenceObjectByNameEx(&v37, v14, 0LL, CmKeyObjectType, Object, v41, &v27);
      if ( v20 == -1073741772 )
        v20 = -1073741811;
      v19 = v20;
      if ( v20 >= 0 )
      {
        if ( a4 )
        {
          v19 = ObReferenceObjectByHandle(a4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v36, 0LL);
          v29 = v36;
          if ( v19 < 0 )
            goto LABEL_36;
          KeResetEvent((PRKEVENT)v36);
        }
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
          goto LABEL_33;
        v40[0] = v27;
        v40[1] = v29;
        v22 = CmpCallCallBacks(0x22u, (__int64)v40, v21, 0x23u, (__int64)v27, (__int64)&v34);
        v19 = v22;
        if ( v22 >= 0 )
        {
          v9 = 1;
LABEL_33:
          v31[0] = 0;
          while ( (CmpShutdownRundown & 1) == 0 )
          {
            LOBYTE(v21) = v5;
            v19 = CmpPerformUnloadKey(v27, v6, v21, v29);
            if ( v19 != -1073741267 )
              goto LABEL_36;
            CmpRetryBackOff(v31);
          }
          goto LABEL_51;
        }
        if ( v22 == -1073740541 )
          v19 = 0;
      }
    }
  }
  else
  {
    v19 = -1073741727;
  }
LABEL_36:
  if ( v9 )
    v19 = CmPostCallbackNotification(0x23u, (__int64)v27, v19, (__int64)v40, &v34);
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext((__int64)v41, 0);
  if ( v26 )
    CmpReleaseShutdownRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
