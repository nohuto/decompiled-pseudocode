/*
 * XREFs of ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015D28 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180038BE8 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchableState(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        enum Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v10; // ebx
  HSTRING v12; // rcx
  BOOL IsStringEmpty; // eax
  int v14[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  if ( *((_QWORD *)this + 30) )
  {
    *(_DWORD *)a2 = 3;
    return 0LL;
  }
  if ( *((_QWORD *)this + 36) )
  {
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = *((_QWORD *)this + 33);
  if ( !v6 || !*((_QWORD *)this + 34) )
  {
LABEL_15:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  LOBYTE(v5) = 1;
  v7 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(v6, v5);
  string = 0LL;
  *(_OWORD *)v14 = v7;
  WindowsDeleteString(0LL);
  v8 = *((_QWORD *)this + 34);
  string = 0LL;
  StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(v8, (__int128 *)v14, 23LL, &string);
  v10 = StringPropertyFromGameConfigStore;
  if ( StringPropertyFromGameConfigStore >= 0 )
  {
    v12 = string;
    if ( string )
    {
      IsStringEmpty = WindowsIsStringEmpty(string);
      v12 = string;
      if ( !IsStringEmpty )
        *(_DWORD *)a2 = 1;
    }
    WindowsDeleteString(v12);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x589,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)StringPropertyFromGameConfigStore);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
