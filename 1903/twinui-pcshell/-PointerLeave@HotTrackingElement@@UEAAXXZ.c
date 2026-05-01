/*
 * XREFs of ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180358010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x180357504 (--0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z.c)
 *     ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x1803576C4 (--1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180365250 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall HotTrackingElement::PointerLeave(HotTrackingElement *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2, this);
  CMultitaskingViewElementBase::PointerLeave(this);
  HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2);
}
