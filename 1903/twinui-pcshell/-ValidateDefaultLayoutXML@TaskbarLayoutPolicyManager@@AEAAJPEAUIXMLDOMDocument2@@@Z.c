/*
 * XREFs of ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180166F98
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180163960 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180162C6C (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180162EF0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016761C (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180405408 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  char *v4; // rcx
  __int64 v5; // rdx
  char *v6; // rdx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  char *v12; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h]

  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)&v10 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v10 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      (char **)&v11,
      0LL,
      &v10);
    *(_QWORD *)&v10 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v10 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    v4 = v12;
    v5 = *((_QWORD *)&v11 + 1);
    if ( v12 == *((char **)&v11 + 1) )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (char **)&v11,
        *((char **)&v11 + 1),
        &v10);
      v4 = v12;
      v6 = (char *)*((_QWORD *)&v11 + 1);
    }
    else
    {
      **((_OWORD **)&v11 + 1) = v10;
      v6 = (char *)(v5 + 16);
      *((_QWORD *)&v11 + 1) = v6;
    }
    *(_QWORD *)&v10 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v10 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    if ( v4 == v6 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (char **)&v11,
        v6,
        &v10);
    }
    else
    {
      *(_OWORD *)v6 = v10;
      *((_QWORD *)&v11 + 1) = v6 + 16;
    }
  }
  catch ( ... )
  {
    v14 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x29E,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<tagRECT>::~vector<tagRECT>(&v11);
    return v14;
  }
  v7 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v10,
         (__int64)&v11);
  v8 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v7, a2);
  std::vector<tagRECT>::~vector<tagRECT>(&v11);
  return v8;
}
