/*
 * XREFs of ?SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z @ 0x1802ED504
 * Callers:
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802E47D4 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x1802F767C (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SetWindowTitleToResource(HWND hWnd, UINT a2)
{
  const char *v3; // r9
  WCHAR Buffer[264]; // [rsp+20h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  if ( !LoadStringW(&_ImageBase, a2, Buffer, 260) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)6,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      v3);
    __debugbreak();
  }
  SetWindowTextW(hWnd, Buffer);
}
