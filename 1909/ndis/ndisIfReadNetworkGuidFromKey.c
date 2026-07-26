/*
 * XREFs of ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0036738 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C003EE24 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C0063C64 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x1C00FC488 (--0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C0101A70 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReadNetworkGuidFromKey(struct KRegKey *a1, struct _GUID *a2)
{
  int v3; // edi
  int Guid; // eax
  int v5; // edx
  unsigned int v6; // ebx
  KIRQL v8; // di
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  int v10; // edx
  struct _GUID v11; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v12; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v12.Data1 = 0LL;
  *(_QWORD *)v12.Data4 = 0LL;
  NetSetupPropertyBag::NetSetupPropertyBag((NetSetupPropertyBag *)&v11, a1);
  v3 = NetSetupPropertyBag::ReadGuid((NetSetupPropertyBag *)&v11, (const struct _NETSETUPPROPKEY *)&unk_1C00CC2C8, &v12);
  Guid = NetSetupPropertyBag::ReadGuid((NetSetupPropertyBag *)&v11, (const struct _NETSETUPPROPKEY *)&unk_1C00CC2B0, a2);
  v6 = 0;
  if ( v3 < 0 )
  {
    if ( Guid >= 0 )
      return v6;
    if ( v3 == -1073741772 && Guid == -1073741772 )
    {
      *a2 = *ndisIfGetDefaultNetworkGuid(&v11);
      return v6;
    }
    return (unsigned int)-1073741823;
  }
  if ( Guid >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        22,
        181,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(&v12);
  if ( CompartmentBlockByGuid )
  {
    *a2 = CompartmentBlockByGuid->LoopbackNetwork->NetworkGuid;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    return v6;
  }
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      22,
      182,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (__int64)&v12);
  }
  return 3221225473LL;
}
