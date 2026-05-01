/*
 * XREFs of ??0SelectionDataParser@StartLayout@@QEAA@XZ @ 0x1803A0918
 * Callers:
 *     ??$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@StartLayout@@@12@XZ @ 0x18013CAF4 (--$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSelectionDat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1803A0AC4 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=7
StartLayout::SelectionDataParser *__fastcall StartLayout::SelectionDataParser::SelectionDataParser(
        StartLayout::SelectionDataParser *this)
{
  unsigned __int16 *v2; // rdx
  unsigned __int16 *v3; // rax
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,StartLayout::ISelectionDataParser>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &StartLayout::SelectionDataParser::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = SysAllocString(L"GroupCellWidth");
  _bstr_t::operator=((StartLayout::SelectionDataParser *)((char *)this + 16), v2);
  v3 = SysAllocString(L"PreInstalledAppsEnabled");
  _bstr_t::operator=((StartLayout::SelectionDataParser *)((char *)this + 24), v3);
  v4 = SysAllocString(L"Region");
  _bstr_t::operator=((StartLayout::SelectionDataParser *)((char *)this + 32), v4);
  v5 = SysAllocString(L"DualSim");
  _bstr_t::operator=((StartLayout::SelectionDataParser *)((char *)this + 40), v5);
  v6 = SysAllocString(L"SystemFeatures");
  _bstr_t::operator=((StartLayout::SelectionDataParser *)((char *)this + 48), v6);
  v7 = SysAllocString(L"SKU");
  _bstr_t::operator=((StartLayout::SelectionDataParser *)((char *)this + 56), v7);
  return this;
}
