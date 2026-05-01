/*
 * XREFs of ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x180168BE0
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x180169008 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x180167E08 (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801683E8 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1801686F4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18016A3E8 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU(
        __int64 a1,
        int a2)
{
  int v3; // edi
  void **v4; // rsi
  void **v5; // rax
  void **v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-79h] BYREF
  char v11; // [rsp+28h] [rbp-71h]
  __int128 v12; // [rsp+30h] [rbp-69h]
  __int128 v13; // [rsp+40h] [rbp-59h]
  __int128 v14; // [rsp+50h] [rbp-49h]
  __int128 v15; // [rsp+60h] [rbp-39h] BYREF
  __int64 v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  char v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-9h]
  void *v20; // [rsp+98h] [rbp-1h] BYREF
  void *v21; // [rsp+B0h] [rbp+17h] BYREF
  int v22; // [rsp+108h] [rbp+6Fh] BYREF

  v19 = -2LL;
  v3 = 0;
  v10 = 0x100000000LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v22 = a2;
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
    (const void **)&v15,
    0LL,
    &v22);
  v4 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
         &v20,
         (__int64)&v15);
  v5 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
         &v21,
         a1 + 64);
  v6 = v5;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v7 = *v5;
    if ( *v5 == v5[1] )
    {
LABEL_7:
      v3 = -1;
    }
    else
    {
      while ( 1 )
      {
        v8 = *v4;
        if ( *v4 != v4[1] )
          break;
LABEL_6:
        if ( ++v7 == v6[1] )
          goto LABEL_7;
      }
      while ( *v7 != *v8 )
      {
        if ( ++v8 == v4[1] )
          goto LABEL_6;
      }
      v3 = 1;
    }
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v6);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v4);
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v10);
  return v3 > 0;
}
