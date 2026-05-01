/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B1D0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000B384 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B3F0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x18000B444 (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  struct ExecutionModel::ResourceSet *Next; // rdi
  __int128 v3; // xmm1
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[4]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v9[2]; // [rsp+50h] [rbp-20h] BYREF

  memset_0(v9, 0, sizeof(v9));
  v7[1] = 2LL;
  v7[0] = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL, 0LL);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v7);
    if ( !Next )
      break;
    memset_0(v8, 0, sizeof(v8));
    v4 = *((_QWORD *)Next + 189);
    v8[3] = *((_QWORD *)Next + 190);
    v5 = *((_QWORD *)Next + 185);
    v8[1] = v4;
    v6 = *((_QWORD *)Next + 227);
    v8[2] = v5;
    v8[0] = v6;
    RmpCommitThresholdsAdd(
      (struct _RM_COMMIT_THRESHOLDS *)v9,
      (struct _RM_COMMIT_THRESHOLDS *)v8,
      (struct _RM_COMMIT_THRESHOLDS *)v9);
  }
  v3 = v9[1];
  *(_OWORD *)((char *)a1 + 1272) = v9[0];
  *(_OWORD *)((char *)a1 + 1288) = v3;
}
