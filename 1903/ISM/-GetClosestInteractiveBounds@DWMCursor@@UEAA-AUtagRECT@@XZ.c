/*
 * XREFs of ?GetClosestInteractiveBounds@DWMCursor@@UEAA?AUtagRECT@@XZ @ 0x18000FCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall DWMCursor::GetClosestInteractiveBounds(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr)
{
  struct tagRECT *result; // rax

  result = retstr;
  *retstr = this[6];
  return result;
}
