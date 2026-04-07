/*
 * XREFs of ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x18008D05C
 * Callers:
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAI@Z @ 0x180089A6C (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAI@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x18008DA50 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18008EFB0 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::GetCanvasRootCompositionNodeHandle(CTopLevelWindow *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 32);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( v3 )
      return *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL);
  }
  return result;
}
