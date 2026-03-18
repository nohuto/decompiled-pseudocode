/*
 * XREFs of ?GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18015E410
 * Callers:
 *     ?GetPixelFormatInfo@CHDRConversionRenderTarget@@WJA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0510 (-GetPixelFormatInfo@CHDRConversionRenderTarget@@WJA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C01A0 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHDRConversionRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 528);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 528));
  else
    CHwDisplayRenderTarget::GetPixelFormatInfo(a1, a2);
  return a2;
}
