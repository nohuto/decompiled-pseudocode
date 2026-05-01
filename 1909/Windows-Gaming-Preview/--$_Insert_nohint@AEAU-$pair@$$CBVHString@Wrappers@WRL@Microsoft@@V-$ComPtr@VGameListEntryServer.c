/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@1@@Z @ 0x18000E64C
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A0F4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000AA24 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@1@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@1@1@Z @ 0x18000F17C (--$_Insert_at@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameListEntryServer@Gam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180011890.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Insert_nohint<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        HSTRING *a4,
        HSTRING *a5)
{
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  bool v9; // r13
  int v10; // r8d
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v12; // rax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  const WCHAR *v20; // rdi
  const WCHAR *v21; // rax
  int v22; // r8d
  HSTRING *v23; // rdi
  HSTRING v24; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-48h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-48h]
  char v27; // [rsp+70h] [rbp+8h] BYREF
  HSTRING *v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v7 = *a1;
  v8 = (__int64 *)(*a1)[1];
  v9 = 1;
  v10 = 0;
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      v7 = v8;
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v8[4], 0LL);
      v12 = WindowsGetStringRawBuffer(*v28, 0LL);
      v13 = CompareStringOrdinal(v12, -1, StringRawBuffer, -1, 1);
      v9 = v13 == 1;
      if ( v13 == 1 )
        v8 = (__int64 *)*v8;
      else
        v8 = (__int64 *)v8[2];
      v10 = 0;
    }
    while ( !*((_BYTE *)v8 + 25) );
    a4 = v28;
  }
  try
  {
    v14 = v7;
    if ( v9 )
    {
      if ( v7 == (__int64 *)**a1 )
      {
        LOBYTE(v10) = 1;
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *> *>(
                                     (_DWORD)a1,
                                     (unsigned int)&v27,
                                     v10,
                                     (_DWORD)v7,
                                     bIgnoreCase,
                                     (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v7 + 25) )
      {
        v14 = (__int64 *)v7[2];
      }
      else
      {
        v17 = (__int64 *)*v7;
        if ( *(_BYTE *)(*v7 + 25) )
        {
          v18 = (__int64 *)v7[1];
          if ( !*((_BYTE *)v18 + 25) )
          {
            v19 = v7;
            do
            {
              if ( v19 != (__int64 *)*v18 )
                break;
              v14 = v18;
              v18 = (__int64 *)v18[1];
              v19 = v14;
            }
            while ( !*((_BYTE *)v18 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
            v14 = v18;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = (__int64 *)v17[2];
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
    }
    v20 = WindowsGetStringRawBuffer(*a4, 0LL);
    v21 = WindowsGetStringRawBuffer((HSTRING)v14[4], 0LL);
    if ( CompareStringOrdinal(v21, -1, v20, -1, 1) == 1 )
    {
      LOBYTE(v22) = v9;
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *> *>(
                                   (_DWORD)a1,
                                   (unsigned int)&v27,
                                   v22,
                                   (_DWORD)v7,
                                   bIgnoreCasea,
                                   (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    else
    {
      v23 = a5;
      v24 = a5[5];
      if ( v24 )
      {
        a5[5] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v24);
      }
      WindowsDeleteString(v23[4]);
      v23[4] = 0LL;
      operator delete(v23, (const struct std::nothrow_t *)0x30);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Destroy_if_node(
      v15,
      a5);
    throw;
  }
  return result;
}
