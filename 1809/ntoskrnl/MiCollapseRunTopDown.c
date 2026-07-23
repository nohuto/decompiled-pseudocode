/*
 * XREFs of MiCollapseRunTopDown @ 0x14009A65C
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1402CE488 (MiFindRebuildCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  char v7; // bl
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  __int64 v11; // r9

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v2 - 1 > v3 )
  {
    v2 = v3 + 1;
    *(_QWORD *)(a1 + 8) = v3 + 1;
  }
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 < v5 )
  {
    *(_QWORD *)a1 = v5;
    v4 = v5;
    v6 = v5;
  }
  if ( v4 < v2 )
  {
    v7 = *(_BYTE *)(a1 + 48);
    v8 = v2;
    while ( 1 )
    {
      if ( !v7 )
      {
        v8 = v2;
        if ( *(_QWORD *)(a1 + 40) > v2 - v4 )
          break;
      }
      v9 = *(_QWORD *)(a1 + 32);
      v4 = v6;
      if ( !v9 )
        return 1LL;
      v11 = ~(v9 - 1);
      if ( (((v8 - 1) ^ (v8 - *(_QWORD *)(a1 + 40))) & v11) == 0 )
        return 1LL;
      if ( (v11 & v8) != v8 )
        *(_QWORD *)(a1 + 8) = v11 & v8;
      if ( (v11 & v4) == v4 || (v4 = v11 & (v9 + v4 - 1), (*(_QWORD *)a1 = v4) != 0LL) )
      {
        v2 = *(_QWORD *)(a1 + 8);
        v6 = v4;
        v8 = v2;
        if ( v4 < v2 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
