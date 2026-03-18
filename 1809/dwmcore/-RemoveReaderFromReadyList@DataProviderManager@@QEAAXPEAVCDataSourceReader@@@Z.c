/*
 * XREFs of ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801544FC
 * Callers:
 *     ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x180193F40 (--_ECDataSourceReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801549E4 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DataProviderManager::RemoveReaderFromReadyList(DataProviderManager *this, struct CDataSourceReader *a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rbx
  struct CDataSourceReader **i; // rcx
  __int64 v7; // r8
  struct CDataSourceReader **v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx

  v2 = *((_QWORD *)this + 15);
  v3 = (_QWORD *)((char *)this + 112);
  for ( i = (struct CDataSourceReader **)*((_QWORD *)this + 14); i != (struct CDataSourceReader **)v2 && *i != a2; ++i )
    ;
  if ( i != (struct CDataSourceReader **)v2 )
  {
    v7 = 0LL;
    v8 = i + 1;
    v9 = (v2 - (unsigned __int64)(i + 1) + 7) >> 3;
    if ( (unsigned __int64)(i + 1) > v2 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v8 != a2 )
          *i++ = *v8;
        ++v8;
        ++v7;
      }
      while ( v7 != v9 );
    }
  }
  memmove_0(i, i + 1, *((_QWORD *)this + 15) - (_QWORD)(i + 1));
  *((_QWORD *)this + 15) -= 8LL;
  if ( v3[2] != *((_QWORD *)this + 15) )
  {
    v10 = v3[1];
    if ( *v3 == v10 )
      std::vector<CDataSourceReader *>::_Tidy(v3);
    else
      std::vector<CDataSourceReader *>::_Reallocate_exactly(v3, (v10 - *v3) >> 3);
  }
}
