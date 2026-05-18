/*
 * XREFs of sub_180062C9C @ 0x180062C9C
 * Callers:
 *     sub_180063330 @ 0x180063330 (sub_180063330.c)
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_1800635E4 @ 0x1800635E4 (sub_1800635E4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180062A78 @ 0x180062A78 (sub_180062A78.c)
 *     sub_180062F54 @ 0x180062F54 (sub_180062F54.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_1800635EC @ 0x1800635EC (sub_1800635EC.c)
 *     sub_18011E178 @ 0x18011E178 (sub_18011E178.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180062C9C(__int64 a1, char a2)
{
  __int64 *result; // rax
  char *v5; // rdx
  unsigned int v6; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF
  char v11; // [rsp+D8h] [rbp+10h] BYREF

  v11 = a2;
  v7[1] = -2LL;
  if ( (unsigned __int8)sub_1800635EC() )
  {
    sub_18000E498(v9);
    v6 = (unsigned int)sub_18000E498(v8);
    sub_180062F54((unsigned int)pExceptionObject, v6, 33, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_18011E178(a1);
  v7[0] = a1;
  result = (__int64 *)sub_1800632D0();
  v5 = (char *)result[1];
  if ( (char *)result[2] == v5 )
    return (__int64 *)sub_180062A78(result, v5, v7, &v11);
  *(_QWORD *)v5 = a1;
  v5[8] = a2;
  result[1] += 16LL;
  return result;
}
