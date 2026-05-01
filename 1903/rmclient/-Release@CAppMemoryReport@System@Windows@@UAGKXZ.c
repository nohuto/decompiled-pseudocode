/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@UAGKXZ @ 0x10009EC0
 * Callers:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K@Details@WRL@Microsoft@@YGJPAPAUIAppMemoryReport@System@Windows@@AA_K1111@Z @ 0x10008480 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K.c)
 *     ?Release@CAppMemoryReport@System@Windows@@W3AGKXZ @ 0x1000D710 (-Release@CAppMemoryReport@System@Windows@@W3AGKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@W7AGKXZ @ 0x1000D720 (-Release@CAppMemoryReport@System@Windows@@W7AGKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WM@AGKXZ @ 0x1000D730 (-Release@CAppMemoryReport@System@Windows@@WM@AGKXZ.c)
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::Release(Windows::System::CAppMemoryReport *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::Release(this);
}
