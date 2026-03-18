/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x1800C4550
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x18007B264 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801C11F0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C0B08 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1800C459C (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Clear(CTreeData *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  (*(void (__fastcall **)(CTreeData *))(*(_QWORD *)this + 40LL))(this);
  CDrawListCacheSet::Invalidate((CTreeData *)((char *)this + 128), v2, v3);
  SAFE_DELETE<CMILMatrix>((char *)this + 152);
  SAFE_DELETE<CMILMatrix>((char *)this + 160);
  *((_QWORD *)this + 3) = 0LL;
}
