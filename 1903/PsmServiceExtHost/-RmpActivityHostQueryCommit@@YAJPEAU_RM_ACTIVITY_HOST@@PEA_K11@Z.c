/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180019DA0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180019180 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18003C280 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     RmpTracingControlCallback @ 0x180047410 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006812C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800685C0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180068A38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18001A020 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001A118 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  int v14; // edx
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]

  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 6) + 40LL),
             (const unsigned __int16 *)a1 + 44,
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
             *((_DWORD *)a1 + 155),
             *((_DWORD *)a1 + 156),
             *((_QWORD *)a1 + 4),
             &v18,
             &v17);
  if ( (int)result >= 0 )
  {
    if ( RmpActivityHostQueryCommitDebt(a1, &v16) < 0 )
    {
      v9 = 0LL;
      v16 = 0LL;
    }
    else
    {
      v9 = v16;
    }
    v10 = v18;
    if ( v9 >= v18 )
      v9 = v18;
    v11 = v18 - v9;
    if ( v18 && v11 <= 1 )
      v11 = 1LL;
    v12 = v17;
    v13 = v11 + v17;
    v19 = v11 + v17;
    if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
    {
      v21 = *((_QWORD *)a1 + 4);
      v28 = 8LL;
      v27 = &v21;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 44);
      v14 = *((_DWORD *)a1 + 156);
      v30 = &v15;
      v32 = &v19;
      v34 = &v18;
      v36 = &v17;
      v38 = &v16;
      v15 = v14;
      v31 = 4LL;
      v33 = 8LL;
      v35 = 8LL;
      v37 = 8LL;
      v39 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB288;
      v24 = &unk_180093CC2;
      UserData.Reserved = 2;
      v25 = 150;
      v26 = 1;
      v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      v12 = v17;
      v10 = v18;
      v13 = v19;
    }
    if ( a2 )
      *a2 = v11;
    if ( a3 )
      *a3 = v10 + v12;
    if ( a4 )
      *a4 = v13;
    return 0LL;
  }
  return result;
}
