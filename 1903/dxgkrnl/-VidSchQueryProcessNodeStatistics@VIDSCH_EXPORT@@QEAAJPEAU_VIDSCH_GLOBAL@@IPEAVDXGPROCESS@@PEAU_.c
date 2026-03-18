/*
 * XREFs of ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C003B87C
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C02011AC (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C025D578 (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct DXGPROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION *a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax

  v5 = *((_QWORD *)a4 + 9);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 1239LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION *))(*((_QWORD *)this + 1) + 728LL))(
           a2,
           a3,
           v5,
           a5);
}
