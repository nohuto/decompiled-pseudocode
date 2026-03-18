/*
 * XREFs of ?GetBatches@CCompositionFrame@@UEAAPEAUIBatchList@@XZ @ 0x1C001BB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBatchList *__fastcall CCompositionFrame::GetBatches(CCompositionFrame *this)
{
  struct IBatchList *result; // rax

  result = (struct IBatchList *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  return result;
}
