/*
 * XREFs of sub_1800D8A78 @ 0x1800D8A78
 * Callers:
 *     sub_1800D8B48 @ 0x1800D8B48 (sub_1800D8B48.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 * Callees:
 *     sub_180069FCC @ 0x180069FCC (sub_180069FCC.c)
 */

__int64 *__fastcall sub_1800D8A78(__int64 a1)
{
  __int64 **v1; // rdi
  __int64 **v2; // rdx
  __int64 *result; // rax
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)a1 = 0;
  v1 = (__int64 **)(a1 + 16);
  v2 = *(__int64 ***)(a1 + 16);
  result = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      if ( result[5] == *(_QWORD *)(a1 + 8) )
      {
        v5 = result[2];
        if ( *(_BYTE *)(v5 + 25) )
        {
          for ( i = result[1]; !*(_BYTE *)(i + 25) && result == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            result = (__int64 *)i;
          result = (__int64 *)i;
        }
        else
        {
          v7 = *(_QWORD *)v5;
          for ( result = (__int64 *)result[2]; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)v7 )
            result = (__int64 *)v7;
        }
      }
      else
      {
        sub_180069FCC(v1, (__int64 *)&v8, result);
        result = v8;
      }
    }
    while ( result != *v1 );
  }
  return result;
}
