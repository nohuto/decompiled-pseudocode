/*
 * XREFs of ?RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180012990
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x1800129C0 (-RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18001320C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 */

char __fastcall CCompositionSurfaceBitmap::RecordCompositionMode(__int64 a1)
{
  char result; // al
  __int64 v2; // r10
  __int64 v3; // r11

  result = CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(a1 - 56));
  if ( result )
    return CCompositionSurfaceInfo::RecordCompositionMode(*(_QWORD *)(v2 + 32), v3);
  return result;
}
