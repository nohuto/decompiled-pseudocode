/*
 * XREFs of NtDeleteKey @ 0x14063B0D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     CmDoVirtualTest @ 0x1400F40D0 (CmDoVirtualTest.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082B300 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarm @ 0x1408DE7D0 (SeDeleteObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DE7F0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // r14
  char v3; // r12
  char v4; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v6; // r8
  char v7; // bl
  int v8; // edi
  __int64 v9; // r8
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  char v20; // [rsp+48h] [rbp-89h]
  PVOID Object; // [rsp+50h] [rbp-81h] BYREF
  int v22; // [rsp+58h] [rbp-79h] BYREF
  __int64 v23; // [rsp+60h] [rbp-71h] BYREF
  __int64 v24; // [rsp+68h] [rbp-69h]
  __int64 v25; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v28[4]; // [rsp+B0h] [rbp-21h] BYREF
  GUID TransactionId; // [rsp+D0h] [rbp-1h] BYREF
  LARGE_INTEGER v30[4]; // [rsp+E0h] [rbp+Fh] BYREF

  v23 = 0LL;
  v22 = 0;
  v2 = 0;
  memset(v28, 0, sizeof(v28));
  memset(v30, 0, sizeof(v30));
  v24 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v30, 0x20000u);
  Object = 0LL;
  v3 = 0;
  v4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v26[1] = v26;
  v26[0] = v26;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = CmpAcquireShutdownRundown();
  v7 = v20;
  if ( !v20 )
  {
    v8 = -1073741431;
    goto LABEL_55;
  }
  v8 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v6, PreviousMode, &Object, &v23);
  if ( v8 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v22) )
    {
      v8 = -1073741790;
      v10 = Object;
LABEL_47:
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_48;
    }
    v11 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v9, PreviousMode, &Object, &v23);
    v10 = Object;
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_47;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v8 = -1073741790;
      goto LABEL_47;
    }
    v2 = 1;
  }
  else
  {
    v10 = Object;
  }
  if ( v8 >= 0 )
  {
    KeEnterCriticalRegion();
    v8 = 0;
    v4 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v28[0] = v10;
      v13 = CmpCallCallBacks(0, (__int64)v28, v12, 0xFu, (__int64)v10, (__int64)v26);
      v8 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v8 = 0;
        goto LABEL_46;
      }
      v3 = 1;
      v8 = 0;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v10 )
      v24 = v10[1];
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v10[1] == *((_QWORD *)ExpControlKey + 1)
      || qword_140431F48 && v10[1] == *((_QWORD *)qword_140431F48 + 1) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v10 = Object;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v10 = Object;
      v15 = *((_QWORD *)Object + 1);
      if ( (*(_DWORD *)(v15 + 8) & 0x80u) != 0 )
        goto LABEL_45;
      v16 = *(_QWORD *)(v15 + 72);
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 8) & 0x80u) != 0 )
          goto LABEL_45;
      }
      if ( !v2 )
        goto LABEL_39;
      LOBYTE(v14) = PreviousMode;
      v17 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v14, 0x10000, (unsigned int)&SubjectContext, (__int64)&v22);
      v10 = Object;
      v8 = v17;
      if ( v17 < 0 )
        goto LABEL_46;
      if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
      {
LABEL_45:
        v8 = -1073741790;
      }
      else
      {
LABEL_39:
        v8 = CmDeleteKey(v10);
        if ( v8 >= 0 && (v23 & 4) != 0 )
        {
          if ( v10[7] || v10[8] )
          {
            *(_QWORD *)&TransactionId.Data1 = 0LL;
            *(_QWORD *)TransactionId.Data4 = 0LL;
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v10, &v25);
            TransactionId = *(GUID *)(v25 + 88);
            CmpUnlockRegistry();
            SeDeleteObjectAuditAlarmWithTransaction(v10, KeyHandle, &TransactionId);
          }
          else
          {
            SeDeleteObjectAuditAlarm(v10, KeyHandle);
          }
        }
      }
    }
  }
LABEL_46:
  if ( v2 )
    goto LABEL_47;
LABEL_48:
  if ( v3 )
    v8 = CmPostCallbackNotification(0xFu, (__int64)v10, v8, (__int64)v28, v26);
  if ( v4 )
    KeLeaveCriticalRegion();
  if ( v10 )
    ObfDereferenceObject(v10);
  v7 = v20;
LABEL_55:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v18 = v24;
    LOBYTE(v18) = 12;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v18,
      v30,
      (unsigned int)v8,
      0LL,
      v24,
      0LL);
  }
  if ( v7 )
    CmpReleaseShutdownRundown();
  return v8;
}
