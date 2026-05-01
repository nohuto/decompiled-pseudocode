/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180012360
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180001EA0 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180036D50 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     RmpTracingControlCallback @ 0x18003DC40 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18005B37C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180012614 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001270C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  const WCHAR *v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  const WCHAR *v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  __int64 *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  const WCHAR *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]

  v8 = (const WCHAR *)((char *)a1 + 88);
  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 6) + 40LL),
             (const unsigned __int16 *)a1 + 44,
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
             *((_DWORD *)a1 + 155),
             *((_DWORD *)a1 + 156),
             *((_QWORD *)a1 + 4),
             &v20,
             &v19);
  if ( (int)result >= 0 )
  {
    if ( RmpActivityHostQueryCommitDebt(a1, &v18) < 0 )
    {
      v10 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v10 = v18;
    }
    v11 = v20;
    if ( v10 >= v20 )
      v10 = v20;
    v12 = v20 - v10;
    if ( v20 && v12 <= 1 )
      v12 = 1LL;
    v13 = v19;
    v14 = v12 + v19;
    v21 = v12 + v19;
    if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
    {
      v15 = &pwsz;
      v22 = *((_QWORD *)a1 + 4);
      v28 = &v22;
      LODWORD(v16) = 0;
      v29 = 8LL;
      if ( v8 )
      {
        v15 = v8;
        v16 = -1LL;
        do
          ++v16;
        while ( v8[v16] );
      }
      v30 = v15;
      v17 = *((_DWORD *)a1 + 156);
      v33 = &v17;
      v35 = &v21;
      v37 = &v20;
      v39 = &v19;
      v41 = &v18;
      v31 = 2 * v16 + 2;
      v32 = 0;
      v34 = 4LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18009B0B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085EFA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18009B0B8;
      v25 = &unk_180085F05;
      UserData.Reserved = 2;
      v26 = 150;
      v27 = 1;
      EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      v13 = v19;
      v11 = v20;
      v14 = v21;
    }
    if ( a2 )
      *a2 = v12;
    if ( a3 )
      *a3 = v11 + v13;
    if ( a4 )
      *a4 = v14;
    return 0LL;
  }
  return result;
}
