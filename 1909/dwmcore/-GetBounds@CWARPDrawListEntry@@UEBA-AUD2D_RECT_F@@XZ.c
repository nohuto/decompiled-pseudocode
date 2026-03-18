/*
 * XREFs of ?GetBounds@CWARPDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x1800DB560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall CWARPDrawListEntry::GetBounds(
        struct D2D_RECT_F *this,
        struct D2D_RECT_F *__return_ptr retstr)
{
  struct D2D_RECT_F *result; // rax

  result = retstr;
  *retstr = this[10];
  return result;
}
