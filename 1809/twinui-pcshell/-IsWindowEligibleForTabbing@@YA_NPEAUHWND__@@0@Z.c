/*
 * XREFs of ?IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z @ 0x1801F34DC
 * Callers:
 *     _lambda_b30b843a24f7a843996b1737c1303811_::_lambda_invoker_cdecl_ @ 0x1801F2350 (_lambda_b30b843a24f7a843996b1737c1303811_--_lambda_invoker_cdecl_.c)
 *     _lambda_80a498ff7c98f7e4073a2d55b9626c9d_::operator() @ 0x1801F25F8 (_lambda_80a498ff7c98f7e4073a2d55b9626c9d_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

bool __fastcall IsWindowEligibleForTabbing(HWND hWnd, HWND a2)
{
  LONG WindowLongW; // ebx
  bool result; // al
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  result = 0;
  if ( hWnd != a2 )
  {
    WindowLongW = GetWindowLongW(hWnd, -16);
    *(_QWORD *)&Rect.left = 0LL;
    *(_QWORD *)&Rect.right = 0LL;
    if ( (((WindowLongW & 0x30000000) == 0x10000000) & ((GetWindowLongW(hWnd, -20) & 0x8000080) == 0)) != 0
      && GetWindowRect(hWnd, &Rect)
      && Rect.left != Rect.right
      && Rect.top != Rect.bottom
      && !GetWindow(hWnd, 4u) )
    {
      return 1;
    }
  }
  return result;
}
