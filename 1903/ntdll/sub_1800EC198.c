/*
 * XREFs of sub_1800EC198 @ 0x1800EC198
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800ECC08 @ 0x1800ECC08 (sub_1800ECC08.c)
 *     sub_1800FDF7C @ 0x1800FDF7C (sub_1800FDF7C.c)
 */

__int64 __fastcall sub_1800EC198(__int64 a1, const WCHAR *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // rax
  const WCHAR *i; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int16 v12; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-40h] BYREF

  if ( !a1 || !a2 || !*a2 )
    return 3221225485LL;
  result = sub_18001583C(a1, a2, 1, &v12);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && *(unsigned __int16 *)(v6 + 6) > (unsigned int)v12 && *(_QWORD *)(v6 + 16) )
    v7 = (_BYTE *)(*(_QWORD *)(v6 + 16) + 28LL * (unsigned int)v12);
  else
    v7 = 0LL;
  if ( !v7 )
    return 3221226021LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  for ( i = &a2[v8 + 1]; i; i += v10 + 1 )
  {
    if ( !*i )
      break;
    LOBYTE(v5) = 1;
    result = sub_1800FDF7C(a1, v7, i, v5, v13);
    if ( (int)result < 0 )
      return result;
    v7 = v13;
    v10 = -1LL;
    do
      ++v10;
    while ( i[v10] );
  }
  if ( (*v7 & 6) == 0 )
    return 0LL;
  v11 = i - a2;
  if ( (unsigned int)v11 >= 0x105 )
    return 3221225507LL;
  result = sub_1800ECC08(a1, (_DWORD)v7, 0, (_DWORD)i, 261 - (int)v11);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
