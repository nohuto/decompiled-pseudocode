/*
 * XREFs of ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x180078BD4
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180078AEC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x18015386C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801549E4 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rdx
  _QWORD *v2; // rsi
  char *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  char *v7; // rcx
  unsigned __int64 v8; // r8
  size_t v9; // rbx

  v1 = (char *)*((_QWORD *)this + 15);
  v2 = (_QWORD *)((char *)this + 112);
  for ( i = (char *)*((_QWORD *)this + 14); i != v1 && (*(_BYTE *)(*(_QWORD *)i + 72LL) & 2) != 0; i += 8 )
    ;
  if ( i != v1 )
  {
    v6 = 0LL;
    v7 = i + 8;
    v8 = (unsigned __int64)(v1 - (i + 8) + 7) >> 3;
    if ( i + 8 > v1 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v7 + 72LL) & 2) != 0 )
        {
          *(_QWORD *)i = *(_QWORD *)v7;
          i += 8;
        }
        v7 += 8;
        ++v6;
      }
      while ( v6 != v8 );
    }
    if ( i != v1 )
    {
      v9 = *((_QWORD *)this + 15) - (_QWORD)v1;
      memmove_0(i, v1, v9);
      *((_QWORD *)this + 15) = &i[v9];
    }
  }
  v5 = v2[1];
  if ( v2[2] != v5 )
  {
    if ( *v2 == v5 )
      std::vector<CDataSourceReader *>::_Tidy(v2);
    else
      std::vector<CDataSourceReader *>::_Reallocate_exactly(v2, (v5 - *v2) >> 3);
  }
}
