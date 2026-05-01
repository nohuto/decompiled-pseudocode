/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024C70
 * Callers:
 *     ?GetIids@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024CF0 (-GetIids@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64;
    v6[2] = GUID_00000038_0000_0000_c000_000000000046;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
