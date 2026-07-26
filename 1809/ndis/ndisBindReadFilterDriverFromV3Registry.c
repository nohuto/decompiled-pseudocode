/*
 * XREFs of ndisBindReadFilterDriverFromV3Registry @ 0x1C00C8244
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C82EC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x1C0051C6C (WPP_SF_Sd.c)
 *     WPP_SF_S @ 0x1C0065340 (WPP_SF_S.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C00C6ABC (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV3Registry(__int64 a1)
{
  int v2; // eax
  bool FilterDriverSettingsFromV3Registry; // bl
  HANDLE Handle[2]; // [rsp+30h] [rbp-228h] BYREF
  wchar_t v6[256]; // [rsp+40h] [rbp-218h] BYREF

  netsetupBuildObjectPath(3, (unsigned int *)(a1 + 24), 0, 1, v6);
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, v6, 0LL);
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      if ( (unsigned __int8)byte_1C00A0259 >= 2u )
        WPP_SF_S(0xAu, &WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids, v6);
    }
    else if ( (unsigned __int8)byte_1C00A0259 >= 2u )
    {
      WPP_SF_Sd(0xBu, &WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids, v6, v2);
    }
    FilterDriverSettingsFromV3Registry = 0;
  }
  else
  {
    FilterDriverSettingsFromV3Registry = ndisBindReadFilterDriverSettingsFromV3Registry(a1, (__int64)Handle);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return FilterDriverSettingsFromV3Registry;
}
