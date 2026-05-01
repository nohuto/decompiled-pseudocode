/*
 * XREFs of ?get_GameModeConfiguration@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x18002B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800374F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800374F0.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_GameModeConfiguration(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v6; // rax
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v5 = *((_QWORD *)this + 33);
  v6 = 0LL;
  v8 = 0LL;
  if ( v5 && *((_QWORD *)this + 34) )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
      v5,
      &GUID_78e591af_b142_4ef0_8830_55bc2be4f5ea,
      &v8);
    v6 = v8;
  }
  v8 = 0LL;
  *a2 = v6;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
