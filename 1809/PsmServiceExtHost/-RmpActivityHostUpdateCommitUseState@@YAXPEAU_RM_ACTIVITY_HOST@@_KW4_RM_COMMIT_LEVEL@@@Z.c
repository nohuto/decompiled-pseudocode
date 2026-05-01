/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012130
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012AC8 (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180017FCC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  ULONGLONG v7; // r10
  char v8; // [rsp+30h] [rbp-79h] BYREF
  int v9; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-71h] BYREF
  __int64 v11; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v14; // [rsp+70h] [rbp-39h]
  int v15; // [rsp+78h] [rbp-31h]
  int v16; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  int *v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  char *v20; // [rsp+A0h] [rbp-9h]
  ULONGLONG v21; // [rsp+A8h] [rbp-1h]
  __int64 *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  __int64 v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  __int64 *v26; // [rsp+D0h] [rbp+27h]
  __int64 v27; // [rsp+D8h] [rbp+2Fh]

  v3 = *(_QWORD *)(a1 + 1304);
  v5 = *(unsigned int *)(a1 + 1320);
  v10 = a2;
  if ( v3 <= a2 )
    v3 = a2;
  *(_QWORD *)(a1 + 1304) = v3;
  if ( (_DWORD)v5 != a3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 2688LL) + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2688LL),
      a1,
      v5,
      (unsigned int)a3);
    RmpActivityHostNotifySubscribers(a1, v10, (unsigned int)a3);
    v11 = *(_QWORD *)(a1 + 1128);
    if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 88));
      v9 = *(_DWORD *)(a1 + 624);
      v18 = &v9;
      v20 = &v8;
      v22 = (__int64 *)&v10;
      v24 = a1 + 1288;
      v26 = &v11;
      v19 = 4LL;
      v8 = a3;
      v21 = v7;
      v23 = (unsigned int)(v7 + 7);
      v25 = v23;
      v27 = v23;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18009B0B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085E48 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = v7;
      UserData.Size = *(unsigned __int16 *)off_18009B0B8;
      v14 = &unk_180085E53;
      UserData.Reserved = 2;
      v15 = 122;
      v16 = v7;
      EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, v7 + 7, &UserData);
    }
    if ( a3 >= 4 && *(int *)(a1 + 1320) < 4 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 2688LL));
    *(_DWORD *)(a1 + 1320) = a3;
  }
}
