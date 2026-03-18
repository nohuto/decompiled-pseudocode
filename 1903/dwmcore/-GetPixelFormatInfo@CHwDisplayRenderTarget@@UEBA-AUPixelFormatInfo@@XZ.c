/*
 * XREFs of ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800BE8D0
 * Callers:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@WJA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EC860 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@WJA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18015FB00 (-GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHwDisplayRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 120LL) + 24LL))(
      *(_QWORD *)(a1 + 136) + 120LL,
      a2);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 200);
    a2[1] = *(_DWORD *)(a1 + 256);
    a2[2] = *(_DWORD *)(a1 + 260);
  }
  return a2;
}
