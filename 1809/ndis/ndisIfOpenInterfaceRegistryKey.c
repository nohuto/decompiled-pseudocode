/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908
 * Callers:
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BA990 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C8AA0 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C00E33B0 (ndisIfOpenInterfacePersistedStorage.c)
 *     ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00E33D0 (ndisIfReadInterfaceAddDeviceParametersForLWMiniport.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C00EAAB0 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF__guid_Dd @ 0x1C0041BCC (WPP_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(unsigned int *a1, KRegKey *a2, ACCESS_MASK a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-248h]
  wchar_t v13[256]; // [rsp+30h] [rbp-238h] BYREF

  netsetupBuildObjectPath(2, a1, 0, a4, v13);
  v10 = KRegKey::Open(a2, a3, v13, 0LL);
  if ( v10 == -1073741772 )
  {
    if ( !*((_BYTE *)P + 96) )
      goto LABEL_6;
    netsetupBuildObjectPath(2, a1, 1, a4, v13);
    v10 = KRegKey::Open(a2, a3, v13, 0LL);
  }
  if ( v10 >= 0 )
    return 0LL;
LABEL_6:
  if ( (unsigned __int8)byte_1C00A0265 >= 3u )
  {
    LODWORD(v12) = v10;
    WPP_SF__guid_Dd(v9, v8, (__int64)a1, a4, v12);
  }
  return (unsigned int)v10;
}
