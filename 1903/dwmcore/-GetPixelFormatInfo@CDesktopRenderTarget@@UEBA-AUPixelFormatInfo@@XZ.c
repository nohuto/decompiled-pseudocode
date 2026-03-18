/*
 * XREFs of ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D2410
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@WGI@EBA?AUPixelFormatInfo@@XZ @ 0x1800ED130 (-GetPixelFormatInfo@CDesktopRenderTarget@@WGI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CHwndRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D2460 (-GetPixelFormatInfo@CHwndRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x1800D2498 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  struct CHwndRenderTarget *Primary; // rax

  Primary = CDesktopRenderTarget::GetPrimary((CDesktopRenderTarget *)(a1 - 64));
  if ( Primary )
  {
    CHwndRenderTarget::GetPixelFormatInfo((char *)Primary + 64, a2);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 40);
  }
  return a2;
}
