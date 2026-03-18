/*
 * XREFs of ??9@YA_NAEBU_LUID@@0@Z @ 0x180027C74
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x18024DF64 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1];
}
