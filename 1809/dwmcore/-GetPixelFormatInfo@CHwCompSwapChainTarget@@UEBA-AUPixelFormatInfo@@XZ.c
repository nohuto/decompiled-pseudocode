/*
 * XREFs of ?GetPixelFormatInfo@CHwCompSwapChainTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802009E0
 * Callers:
 *     ?GetPixelFormatInfo@CHwCompSwapChainTarget@@WBBA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0C70 (-GetPixelFormatInfo@CHwCompSwapChainTarget@@WBBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 120LL) + 24LL))(*(_QWORD *)(a1 + 200) + 120LL);
  return a2;
}
