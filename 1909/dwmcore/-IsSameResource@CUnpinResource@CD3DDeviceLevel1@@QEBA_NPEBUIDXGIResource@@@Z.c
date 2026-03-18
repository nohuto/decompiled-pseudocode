/*
 * XREFs of ?IsSameResource@CUnpinResource@CD3DDeviceLevel1@@QEBA_NPEBUIDXGIResource@@@Z @ 0x1800EAF90
 * Callers:
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015C780 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDeviceLevel1::CUnpinResource::IsSameResource(
        CD3DDeviceLevel1::CUnpinResource *this,
        const struct IDXGIResource *a2)
{
  return *(_QWORD *)this == (_QWORD)a2;
}
