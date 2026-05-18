/*
 * XREFs of sub_18006F990 @ 0x18006F990
 * Callers:
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 * Callees:
 *     __std_type_info_compare @ 0x180125BB2 (__std_type_info_compare.c)
 */

__int64 *__fastcall sub_18006F990(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 i; // rbx
  __int64 *result; // rax

  v3 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( (int)_std_type_info_compare(*(_QWORD *)(v8 + 32) + 8LL, *a3 + 8LL) >= 0 )
    {
      if ( *(_BYTE *)(v7 + 25) && (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(v8 + 32) + 8LL) < 0 )
        v7 = v8;
      v3 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  if ( *(_BYTE *)(v7 + 25) )
    i = *a1 + 8;
  else
    i = v7;
LABEL_12:
  for ( i = *(_QWORD *)i; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
  {
    if ( (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(i + 32) + 8LL) < 0 )
    {
      v7 = i;
      goto LABEL_12;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v7;
  return result;
}
