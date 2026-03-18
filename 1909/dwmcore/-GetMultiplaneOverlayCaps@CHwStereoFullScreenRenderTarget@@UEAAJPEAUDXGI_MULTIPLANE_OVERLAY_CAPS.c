/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHwStereoFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800DA7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetMultiplaneOverlayCaps(
        CHwStereoFullScreenRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 10) = 0;
  *(_DWORD *)a2 = 1;
  *((_DWORD *)a2 + 1) = 1;
  *((_DWORD *)a2 + 4) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  return 0LL;
}
