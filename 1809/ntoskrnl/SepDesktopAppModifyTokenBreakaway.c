/*
 * XREFs of SepDesktopAppModifyTokenBreakaway @ 0x1402FEF68
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1400DA0A0 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 */

__int64 __fastcall SepDesktopAppModifyTokenBreakaway(__int64 a1, _WORD *a2, char a3)
{
  __int16 v4; // r8
  __int16 v5; // ax
  __int16 v6; // r8
  _DWORD *v7; // rcx
  _DWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int *v10; // [rsp+28h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  _WORD *v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+80h] [rbp+20h] BYREF

  v15 = a2;
  v4 = *a2;
  v12 = L"WIN://PKG";
  v11 = 1310738;
  v13 = 0LL;
  v5 = v4 & 0xFFDF;
  v16 = 4;
  v6 = v4 | 0x20;
  v14 = 1LL;
  v9[0] = 1;
  if ( a3 != 1 )
    v6 = v5;
  v9[1] = 1;
  *a2 = v6;
  v7 = *(_DWORD **)(a1 + 776);
  LOWORD(v13) = 2;
  v10 = &v11;
  return AuthzBasepSetSecurityAttributesToken(v7, &v16, (__int64)v9);
}
