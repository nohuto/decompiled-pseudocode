/*
 * XREFs of ?SetCsCumulativeRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C003DCC4
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0228700 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::SetCsCumulativeRunningTime(DXGPROCESS *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax

  v3 = a2;
  if ( a2 >= 6 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1094LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v3) = a3;
}
