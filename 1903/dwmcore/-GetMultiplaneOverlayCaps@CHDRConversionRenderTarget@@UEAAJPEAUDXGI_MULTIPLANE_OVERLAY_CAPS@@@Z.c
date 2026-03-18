/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHDRConversionRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180168C20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800B8310 (-GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::GetMultiplaneOverlayCaps(
        CHDRConversionRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  __int64 result; // rax

  CHwFullScreenRenderTarget::GetMultiplaneOverlayCaps(this, a2);
  *(_DWORD *)a2 = 2;
  *(_OWORD *)((char *)a2 + 4) = CHDRConversionRenderTarget::sc_fakeOverlayCaps;
  *((_DWORD *)a2 + 5) = 998244352;
  result = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 10) = 0;
  return result;
}
