/*
 * XREFs of ?GetDesiredApplicationRect@CFrameApplicationPresentation@@UEAAJPEAUtagRECT@@@Z @ 0x18006A440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::GetDesiredApplicationRect(
        CFrameApplicationPresentation *this,
        struct tagRECT *a2)
{
  *a2 = *(struct tagRECT *)((char *)this + 136);
  return IsRectEmpty(a2) ? 0x80070490 : 0;
}
