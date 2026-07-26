/*
 * XREFs of ndisIfReadNetworkGuidFromKey @ 0x1C001C9E8
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001FA10 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003EF20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF__guid_ @ 0x1C0041BA0 (WPP_SF__guid_.c)
 *     ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x1C00B4314 (--0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C00C4F7C (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReadNetworkGuidFromKey(struct KRegKey *a1, struct _GUID *a2)
{
  int v3; // edi
  int Guid; // eax
  unsigned int v5; // ebx
  KIRQL v7; // di
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _GUID v9; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v10; // [rsp+30h] [rbp-28h] BYREF

  NetSetupPropertyBag::NetSetupPropertyBag((NetSetupPropertyBag *)&v9, a1);
  v3 = NetSetupPropertyBag::ReadGuid((NetSetupPropertyBag *)&v9, (const struct _NETSETUPPROPKEY *)&unk_1C0089250, &v10);
  Guid = NetSetupPropertyBag::ReadGuid((NetSetupPropertyBag *)&v9, (const struct _NETSETUPPROPKEY *)&unk_1C0089238, a2);
  v5 = 0;
  if ( v3 < 0 )
  {
    if ( Guid >= 0 )
      return v5;
    if ( v3 == -1073741772 && Guid == -1073741772 )
    {
      *a2 = *ndisIfGetDefaultNetworkGuid(&v9);
      return v5;
    }
    return (unsigned int)-1073741823;
  }
  if ( Guid >= 0 )
  {
    if ( (unsigned __int8)byte_1C00A0265 >= 3u )
      WPP_SF_(180LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
    return (unsigned int)-1073741823;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(&v10);
  if ( CompartmentBlockByGuid )
  {
    *a2 = CompartmentBlockByGuid->LoopbackNetwork->NetworkGuid;
    KeReleaseSpinLock(&ndisIfListLock, v7);
    return v5;
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( (unsigned __int8)byte_1C00A0265 >= 3u )
    WPP_SF__guid_(181LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, &v10);
  return 3221225473LL;
}
