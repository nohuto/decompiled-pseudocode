/*
 * XREFs of sub_180106284 @ 0x180106284
 * Callers:
 *     sub_180104E74 @ 0x180104E74 (sub_180104E74.c)
 *     sub_1801056E0 @ 0x1801056E0 (sub_1801056E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012741C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Xinvalid_argument@std@@YAXPEBD@Z @ 0x1801275F8 (-_Xinvalid_argument@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180106284(char *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebp
  char *v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 result; // rax
  char *v9; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v5 = a1;
  v6 = (_DWORD *)o__errno(a1, a2, a3);
  v7 = v6;
  if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
    v5 = *(char **)v5;
  *v6 = 0;
  result = o_strtol(v5, &v9, v3);
  if ( v5 == v9 )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v7 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    JUMPOUT(0x18010631CLL);
  }
  if ( a2 )
    *a2 = v9 - v5;
  return result;
}
