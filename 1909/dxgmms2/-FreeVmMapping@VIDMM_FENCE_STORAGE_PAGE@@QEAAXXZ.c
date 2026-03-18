/*
 * XREFs of ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00807A0
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C008071C (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00B6A58 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B59D8 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(VIDMM_FENCE_STORAGE_PAGE *this)
{
  void *v1; // rdx
  VIDMM_PROCESS *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (void *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    v3 = (VIDMM_PROCESS *)*((_QWORD *)this + 4);
    if ( !v3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(0LL, v1);
      *(_QWORD *)(v4 + 24) = 1361LL;
      WdLogEvent5_WdAssertion(v4);
      v1 = (void *)*((_QWORD *)this + 17);
      v3 = (VIDMM_PROCESS *)*((_QWORD *)this + 4);
    }
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(v3, v1, *((_QWORD *)this + 16), 0x1000uLL, 0);
    if ( *((_BYTE *)this + 144) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v8,
        (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL));
      v5 = (_QWORD *)((char *)this + 16);
      v6 = *((_QWORD *)this + 2);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(v6 + 8) != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 16)
        || (v7 = (_QWORD *)*((_QWORD *)this + 3), (_QWORD *)*v7 != v5) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      *v5 = 0LL;
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
}
