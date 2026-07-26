/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0106FA8
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C82EC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x1C0051C6C (WPP_SF_Sd.c)
 *     WPP_SF_S @ 0x1C0065340 (WPP_SF_S.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C010709C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  int v2; // eax
  bool FilterDriverSettingsFromV2Registry; // bl
  HANDLE Handle[2]; // [rsp+30h] [rbp-228h] BYREF
  wchar_t v6[256]; // [rsp+40h] [rbp-218h] BYREF

  netsetupBuildObjectPath(3, &a1->Guid.Data1, 0, 2, v6);
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, v6, 0LL);
  if ( v2 >= 0 )
  {
    FilterDriverSettingsFromV2Registry = ndisBindReadFilterDriverSettingsFromV2Registry(a1, (struct KRegKey *)Handle);
  }
  else
  {
    if ( v2 == -1073741772 )
    {
      if ( (unsigned __int8)byte_1C00A0259 >= 2u )
        WPP_SF_S(0xDu, &WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids, v6);
    }
    else if ( (unsigned __int8)byte_1C00A0259 >= 2u )
    {
      WPP_SF_Sd(0xEu, &WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids, v6, v2);
    }
    FilterDriverSettingsFromV2Registry = 0;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return FilterDriverSettingsFromV2Registry;
}
