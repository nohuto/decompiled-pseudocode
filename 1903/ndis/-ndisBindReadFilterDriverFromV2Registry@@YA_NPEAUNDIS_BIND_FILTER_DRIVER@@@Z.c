/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0127318
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010A7DC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002EFDC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_S @ 0x1C0032B90 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0127458 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  int v2; // eax
  bool FilterDriverSettingsFromV2Registry; // bl
  char v5[4]; // [rsp+30h] [rbp-238h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-228h] BYREF
  wchar_t v7[256]; // [rsp+50h] [rbp-218h] BYREF

  netsetupBuildObjectPath(3LL, &a1->Guid.Data1, 0, 2, v7);
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, v7, 0LL);
  if ( v2 >= 0 )
  {
    FilterDriverSettingsFromV2Registry = ndisBindReadFilterDriverSettingsFromV2Registry(a1, (struct KRegKey *)Handle);
  }
  else
  {
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xAu,
          0xDu,
          (struct _GUID *)&WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids,
          v7);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = v2;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xAu,
        0xEu,
        (struct _GUID *)&WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids,
        v7,
        *(_DWORD *)v5);
    }
    FilterDriverSettingsFromV2Registry = 0;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return FilterDriverSettingsFromV2Registry;
}
