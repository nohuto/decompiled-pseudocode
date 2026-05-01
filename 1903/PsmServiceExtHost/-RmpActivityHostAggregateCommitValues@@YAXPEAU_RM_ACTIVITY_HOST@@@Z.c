/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C124
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000C2B4 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000C328 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x18000C37C (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  struct ExecutionModel::ResourceSet *Next; // rax
  __int128 v3; // xmm1
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 First; // [rsp+20h] [rbp-50h] BYREF
  int v7; // [rsp+28h] [rbp-48h]
  int v8; // [rsp+2Ch] [rbp-44h]
  _QWORD v9[4]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v10[2]; // [rsp+50h] [rbp-20h] BYREF

  memset_0(v10, 0, sizeof(v10));
  v8 = 0;
  v7 = 2;
  First = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL, 0LL);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
    if ( !Next )
      break;
    v9[3] = *((_QWORD *)Next + 175);
    v9[2] = *((_QWORD *)Next + 170);
    v4 = *((_QWORD *)Next + 174);
    v5 = *((_QWORD *)Next + 212);
    v9[1] = v4;
    v9[0] = v5;
    RmpCommitThresholdsAdd(
      (struct _RM_COMMIT_THRESHOLDS *)v10,
      (struct _RM_COMMIT_THRESHOLDS *)v9,
      (struct _RM_COMMIT_THRESHOLDS *)v10);
  }
  v3 = v10[1];
  *((_OWORD *)a1 + 83) = v10[0];
  *((_OWORD *)a1 + 84) = v3;
}
