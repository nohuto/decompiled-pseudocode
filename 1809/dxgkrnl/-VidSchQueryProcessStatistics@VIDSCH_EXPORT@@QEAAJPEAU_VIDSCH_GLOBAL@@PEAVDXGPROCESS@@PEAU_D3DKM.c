/*
 * XREFs of ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C0035020
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C01D3F38 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchQueryProcessStatistics(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax

  v4 = *((_QWORD *)a3 + 9);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1208LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *))(*((_QWORD *)this + 1) + 712LL))(
           a2,
           v4,
           a4);
}
