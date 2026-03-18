/*
 * XREFs of ?GetBounds@CHWDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x1800E6AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall CHWDrawListEntry::GetBounds(
        CHWDrawListEntry *this,
        struct D2D_RECT_F *__return_ptr retstr)
{
  struct D2D_RECT_F *result; // rax

  result = retstr;
  *retstr = *(struct D2D_RECT_F *)(*((_QWORD *)this + 17) + 56LL);
  return result;
}
