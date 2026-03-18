/*
 * XREFs of ??9?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z @ 0x18002AE70
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18003C618 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015DE5C (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>::operator!=(_QWORD *a1, _QWORD *a2)
{
  return *a1 != *a2;
}
