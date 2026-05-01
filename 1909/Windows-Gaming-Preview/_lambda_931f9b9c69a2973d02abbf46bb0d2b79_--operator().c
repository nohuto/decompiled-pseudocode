/*
 * XREFs of _lambda_931f9b9c69a2973d02abbf46bb0d2b79_::operator() @ 0x1800121E0
 * Callers:
 *     ?get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180012150 (-get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B38 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180012550 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x1800126B4 (-_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_931f9b9c69a2973d02abbf46bb0d2b79_::operator()(__int64 a1)
{
  int FileProperties; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  int FileDescription; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  FileProperties = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
                     *(_QWORD *)a1,
                     &v12);
  v4 = FileProperties;
  if ( FileProperties >= 0 )
  {
    FileDescription = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
                        v3,
                        &v12,
                        **(_QWORD **)(a1 + 8));
    if ( FileDescription < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE6,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)FileDescription);
      v6 = **(_QWORD **)(a1 + 8);
      v7 = v12;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 72LL))(v12, v6);
      v9 = v8;
      if ( v8 >= 0 )
        v9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x182,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
          (const char *)(unsigned int)v8);
      if ( v9 >= 0 )
      {
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEB,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
          (const char *)(unsigned int)v9);
        v4 = -2147467259;
      }
      goto LABEL_12;
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)FileProperties);
  }
  v7 = v12;
LABEL_12:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
