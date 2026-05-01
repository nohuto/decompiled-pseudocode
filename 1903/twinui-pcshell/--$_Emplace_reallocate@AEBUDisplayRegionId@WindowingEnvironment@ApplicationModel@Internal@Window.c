/*
 * XREFs of ??$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@QEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1802789D4
 * Callers:
 *     ?AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x18027A8A0 (-AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISetti.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXQEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@_K1@Z @ 0x18016A218 (-_Change_array@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 *     ??$_Ucopy@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z @ 0x1801C3F9C (--$_Ucopy@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z.c)
 *     ?_Calculate_growth@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x180282180 (-_Calculate_growth@-$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?_Umove_if_noexcept1@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@00U?$integral_constant@_N$00@2@@Z @ 0x1802825BC (-_Umove_if_noexcept1@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@.c)
 */

__int64 __fastcall std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Emplace_reallocate<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &>(
        void **a1,
        _BYTE *a2,
        unsigned int *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  size_t v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  _BYTE *v15; // r8
  void *v16; // rdx
  __int64 v17; // rcx
  char v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+78h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Calculate_growth(
         a1,
         v7 + 1);
  v10 = 4 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = (__int64)v12;
  v20 = v12;
  try
  {
    v14 = *a3;
    *((_DWORD *)v12 + v6) = v14;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      v19 = 0;
      std::vector<tagPOINT>::_Umove_if_noexcept1(a1, v16, v15, v12, v19);
    }
    else
    {
      std::vector<void *>::_Ucopy<void * *>(v14, v16, (__int64)a2, v12);
      std::vector<void *>::_Ucopy<void * *>(v17, a2, (__int64)a1[1], (void *)(v13 + 4 * (v6 + 1)));
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(4 * v9));
    throw;
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Change_array(
    (__int64)a1,
    v13,
    v8,
    v9);
  return (__int64)*a1 + 4 * v6;
}
