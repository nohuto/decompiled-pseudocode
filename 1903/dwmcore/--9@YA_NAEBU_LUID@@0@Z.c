/*
 * XREFs of ??9@YA_NAEBU_LUID@@0@Z @ 0x1800A8C70
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017BC10 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x18024F674 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1];
}
