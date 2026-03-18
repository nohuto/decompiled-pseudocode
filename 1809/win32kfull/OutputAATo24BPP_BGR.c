/*
 * XREFs of OutputAATo24BPP_BGR @ 0x1C0094190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall OutputAATo24BPP_BGR(_DWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 *result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // r9

  result = (unsigned __int8 *)(a2 + 4);
  if ( (*a1 & 0x80u) != 0 )
  {
    if ( (unsigned __int64)result < a3 )
    {
      v9 = (_BYTE *)(a4 + 2);
      do
      {
        if ( result[3] )
        {
          *(v9 - 2) = ~*(_BYTE *)(a5 + 4LL * result[2] + 2048);
          *(v9 - 1) = ~*(_BYTE *)(a5 + 4LL * result[1] + 1024);
          *v9 = ~*(_BYTE *)(a5 + 4LL * *result);
        }
        v9 += 3;
        result += 4;
      }
      while ( (unsigned __int64)result < a3 );
    }
  }
  else if ( (unsigned __int64)result < a3 )
  {
    v7 = a4 + 2;
    do
    {
      v7 += 3LL;
      *(_BYTE *)(v7 - 5) = ~*(_BYTE *)(a5 + 4LL * result[2] + 2048);
      *(_BYTE *)(v7 - 4) = ~*(_BYTE *)(a5 + 4LL * result[1] + 1024);
      v8 = *result;
      result += 4;
      *(_BYTE *)(v7 - 3) = ~*(_BYTE *)(a5 + 4 * v8);
    }
    while ( (unsigned __int64)result < a3 );
  }
  return result;
}
