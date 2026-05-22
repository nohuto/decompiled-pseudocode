/*
 * XREFs of ?GetAppClipRect@DWMCursor@@UEAAJPEAUtagRECT@@@Z @ 0x1801086A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetAppClipRect(DWMCursor *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 116);
  return result;
}
