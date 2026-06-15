/*
 * XREFs of ??1?$CAutoPtr@UDuckingDescriptor@@@ATL@@QEAA@XZ @ 0x18002AD90
 * Callers:
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x18003989C (_TsSessionCreate_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
}
