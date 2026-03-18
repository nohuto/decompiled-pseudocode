/*
 * XREFs of BmfdQueryAdvanceWidths @ 0x1C0224C50
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0224A40 (BmfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     bReconnectBmfdFont @ 0x1C0225320 (bReconnectBmfdFont.c)
 *     BmfdOpenFontContext @ 0x1C0227158 (BmfdOpenFontContext.c)
 */

__int64 __fastcall BmfdQueryAdvanceWidths(__int64 a1, unsigned int a2, unsigned int *a3, _WORD *a4, unsigned int a5)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 v12; // r11
  __int64 v13; // rsi
  __int16 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 i; // r8
  __int64 v18; // rax
  unsigned int j; // r8d
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r9
  __int64 k; // r8
  __int64 v24; // rax
  unsigned int m; // r10d
  __int64 v26; // rax

  if ( !(unsigned int)bReconnectBmfdFont(*(_QWORD *)(a1 + 24)) )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 56);
  if ( !v10 )
  {
    v10 = BmfdOpenFontContext(a1);
    *(_QWORD *)(a1 + 56) = v10;
    if ( !v10 )
      return 0xFFFFFFFFLL;
  }
  v11 = *(_QWORD *)(v10 + 24);
  v12 = (*(_DWORD *)(v10 + 32) >> 9) & 0x10;
  v13 = *(_QWORD *)v11 + *(int *)(v11 + 52);
  v14 = 16 * *(_WORD *)(v10 + 36);
  if ( a2 > 1 )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(v11 + 36) == 512 )
  {
    if ( v14 == 16 )
    {
      v15 = a5;
      if ( a5 > 3 )
      {
        v16 = ((a5 - 4) >> 2) + 1;
        do
        {
          for ( i = 0LL; i < 4; ++i )
            a4[i] = v12 + 16 * *(_WORD *)(v13 + 4LL * a3[i]);
          a3 += 4;
          a4 += 4;
          v15 -= 4;
          --v16;
        }
        while ( v16 );
      }
      for ( ; v15; --v15 )
      {
        v18 = *a3++;
        *a4++ = v12 + 16 * *(_WORD *)(v13 + 4 * v18);
      }
    }
    else
    {
      for ( j = a5; j; --j )
      {
        v20 = *a3++;
        *a4++ = v12 + v14 * *(_WORD *)(v13 + 4 * v20);
      }
    }
  }
  else if ( v14 == 16 )
  {
    v21 = a5;
    if ( a5 > 3 )
    {
      v22 = ((a5 - 4) >> 2) + 1;
      do
      {
        for ( k = 0LL; k < 4; ++k )
          a4[k] = v12 + 16 * *(_WORD *)(v13 + 6LL * a3[k]);
        a3 += 4;
        a4 += 4;
        v21 -= 4;
        --v22;
      }
      while ( v22 );
    }
    for ( ; v21; --v21 )
    {
      v24 = *a3++;
      *a4++ = v12 + 16 * *(_WORD *)(v13 + 6 * v24);
    }
  }
  else
  {
    for ( m = a5; m; --m )
    {
      v26 = *a3++;
      *a4++ = v12 + v14 * *(_WORD *)(v13 + 6 * v26);
    }
  }
  return 1LL;
}
