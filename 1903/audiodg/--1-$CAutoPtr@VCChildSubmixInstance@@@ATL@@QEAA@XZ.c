/*
 * XREFs of ??1?$CAutoPtr@VCChildSubmixInstance@@@ATL@@QEAA@XZ @ 0x14003DA30
 * Callers:
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$1 @ 0x14001ABAE (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CChildSubmixInstance>::~CAutoPtr<CChildSubmixInstance>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
