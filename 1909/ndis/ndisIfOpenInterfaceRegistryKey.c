/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x1C010B380
 * Callers:
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0100580 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0107998 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C0114E70 (ndisIfOpenInterfacePersistedStorage.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0116734 (ndisMiniportQueryInterfaceProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C0066E9C (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(unsigned int *a1, KRegKey *a2, ACCESS_MASK a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  PVOID v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-258h]
  wchar_t v14[256]; // [rsp+40h] [rbp-238h] BYREF

  netsetupBuildObjectPath(2LL, a1, 0, a4, v14);
  v9 = KRegKey::Open(a2, a3, v14, 0LL);
  if ( v9 == -1073741772 )
  {
    v10 = P;
    if ( !*((_BYTE *)P + 96) )
      goto LABEL_6;
    netsetupBuildObjectPath(2LL, a1, 1, a4, v14);
    v9 = KRegKey::Open(a2, a3, v14, 0LL);
  }
  if ( v9 >= 0 )
    return 0LL;
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dd(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, (__int64)v10, v11, v13, (__int64)a1);
  return (unsigned int)v9;
}
