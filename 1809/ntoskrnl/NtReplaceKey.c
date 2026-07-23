/*
 * XREFs of NtReplaceKey @ 0x1407EB270
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpNameFromAttributes @ 0x1405B8860 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  char v6; // si
  char PreviousMode; // di
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v9; // r13
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  struct _KTHREAD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  int v18; // eax
  unsigned int v19; // eax
  NTSTATUS v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  _SLIST_ENTRY v23; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-90h] BYREF
  PVOID v26[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v27[6]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  NTSTATUS *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+F0h] [rbp-10h] BYREF

  Object = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)&v25.Length = 0LL;
  v25.Buffer = 0LL;
  *(_QWORD *)&v24.Length = 0LL;
  v24.Buffer = 0LL;
  memset(v27, 0, sizeof(v27));
  *((_QWORD *)&v23.Next + 1) = &v23;
  v23.Next = &v23;
  CmpInitializeThreadInfo(v26);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        v6 = 1;
        v10 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v25, v11);
        if ( v10 >= 0 )
        {
          v10 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v24, v13);
          if ( v10 >= 0 )
          {
            v15 = CmObReferenceObjectByHandle(Key, 0, v14, PreviousMode, &Object, 0LL);
            v17 = Object;
            v10 = v15;
            if ( v15 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || CmpIsRegistryLockAcquired()
                  || (v27[0] = v17,
                      v27[1] = &v24,
                      v27[2] = &v25,
                      v18 = CmpCallCallBacksEx(0x2Du, (__int64)v27, 0LL, 1, 0x2Eu, 0LL, &v23),
                      v10 = v18,
                      v18 >= 0) )
                {
                  v19 = CmReplaceKey(*(_QWORD *)(v17[1] + 24LL), v16, &v25, &v24);
                  v10 = CmPostCallbackNotificationEx(0x2Eu, (__int64)v17, v19, (__int64)v27, 0LL, &v23);
                  if ( v10 == -1073740541 )
                    v10 = 0;
                }
                else if ( v18 == -1073740541 )
                {
                  v10 = 0;
                }
              }
              else
              {
                v10 = -1073741790;
              }
            }
            if ( v17 )
              ObfDereferenceObject(v17);
          }
        }
      }
      else
      {
        v10 = -1073741727;
      }
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = -1073741431;
  }
  if ( v24.Buffer )
    ExFreePoolWithTag(v24.Buffer, 0);
  if ( v25.Buffer )
    ExFreePoolWithTag(v25.Buffer, 0);
  if ( v6 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v26);
  if ( v10 >= 0 )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
      TlgWrite(&stru_140400AA0, &unk_14036CAA7, 0LL, 0LL, 2u, &v31);
  }
  else if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
  {
    v21 = v10;
    v29 = &v21;
    v30 = 4LL;
    TlgWrite(&stru_140400AA0, &unk_14036CACD, 0LL, 0LL, 3u, &pData);
  }
  return v10;
}
