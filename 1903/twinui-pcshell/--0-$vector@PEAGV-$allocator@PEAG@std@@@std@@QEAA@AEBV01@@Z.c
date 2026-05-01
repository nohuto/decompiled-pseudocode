/*
 * XREFs of ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x180168308
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x180169008 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 */

void **__fastcall std::vector<unsigned short *>::vector<unsigned short *>(void **a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rbx
  _QWORD *v6; // rax
  char *v7; // rax
  char *v8; // rdi
  size_t v9; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v5 = 8 * v4;
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
    *a1 = v6;
    a1[1] = v6;
    v7 = (char *)*a1;
    a1[2] = (char *)*a1 + v5;
    try
    {
      v8 = v7;
      v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      memmove_0(v7, *(const void **)a2, v9);
      a1[1] = &v8[v9];
    }
    catch ( ... )
    {
      std::vector<void *>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
