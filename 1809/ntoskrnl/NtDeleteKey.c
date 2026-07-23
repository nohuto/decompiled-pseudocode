/*
 * XREFs of NtDeleteKey @ 0x1405AA940
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14012959C (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408A1880 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // r14
  __int64 v3; // rbx
  char v4; // r12
  char v5; // r13
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  NTSTATUS v11; // edi
  int v12; // r8d
  int v13; // r9d
  _QWORD *v14; // rbx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  int v17; // r9d
  int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  GUID *v22; // r8
  BOOLEAN v24; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-80h] BYREF
  PVOID v32[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v33[4]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v34; // [rsp+E0h] [rbp-28h] BYREF
  LARGE_INTEGER v35[4]; // [rsp+F0h] [rbp-18h] BYREF

  LODWORD(v26) = 0;
  v2 = 0;
  memset(v33, 0, sizeof(v33));
  memset(v35, 0, sizeof(v35));
  v3 = 0LL;
  v27 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v35, 0x20000u);
  CmpInitializeThreadInfo(v32);
  Object = 0LL;
  v4 = 0;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v30[1] = v30;
  v30[0] = v30;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v24 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v24 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = -1073741431;
    goto LABEL_56;
  }
  LOBYTE(v9) = PreviousMode;
  v11 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v8, v9, (__int64)&Object, (__int64)&v28);
  if ( v11 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v26) )
    {
      v11 = -1073741790;
      v14 = Object;
LABEL_48:
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_49;
    }
    LOBYTE(v13) = PreviousMode;
    v15 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v12, v13, (__int64)&Object, (__int64)&v28);
    v14 = Object;
    v11 = v15;
    if ( v15 < 0 )
      goto LABEL_48;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v11 = -1073741790;
      goto LABEL_48;
    }
    v2 = 1;
  }
  else
  {
    v14 = Object;
  }
  if ( v11 >= 0 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v14 = Object;
    v11 = 0;
    v5 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v33[0] = v14;
      LOBYTE(v17) = 1;
      v18 = CmpCallCallBacksEx(0, (unsigned int)v33, 0, v17, 15, (__int64)v14, (__int64)v30);
      v11 = v18;
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
          v11 = 0;
        goto LABEL_47;
      }
      v4 = 1;
      v11 = 0;
    }
    if ( CmpTraceRoutine && v14 )
      v27 = v14[1];
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v14[1] == *((_QWORD *)ExpControlKey + 1)
      || qword_14040AAB8 && v14[1] == *((_QWORD *)qword_14040AAB8 + 1) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v14 = Object;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v14 = Object;
      v10 = *((_QWORD *)Object + 1);
      if ( (*(_DWORD *)(v10 + 4) & 0x80u) != 0 )
        goto LABEL_46;
      v20 = *(_QWORD *)(v10 + 64);
      if ( v20 )
      {
        if ( (*(_DWORD *)(v20 + 4) & 0x80u) != 0 )
          goto LABEL_46;
      }
      if ( !v2 )
        goto LABEL_39;
      LOBYTE(v19) = PreviousMode;
      v21 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v19, 0x10000, (unsigned int)&SubjectContext, (__int64)&v26);
      v14 = Object;
      v11 = v21;
      if ( v21 < 0 )
        goto LABEL_47;
      if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 176LL) & 0x1000000) == 0 )
      {
LABEL_46:
        v11 = -1073741790;
      }
      else
      {
LABEL_39:
        v11 = CmDeleteKey(v14);
        if ( v11 >= 0 && (v28 & 4) != 0 )
        {
          if ( v14[7] || v14[8] )
          {
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v14, &v29);
            v34 = *(_OWORD *)(v29 + 88);
            CmpUnlockRegistry();
            v22 = (GUID *)&v34;
          }
          else
          {
            v22 = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v14, KeyHandle, v22);
        }
      }
    }
  }
LABEL_47:
  if ( v2 )
    goto LABEL_48;
LABEL_49:
  if ( v4 )
    v11 = CmPostCallbackNotificationEx(15, (_DWORD)v14, v11, (unsigned int)v33, 0LL, (__int64)v30);
  if ( v5 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v14 = Object;
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  v3 = v27;
LABEL_56:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v10) = 12;
    CmpTraceRoutine(v10, v35, (unsigned int)v11, 0LL, v3, 0LL);
  }
  if ( v24 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v32);
  return v11;
}
