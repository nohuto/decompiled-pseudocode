/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180019BBC
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180019180 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000C7E4 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x1800184AC (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  int v7; // edx
  ULONGLONG v8; // r9
  char v9; // [rsp+30h] [rbp-79h] BYREF
  int v10; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-69h]
  __int64 v13; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v16; // [rsp+70h] [rbp-39h]
  int v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  int *v20; // [rsp+90h] [rbp-19h]
  __int64 v21; // [rsp+98h] [rbp-11h]
  char *v22; // [rsp+A0h] [rbp-9h]
  ULONGLONG v23; // [rsp+A8h] [rbp-1h]
  __int64 *v24; // [rsp+B0h] [rbp+7h]
  __int64 UserDataCount; // [rsp+B8h] [rbp+Fh]
  __int64 v26; // [rsp+C0h] [rbp+17h]
  __int64 v27; // [rsp+C8h] [rbp+1Fh]
  __int64 *v28; // [rsp+D0h] [rbp+27h]
  __int64 v29; // [rsp+D8h] [rbp+2Fh]

  v3 = *(_QWORD *)(a1 + 1360);
  v5 = *(unsigned int *)(a1 + 1376);
  v11 = a2;
  if ( v3 <= a2 )
    v3 = a2;
  *(_QWORD *)(a1 + 1360) = v3;
  if ( (_DWORD)v5 != a3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 2624LL) + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2624LL),
      a1,
      v5,
      (unsigned int)a3);
    RmpActivityHostNotifySubscribers((_QWORD *)a1, v11, a3);
    v13 = *(_QWORD *)(a1 + 1184);
    if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 88));
      v7 = *(_DWORD *)(a1 + 624);
      v20 = &v10;
      v22 = &v9;
      v24 = (__int64 *)&v11;
      v26 = a1 + 1344;
      v10 = v7;
      v28 = &v13;
      v21 = 4LL;
      v9 = a3;
      v23 = v8;
      UserDataCount = (unsigned int)(v8 + 7);
      v27 = UserDataCount;
      v29 = UserDataCount;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB288;
      EventDescriptor.Keyword = v8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800AB288;
      v16 = &unk_180093C10;
      v18 = v8;
      UserData.Reserved = 2;
      v17 = 122;
      v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, UserDataCount, &UserData);
    }
    if ( a3 >= 4 && *(int *)(a1 + 1376) < 4 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 2624LL));
    *(_DWORD *)(a1 + 1376) = a3;
  }
}
