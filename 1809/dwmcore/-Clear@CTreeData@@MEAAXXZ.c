/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180021C60
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18008B8A0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801B6500 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x180021CEC (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z @ 0x1800689F8 (--0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Clear(struct CDrawListCacheSet::RenderTargetEntry *const *this)
{
  struct CDrawListCacheSet::RenderTargetEntry *i; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct CDrawListCacheSet::RenderTargetEntry *v4; // [rsp+40h] [rbp+8h] BYREF

  (*((void (__fastcall **)(struct CDrawListCacheSet::RenderTargetEntry *const *))*this + 5))(this);
  CDrawListCacheSet::CReentrancyCheck::CReentrancyCheck((CDrawListCacheSet::CReentrancyCheck *)v3, this + 16, &v4);
  for ( i = v4; i; i = (struct CDrawListCacheSet::RenderTargetEntry *)*((_QWORD *)i + 10) )
  {
    if ( *((_QWORD *)i + 2) )
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((char *)i + 24);
  }
  *(_QWORD *)v3[0] = v3[1];
  SAFE_DELETE<CMILMatrix>(this + 19);
  SAFE_DELETE<CMILMatrix>(this + 20);
  *((_QWORD *)this + 3) = 0LL;
}
