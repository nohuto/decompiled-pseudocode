/*
 * XREFs of sub_180018940 @ 0x180018940
 * Callers:
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180018610 @ 0x180018610 (sub_180018610.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180059C34 @ 0x180059C34 (sub_180059C34.c)
 *     LdrLoadAlternateResourceModule @ 0x18007C990 (LdrLoadAlternateResourceModule.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 * Callees:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_18001ABAC @ 0x18001ABAC (sub_18001ABAC.c)
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180018940(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = -1;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_5;
  v7 = sub_18001ABAC(BaseOfImage);
  v11 = (_DWORD *)v7;
  v8 = (_DWORD *)v7;
  if ( v7 != -1 )
  {
    if ( v7 )
      return v8;
LABEL_5:
    v13[1] = 1LL;
    v13[0] = L"MUI";
    v13[2] = 0LL;
    v10 = sub_180018D8C((_DWORD)BaseOfImage, (unsigned int)v13, 3, 33554480, (__int64)&v12);
    if ( v10 >= 0 )
    {
      v10 = sub_18001F014(BaseOfImage);
      if ( v10 >= 0 )
      {
        v8 = v11;
        if ( *v11 == -20054323 )
          goto LABEL_8;
        v10 = -1073741701;
      }
    }
    v8 = 0LL;
LABEL_8:
    if ( a3 )
    {
      if ( v8 )
        v4 = (int)v8;
      sub_1800593F0((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}
