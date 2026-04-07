/*
 * XREFs of ?v_GetSourceRect@CVirtualDesktopThumbnailCVI@@MEAAJPEAUtagRECT@@@Z @ 0x18003C660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::v_GetSourceRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[4];
  return result;
}
