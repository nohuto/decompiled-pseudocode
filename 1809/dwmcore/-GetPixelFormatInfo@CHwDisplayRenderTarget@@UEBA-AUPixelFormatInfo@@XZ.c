/*
 * XREFs of ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063D50
 * Callers:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@WNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F1140 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@WNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180203860 (-GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHwDisplayRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 120LL) + 24LL))(
      *(_QWORD *)(a1 + 200) + 120LL,
      a2);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 264);
    a2[1] = *(_DWORD *)(a1 + 320);
    a2[2] = *(_DWORD *)(a1 + 324);
  }
  return a2;
}
