/*
 * XREFs of sub_18005BE34 @ 0x18005BE34
 * Callers:
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 * Callees:
 *     sub_180012E38 @ 0x180012E38 (sub_180012E38.c)
 *     wcscat_s @ 0x1800980E0 (wcscat_s.c)
 */

__int64 __fastcall sub_18005BE34(
        const WCHAR *a1,
        const wchar_t *a2,
        const wchar_t *a3,
        unsigned int *a4,
        wchar_t *Destination)
{
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 != 92 || *a3 != 92 )
    return 3221225659LL;
  LODWORD(v13) = *a4;
  v8 = sub_180012E38(a1, (unsigned int *)&v13, Destination);
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  do
    ++v9;
  while ( a3[v9] );
  v11 = v13 + 2 * (v9 + v10);
  if ( v8 >= 0 && v11 > *a4 )
    v8 = -1073741789;
  if ( v8 == -1073741789 )
    *a4 = v11;
  if ( v8 < 0 )
    return (unsigned int)v8;
  wcscat_s(Destination, (unsigned __int64)v11 >> 1, a3);
  wcscat_s(Destination, (unsigned __int64)v11 >> 1, a2);
  result = 0LL;
  *a4 = v11;
  return result;
}
