/*
 * XREFs of NtReplaceKey @ 0x1408242F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmpNameFromAttributes @ 0x14063D5C0 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x14063D8D8 (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x14064DA30 (CmPostCallbackNotificationEx.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  char v6; // si
  char PreviousMode; // di
  struct _KTHREAD *CurrentThread; // rax
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
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v23; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v25; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v26; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[6]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  NTSTATUS *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+E0h] [rbp-20h] BYREF

  Object = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  *(_QWORD *)&v25.Length = 0LL;
  v25.Buffer = 0LL;
  memset(v27, 0, sizeof(v27));
  v23 = &v22;
  v22 = (__int64)&v22;
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
        v10 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v26, v11);
        if ( v10 >= 0 )
        {
          v10 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v25, v13);
          if ( v10 >= 0 )
          {
            v15 = CmObReferenceObjectByHandle(Key, 0, v14, PreviousMode, &Object, 0LL);
            v17 = Object;
            v10 = v15;
            if ( v15 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
                  || (v27[0] = v17,
                      v27[1] = &v25,
                      v27[2] = &v26,
                      v18 = CmpCallCallBacksEx(0x2Du, (__int64)v27, 0LL, 1, 0x2Eu, 0LL, (__int64)&v22),
                      v10 = v18,
                      v18 >= 0) )
                {
                  v19 = CmReplaceKey(*(_QWORD *)(v17[1] + 32LL), v16, &v26, &v25);
                  v10 = CmPostCallbackNotificationEx(0x2Eu, (__int64)v17, v19, (__int64)v27, 0LL, &v22);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
  }
  if ( v25.Buffer )
    ExFreePoolWithTag(v25.Buffer, 0);
  if ( v26.Buffer )
    ExFreePoolWithTag(v26.Buffer, 0);
  if ( v6 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 >= 0 )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
      TlgWrite(&stru_140425BC0, &unk_14038B837, 0LL, 0LL, 2u, &v31);
  }
  else if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
  {
    v21 = v10;
    v29 = &v21;
    v30 = 4LL;
    TlgWrite(&stru_140425BC0, &unk_14038B85D, 0LL, 0LL, 3u, &pData);
  }
  return v10;
}
