/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18001EEDC
 * Callers:
 *     ??_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001E880 (--_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$map@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAA@XZ @ 0x18001E9E4 (--1-$map@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Previe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@@Z @ 0x18001F0B0 (-_Erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameListEntryServer@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::~_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>(
        void **a1)
{
  void *v2; // rsi
  __int64 *v3; // rdi
  __int64 *v4; // r14
  _QWORD *v5; // rax
  volatile signed __int64 *v6; // rcx

  v2 = *a1;
  v3 = (__int64 *)*((_QWORD *)*a1 + 1);
  v4 = v3;
  v5 = *a1;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (__int64 *)*v4;
      v6 = (volatile signed __int64 *)v3[5];
      if ( v6 )
      {
        v3[5] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v6);
      }
      WindowsDeleteString((HSTRING)v3[4]);
      v3[4] = 0LL;
      operator delete(v3, (const struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v5 = *a1;
  }
  v5[1] = v2;
  *(_QWORD *)*a1 = v2;
  *((_QWORD *)*a1 + 2) = v2;
  a1[1] = 0LL;
  operator delete(*a1, (const struct std::nothrow_t *)0x30);
}
