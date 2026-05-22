/*
 * XREFs of ??$_Assign_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x18007953C
 * Callers:
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x180079DAC (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAA_N_K@Z @ 0x1800191B0 (-_Buy@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAA_N_K@Z.c)
 */

char __fastcall std::vector<std::pair<unsigned short,bool>>::_Assign_range<std::pair<unsigned short,bool> *>(
        char **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  char *v8; // rdx
  char *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  char *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8

  v4 = a3 - a2;
  v6 = a2;
  v7 = a3 - a2;
  v8 = a1[1];
  v9 = *a1;
  v10 = (v8 - v9) >> 2;
  v11 = (a1[2] - v9) >> 2;
  v12 = v7 >> 2;
  if ( v12 <= v11 )
  {
    if ( v12 <= v10 )
    {
      v8 = &v9[4 * v12];
      while ( v6 != a3 )
      {
        *(_WORD *)v9 = *(_WORD *)v6;
        v9 += 4;
        LOBYTE(v10) = *(_BYTE *)(v6 + 2);
        v6 += 4LL;
        *(v9 - 2) = v10;
      }
    }
    else
    {
      v18 = v6 + 4 * v10;
      if ( v6 != v18 )
      {
        do
        {
          *(_WORD *)v9 = *(_WORD *)v6;
          v9 += 4;
          LOBYTE(v10) = *(_BYTE *)(v6 + 2);
          v6 += 4LL;
          *(v9 - 2) = v10;
        }
        while ( v6 != v18 );
        v8 = a1[1];
      }
      v19 = 0LL;
      v20 = (a3 - v18 + 3) >> 2;
      if ( v18 > a3 )
        v20 = 0LL;
      if ( v20 )
      {
        v21 = v18 - (_QWORD)v8;
        do
        {
          LODWORD(v10) = *(_DWORD *)&v8[v21];
          ++v19;
          *(_DWORD *)v8 = v10;
          v8 += 4;
        }
        while ( v19 != v20 );
      }
    }
    a1[1] = v8;
  }
  else
  {
    if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v13 = v11 >> 1;
    if ( v11 <= 0x3FFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v14 = v13 + v11;
      if ( v13 + v11 < v12 )
        v14 = v12;
      v12 = v14;
    }
    v15 = 0LL;
    if ( v9 )
      std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(4 * v11));
    LOBYTE(v10) = std::vector<std::pair<unsigned short,bool>>::_Buy(a1, v12);
    v16 = *a1;
    v17 = (unsigned __int64)(v4 + 3) >> 2;
    if ( v6 > a3 )
      v17 = 0LL;
    if ( v17 )
    {
      do
      {
        LODWORD(v10) = *(_DWORD *)v6;
        ++v15;
        *(_DWORD *)v16 = *(_DWORD *)v6;
        v6 += 4LL;
        v16 += 4;
      }
      while ( v15 != v17 );
    }
    a1[1] = v16;
  }
  return v10;
}
