/*
 * XREFs of ?SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z @ 0x180274C54
 * Callers:
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 *     _lambda_33af26c9d846f3b9c507d9b825ceee74_::operator() @ 0x18027E88C (_lambda_33af26c9d846f3b9c507d9b825ceee74_--operator().c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180077240 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
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
