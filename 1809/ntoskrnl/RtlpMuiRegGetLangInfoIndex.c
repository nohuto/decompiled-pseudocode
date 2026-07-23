/*
 * XREFs of RtlpMuiRegGetLangInfoIndex @ 0x140760130
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140760068 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLangInfoIndex(__int64 a1, char *a2)
{
  __int16 v3; // r11
  char *v4; // r9
  __int64 v5; // rdx
  unsigned __int16 v7; // si
  unsigned __int16 v8; // di
  char v9; // al
  unsigned int v10; // r10d

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *((_WORD *)a2 + 2);
  if ( !v3 && *((__int16 *)a2 + 3) < 0 )
    return 0xFFFFFFFFLL;
  v4 = *(char **)(a1 + 16);
  v5 = (a2 - v4) / 28;
  if ( v5 < 0 || v5 >= *(unsigned __int16 *)(a1 + 6) )
  {
    v5 = 0LL;
    if ( *(_WORD *)(a1 + 6) )
    {
      while ( 1 )
      {
        if ( *(_WORD *)v4 == *(_WORD *)a2
          && *((_WORD *)v4 + 2) == v3
          && *((_WORD *)v4 + 3) == *((_WORD *)a2 + 3)
          && *((_WORD *)v4 + 5) == *((_WORD *)a2 + 5) )
        {
          v7 = *((_WORD *)a2 + 4);
          v8 = *((_WORD *)v4 + 4);
          if ( ((v8 ^ v7) & 0xC000) == 0 )
          {
            v9 = 1;
            v10 = 0;
            do
            {
              if ( v10 >= 4 )
                break;
              if ( (((unsigned __int16)(v8 ^ v7) >> (2 * v10)) & 3) == 0 )
              {
                v9 = 1;
                if ( *(_WORD *)&v4[2 * v10 + 12] == *(_WORD *)&a2[2 * v10 + 12] )
                  continue;
              }
              v9 = 0;
              ++v10;
            }
            while ( v9 );
            if ( v9 )
              break;
          }
        }
        ++v5;
        v4 += 28;
        if ( v5 >= *(unsigned __int16 *)(a1 + 6) )
          return 0xFFFFFFFFLL;
      }
      return (unsigned __int16)v5;
    }
    return 0xFFFFFFFFLL;
  }
  return (unsigned __int16)v5;
}
