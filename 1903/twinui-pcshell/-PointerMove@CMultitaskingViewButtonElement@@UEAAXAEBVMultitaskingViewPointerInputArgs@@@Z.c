/*
 * XREFs of ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180370DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180365350 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x180370CB4 (--0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z.c)
 *     ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x180370CF4 (--1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewButtonElement::PointerMove(
        CMultitaskingViewButtonElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  CMultitaskingViewButtonElement::CDetectRenderModeChange::CDetectRenderModeChange(
    (CMultitaskingViewButtonElement::CDetectRenderModeChange *)v4,
    this);
  CMultitaskingViewElementBase::PointerMove(this, a2);
  CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange((CMultitaskingViewButtonElement::CDetectRenderModeChange *)v4);
}
