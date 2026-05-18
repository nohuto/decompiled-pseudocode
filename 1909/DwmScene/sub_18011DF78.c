/*
 * XREFs of sub_18011DF78 @ 0x18011DF78
 * Callers:
 *     sub_18011DF50 @ 0x18011DF50 (sub_18011DF50.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180106318 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011DF78(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cbMultiByte; // esi
  CHAR *lpMultiByteStr; // rax
  LPSTR Src[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v11; // [rsp+60h] [rbp-48h]

  v3 = a3;
  if ( a3 )
  {
    v6 = WideCharToMultiByte(0xFDE9u, 0, a2, a3, 0LL, 0, 0LL, 0LL);
    cbMultiByte = v6;
    *(_QWORD *)&v11 = 0LL;
    *((_QWORD *)&v11 + 1) = 15LL;
    LOBYTE(Src[0]) = 0;
    if ( v6 <= 0 )
      __fastfail(7u);
    std::string::append(Src, v6, 0);
    lpMultiByteStr = (CHAR *)Src;
    if ( *((_QWORD *)&v11 + 1) >= 0x10uLL )
      lpMultiByteStr = Src[0];
    WideCharToMultiByte(0xFDE9u, 0, a2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    *(_OWORD *)a1 = *(_OWORD *)Src;
    *(_OWORD *)(a1 + 16) = v11;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
