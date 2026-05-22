/*
 * XREFs of ?SetAppClipRect@DWMCursor@@UEAAJPEBUtagRECT@@@Z @ 0x180108660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetAppClipRect(DWMCursor *this, const struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 116) = *a2;
  return (*(__int64 (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 72LL))(this);
}
