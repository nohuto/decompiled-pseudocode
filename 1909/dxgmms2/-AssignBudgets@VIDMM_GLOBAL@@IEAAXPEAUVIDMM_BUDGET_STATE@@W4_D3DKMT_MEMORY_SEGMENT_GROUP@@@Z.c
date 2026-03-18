/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C31B0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C3074 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C3874 (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  __int64 v3; // rbx
  __int64 v6; // r9
  __int64 v7; // r11
  _QWORD *v8; // rax
  _QWORD *i; // rbx
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx

  v3 = a3;
  VIDMM_GLOBAL::BucketizeBudgetStateProcesses(this, *(_DWORD *)a2, a3);
  v6 = *(unsigned int *)a2;
  v7 = *((_QWORD *)this + 5023);
  if ( (*(_BYTE *)(v7 + 24 * (v3 + 65 * v6) + 512) & 1) != 0 )
  {
    v8 = VIDMM_PARTITION::_PartitionTree;
    i = 0LL;
    while ( v8 )
    {
      i = v8;
      v8 = (_QWORD *)*v8;
    }
    while ( i )
    {
      VIDMM_GLOBAL::AssignBudgets(
        this,
        a2,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL)
                                                       + i[5]
                                                       + 24)
                                           + 328LL * *(unsigned int *)a2));
      v10 = (_QWORD **)i[1];
      v11 = i;
      if ( v10 )
      {
        v12 = *v10;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignBudgets(this, a2, (struct VIDMM_SEGMENT_GROUP_STATE *)(328 * v3 + 544 + v7 + 1560 * v6));
  }
}
