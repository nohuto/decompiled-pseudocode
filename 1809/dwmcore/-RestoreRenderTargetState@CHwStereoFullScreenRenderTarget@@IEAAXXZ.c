/*
 * XREFs of ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1802074B8
 * Callers:
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1802037C0 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180207480 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(CHwStereoFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 75);
  if ( v1 && *((_QWORD *)this + 25) != v1 )
    *((_QWORD *)this + 25) = v1;
  *((_DWORD *)this + 148) = 0;
}
