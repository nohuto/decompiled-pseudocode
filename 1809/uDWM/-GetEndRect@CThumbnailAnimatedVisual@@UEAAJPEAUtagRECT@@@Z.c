/*
 * XREFs of ?GetEndRect@CThumbnailAnimatedVisual@@UEAAJPEAUtagRECT@@@Z @ 0x18003C6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThumbnailAnimatedVisual::GetEndRect(CThumbnailAnimatedVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 24);
  return result;
}
