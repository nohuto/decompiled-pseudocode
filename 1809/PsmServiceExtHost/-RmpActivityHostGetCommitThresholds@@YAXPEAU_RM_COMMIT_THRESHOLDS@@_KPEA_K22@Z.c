/*
 * XREFs of ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z @ 0x18000B128
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180011E9C (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 */

void __fastcall RmpActivityHostGetCommitThresholds(
        struct _RM_COMMIT_THRESHOLDS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_QWORD *)a1;
  v7 = *((_QWORD *)a1 + 3);
  if ( a2 >= *(_QWORD *)a1 )
  {
    if ( a2 < *((_QWORD *)a1 + 1) )
    {
      v10 = *(_QWORD *)a1;
      v5 = *((_QWORD *)a1 + 1);
    }
    else if ( a2 < *((_QWORD *)a1 + 2) )
    {
      v10 = *((_QWORD *)a1 + 1);
      v5 = *((_QWORD *)a1 + 2);
    }
    else
    {
      v10 = *((_QWORD *)a1 + 2);
      v5 = -1LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(a2, *((_QWORD *)a1 + 3), &v13, &v14);
  v11 = v14;
  if ( v10 <= v13 )
    v10 = v13;
  if ( a2 <= v7 && v5 >= v14 )
    v5 = v14;
  v12 = a5;
  *a3 = v10;
  *a4 = v5;
  if ( v12 )
    *v12 = v11;
}
