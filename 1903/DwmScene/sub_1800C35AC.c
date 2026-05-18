/*
 * XREFs of sub_1800C35AC @ 0x1800C35AC
 * Callers:
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     sub_1800B89F4 @ 0x1800B89F4 (sub_1800B89F4.c)
 *     sub_1800BB0EC @ 0x1800BB0EC (sub_1800BB0EC.c)
 */

__int64 __fastcall sub_1800C35AC(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rcx

  result = sub_1800BB0EC(*a3, (__int64)a2);
  v5 = *(__int64 **)(result + 104);
  v6 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    sub_1800B89F4(*(_DWORD **)(v6 + 40), a2);
    result = *(_QWORD *)(v6 + 16);
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = *(_QWORD *)(v6 + 8);
            !*(_BYTE *)(result + 25) && v6 == *(_QWORD *)(result + 16);
            result = *(_QWORD *)(result + 8) )
      {
        v6 = result;
      }
      v6 = result;
    }
    else
    {
      v7 = *(__int64 **)result;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          result = *v7;
          v6 = (__int64)v7;
          v7 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  return result;
}
