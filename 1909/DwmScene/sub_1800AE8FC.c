/*
 * XREFs of sub_1800AE8FC @ 0x1800AE8FC
 * Callers:
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 * Callees:
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A52C0 @ 0x1800A52C0 (sub_1800A52C0.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 */

__int64 __fastcall sub_1800AE8FC(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rcx

  v4 = sub_1800F0EB4(a1);
  result = sub_180078228(v4);
  v6 = *(__int64 **)(a1 + 1616);
  v7 = result;
  v8 = *v6;
  while ( (__int64 *)v8 != v6 )
  {
    if ( *(_DWORD *)(v8 + 32) == -1 || *(_DWORD *)(v8 + 32) == a2 )
      sub_1800A52C0(v7);
    result = *(_QWORD *)(v8 + 16);
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = *(_QWORD *)(v8 + 8);
            !*(_BYTE *)(result + 25) && v8 == *(_QWORD *)(result + 16);
            result = *(_QWORD *)(result + 8) )
      {
        v8 = result;
      }
      v8 = result;
    }
    else
    {
      v9 = *(__int64 **)result;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          result = *v9;
          v8 = (__int64)v9;
          v9 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  return result;
}
