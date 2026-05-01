/*
 * XREFs of ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180061A00
 * Callers:
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x1800120A4 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180061AF0 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180064F7C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005B194 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18005B37C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 */

void __fastcall RmpPolicyReclaimHostList(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a5)
{
  __int64 i; // rbx
  __int64 v10; // rcx
  __int64 v11; // r10
  int v12; // r8d
  __int64 v13; // rax
  int v14; // r8d
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(v10 + 24 * i + 8);
    if ( *(_DWORD *)(v10 + 24 * i + 16) == 1 )
    {
      v12 = *(_DWORD *)(v10 + 24 * i + 20);
      v13 = *(_QWORD *)(v10 + 24 * i);
      v16 = 0LL;
      v15[1] = 0LL;
      v14 = v12 & 1;
      if ( v14 )
        v13 = -1LL;
      v15[0] = v13;
      LODWORD(v16) = v16 & 0xFFFFFFF8 | (4 * v14) | (*(_DWORD *)(v11 + 1188) >> 4) & 1;
      RmpActivityHostDecommitOfferedMemory((struct _RM_ACTIVITY_HOST *)v11, (struct _RM_OFFERED_DECOMMIT_INFO *)v15);
    }
    else
    {
      if ( a5 )
        RmpActivityHostAddToRemediationGroup(*(struct _RM_ACTIVITY_HOST **)(v10 + 24 * i + 8), a5);
      RmpActivityHostRevokeResourceSets(v11, a2, a3, a4);
    }
  }
}
