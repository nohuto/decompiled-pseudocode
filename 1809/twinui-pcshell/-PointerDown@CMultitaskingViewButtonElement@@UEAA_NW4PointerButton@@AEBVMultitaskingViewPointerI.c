/*
 * XREFs of ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180310700
 * Callers:
 *     <none>
 * Callees:
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180304840 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x180310664 (--0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z.c)
 *     ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1803106A4 (--1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ.c)
 */

char __fastcall CMultitaskingViewButtonElement::PointerDown(
        struct CMultitaskingViewButtonElement *a1,
        unsigned int a2,
        __int64 a3)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CMultitaskingViewButtonElement::CDetectRenderModeChange::CDetectRenderModeChange(
    (CMultitaskingViewButtonElement::CDetectRenderModeChange *)v7,
    a1);
  LOBYTE(a3) = CMultitaskingViewElementBase::PointerDown((__int64)a1, a2, a3);
  CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange((CMultitaskingViewButtonElement::CDetectRenderModeChange *)v7);
  return a3;
}
