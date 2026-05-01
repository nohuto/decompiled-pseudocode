/*
 * XREFs of ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38
 * Callers:
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006082C (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180061A00 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180064644 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180012360 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18005B868 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x180061C1C (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180061E90 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

void __fastcall RmpActivityHostRevokeResourceSets(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  UCHAR v8; // dl
  unsigned int v9; // edi
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-69h] BYREF
  __int64 v23; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-39h]
  int v26; // [rsp+78h] [rbp-31h]
  int v27; // [rsp+7Ch] [rbp-2Dh]
  char *v28; // [rsp+80h] [rbp-29h]
  int v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  int *v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  unsigned __int64 *v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A8h] [rbp-1h]
  int v36; // [rsp+ACh] [rbp+3h]
  unsigned int *v37; // [rsp+B0h] [rbp+7h]
  int v38; // [rsp+B8h] [rbp+Fh]
  int v39; // [rsp+BCh] [rbp+13h]

  v22 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a1, 0LL, 0LL, &v22);
  v9 = 1;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v8, 0LL) )
  {
    RmpActivityHostQueryEffectivePriority(
      (struct _RM_ACTIVITY_HOST *)a1,
      v22,
      (enum ExecutionModel::Priority::Enum *)&v20);
    if ( dword_18009B0B0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v11 = *(_QWORD *)(a1 + 32);
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v23 = v11;
        v25 = &v23;
        v28 = &v19;
        v31 = (int *)&v20;
        v34 = &v22;
        v37 = &v21;
        v26 = 8;
        v19 = a2;
        v29 = 1;
        v20 = a3;
        v32 = 4;
        v35 = 8;
        v21 = v10;
        v38 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800864AA, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 812) & 1) != 0 )
  {
    if ( a2 <= 0 || a2 > 2 && (v9 = 3, a2 != 3) )
      v9 = 4;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    HampHostQueueTerminateEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), v9, (unsigned __int8)a3 | 0x700, 0LL, 3, 0);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1080);
    v13 = 0LL;
    v14 = v12 - 1416;
    v15 = v12 == a1 + 1080;
    while ( 1 )
    {
      if ( !v15 )
        v13 = v14;
      if ( !v13 )
        break;
      if ( (unsigned int)RmpPolicyTryGetRevokeAction(v13, (unsigned int)a2, &v21)
        && (a2 != 2 || !v21 || (*(_BYTE *)(a1 + 1106) & 0x10) == 0) )
      {
        ExecutionModel::ResourceSet::Revoke(v13, v21, a3, v22, a4);
      }
      v16 = *(_QWORD *)(v13 + 1416);
      v17 = 3 * (*(int *)(v13 + 1448) + 44LL);
      v18 = *(_QWORD *)(v13 + 1440);
      v13 = 0LL;
      v15 = v16 == v18 + 8 * v17;
      v14 = v16 - 1416;
    }
  }
}
