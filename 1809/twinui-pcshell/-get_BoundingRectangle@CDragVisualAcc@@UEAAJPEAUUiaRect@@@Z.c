/*
 * XREFs of ?get_BoundingRectangle@CDragVisualAcc@@UEAAJPEAUUiaRect@@@Z @ 0x180083230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisualAcc::get_BoundingRectangle(CDragVisualAcc *this, struct UiaRect *a2)
{
  __int64 result; // rax

  a2->left = (double)*((int *)this + 16);
  a2->top = (double)*((int *)this + 17);
  a2->width = (double)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16));
  result = 0LL;
  a2->height = (double)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17));
  return result;
}
