/*
 * XREFs of sub_180096740 @ 0x180096740
 * Callers:
 *     sub_180095914 @ 0x180095914 (sub_180095914.c)
 *     sub_180095CA0 @ 0x180095CA0 (sub_180095CA0.c)
 *     sub_1800990B4 @ 0x1800990B4 (sub_1800990B4.c)
 *     sub_18009941C @ 0x18009941C (sub_18009941C.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_1800967F8 @ 0x1800967F8 (sub_1800967F8.c)
 */

__int64 __fastcall sub_180096740(int a1, __int64 *a2)
{
  unsigned __int8 v3; // di
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  unsigned __int8 *v9; // r8

  v3 = a1;
  if ( !a2 )
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  v5 = *((_DWORD *)a2 + 6);
  if ( (v5 & 1) == 0 && (v5 & 0x82) != 0x80 )
    return 0xFFFFFFFFLL;
  v6 = a2[2];
  if ( !v6 )
  {
    sub_1800967F8(a2);
    v6 = a2[2];
  }
  v7 = *a2;
  if ( *a2 == v6 )
  {
    if ( *((_DWORD *)a2 + 2) )
      return 0xFFFFFFFFLL;
    *a2 = ++v7;
  }
  v8 = *((_DWORD *)a2 + 6);
  v9 = (unsigned __int8 *)(v7 - 1);
  *a2 = v7 - 1;
  if ( (v8 & 0x40) != 0 )
  {
    if ( *v9 != v3 )
    {
      *a2 = v7;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *v9 = v3;
    v8 = *((_DWORD *)a2 + 6);
  }
  ++*((_DWORD *)a2 + 2);
  result = v3;
  *((_DWORD *)a2 + 6) = v8 & 0xFFFFFFEE | 1;
  return result;
}
