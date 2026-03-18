/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1800BAEF0
 * Callers:
 *     ??_ECDrawListEntryBatch@@G7EAAPEAXI@Z @ 0x1800F10A0 (--_ECDrawListEntryBatch@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BB028 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1801ABA14 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  bool v2; // zf
  CDirtyRegion *v5; // rcx
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 12) == -1;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBase'};
  if ( !v2 )
    CDrawListBatchManager::FreeBatchResources((CDrawListBatchManager *)(*((_QWORD *)this + 3) + 8LL), this);
  std::deque<CMegaRect>::_Tidy((char *)this + 88);
  std::_Deallocate<16,0>(*((_QWORD *)this + 11), 16LL);
  *((_QWORD *)this + 11) = 0LL;
  v5 = (CDirtyRegion *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    CDirtyRegion::Release(v5);
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
