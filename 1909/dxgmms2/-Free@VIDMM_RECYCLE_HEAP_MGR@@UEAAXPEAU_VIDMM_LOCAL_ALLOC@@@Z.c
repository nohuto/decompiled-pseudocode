/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0066F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00021D8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0002248 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002280 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0067004 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00BB1B8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  char *v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  v6 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v5 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
  v4 = *((_QWORD *)a2 + 3);
  *(_QWORD *)(*((_QWORD *)this + 1) + 128LL) += *(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 40);
  VIDMM_RECYCLE_MULTIRANGE::Decommit((PSLIST_ENTRY)v4);
  if ( v7 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v6);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
