/*
 * XREFs of ?SetBatches@CCompositionFrame@@UEAAXPEAUIBatchList@@@Z @ 0x1C001BB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFrame::SetBatches(CCompositionFrame *this, struct IBatchList *a2)
{
  *((_QWORD *)this + 12) = a2;
}
