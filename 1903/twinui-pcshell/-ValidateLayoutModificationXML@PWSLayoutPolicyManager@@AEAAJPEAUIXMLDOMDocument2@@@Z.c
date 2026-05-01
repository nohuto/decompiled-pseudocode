/*
 * XREFs of ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801E726C
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1801E62A0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016761C (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1801E6130 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180405408 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateLayoutModificationXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  int v7[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v8; // [rsp+30h] [rbp-88h]
  int v9[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+50h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-60h]
  _QWORD v12[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = -2LL;
  v12[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  v12[1] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  v12[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
  v12[3] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
  v12[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
  v12[5] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
  v12[6] = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
  v12[7] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
  *(_QWORD *)v7 = v12;
  *(_QWORD *)&v7[2] = &v13;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
      v9,
      (__int64)v7);
    *(_OWORD *)v7 = *(_OWORD *)v9;
    v8 = v10;
    *(_OWORD *)v9 = 0LL;
    v10 = 0LL;
    v3 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v7, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      std::vector<tagRECT>::~vector<tagRECT>((__int64)v9);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)v3);
      std::vector<tagRECT>::~vector<tagRECT>((__int64)v9);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x137,
                           (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v5);
  }
  return result;
}
