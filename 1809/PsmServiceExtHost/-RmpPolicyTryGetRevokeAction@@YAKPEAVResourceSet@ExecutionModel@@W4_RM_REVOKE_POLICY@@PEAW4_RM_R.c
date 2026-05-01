/*
 * XREFs of ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x180061C1C
 * Callers:
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180061B48 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyTryGetRevokeAction(__int64 a1, int a2, int *a3)
{
  __int16 v3; // ax
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax

  v3 = *(_WORD *)(a1 + 1496);
  v4 = a2 - 1;
  if ( !v4 )
    goto LABEL_10;
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 1;
    if ( (v3 & 1) != 0 )
      goto LABEL_12;
    if ( (v3 & 2) != 0 )
      goto LABEL_9;
    return 0;
  }
  if ( v5 != 1 )
    return 0;
  if ( (v3 & 2) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 1440) + 1106LL) & 0x20) != 0 )
  {
    v6 = 1;
LABEL_9:
    v7 = 1;
    goto LABEL_13;
  }
LABEL_10:
  v6 = 1;
  if ( (v3 & 1) == 0 )
    return 0;
LABEL_12:
  v7 = 0;
LABEL_13:
  if ( a3 )
    *a3 = v7;
  return v6;
}
