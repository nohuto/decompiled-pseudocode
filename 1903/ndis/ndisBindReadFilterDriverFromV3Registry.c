/*
 * XREFs of ndisBindReadFilterDriverFromV3Registry @ 0x1C010A818
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010A7DC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002EFDC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_S @ 0x1C0032B90 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0100FC8 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV3Registry(__int64 a1)
{
  int v2; // ecx
  bool FilterDriverSettingsFromV3Registry; // bl
  HANDLE Handle[2]; // [rsp+40h] [rbp-228h] BYREF
  wchar_t v6[256]; // [rsp+50h] [rbp-218h] BYREF

  netsetupBuildObjectPath(3LL, (unsigned int *)(a1 + 24), 0, 1, v6);
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, v6, 0LL);
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xAu,
          0xAu,
          (struct _GUID *)&WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids,
          v6);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xAu,
        0xBu,
        (struct _GUID *)&WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids,
        v6,
        v2);
    }
    FilterDriverSettingsFromV3Registry = 0;
  }
  else
  {
    FilterDriverSettingsFromV3Registry = ndisBindReadFilterDriverSettingsFromV3Registry(a1, Handle);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return FilterDriverSettingsFromV3Registry;
}
