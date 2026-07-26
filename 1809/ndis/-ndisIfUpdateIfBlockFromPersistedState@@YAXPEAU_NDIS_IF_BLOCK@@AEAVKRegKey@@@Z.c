/*
 * XREFs of ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0042394 (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C000990C (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001C9E8 (ndisIfReadNetworkGuidFromKey.c)
 *     ndisMUpdateHiddenFlag @ 0x1C001E3B0 (ndisMUpdateHiddenFlag.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0024140 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003F038 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F0F0 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     WPP_SF__guid_ @ 0x1C0041BA0 (WPP_SF__guid_.c)
 *     WPP_SF__guid_L @ 0x1C0041C1C (WPP_SF__guid_L.c)
 *     WPP_SF__guid__guid__guid_ @ 0x1C0041CA8 (WPP_SF__guid__guid__guid_.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C00BD6EC (ndisIfUpdateInterfaceHiddenFlag.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C5000 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfReadHiddenFlag @ 0x1C00C93F0 (ndisIfReadHiddenFlag.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *this)
{
  struct NdisNetworkInterfacePersistedState *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  _DEVICE_OBJECT *v9; // rdx
  __int64 v10; // rdx
  NTSTATUS v11; // esi
  int updated; // eax
  __int64 v13; // rdx
  bool v14; // [rsp+30h] [rbp-D0h] BYREF
  struct KRegKey *v15; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v17; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v19; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v20; // [rsp+68h] [rbp-98h]
  struct _GUID v21; // [rsp+84h] [rbp-7Ch] BYREF

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v19);
  Handle[0] = 0LL;
  Ndis::BindRegistry::ReadNetworkInterfaceV2(this, (struct KRegKey *)Handle, (struct KRegKey *)&v19, v4);
  v17 = 0LL;
  v15 = this;
  if ( (int)NetSetupPropertyBag::ReadString(
              (NetSetupPropertyBag *)&v15,
              (const struct _NETSETUPPROPKEY *)&unk_1C008E230,
              &v17) >= 0 )
    ndisIfUpdateStringIfNeeded((const wchar_t *)&a1->Type, (const void **)v19, &a1->ifAlias.Length, 0, 20);
  P = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(
              (NetSetupPropertyBag *)&v15,
              (const struct _NETSETUPPROPKEY *)&unk_1C008E218,
              &P) >= 0 )
    ndisIfUpdateStringIfNeeded((const wchar_t *)&a1->Type, (const void **)v20, &a1->ifDescr.Length, 2u, 4);
  if ( (int)ndisIfReadNetworkGuidFromKey(this, &v21) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v21, 0) < 0
    && (unsigned __int8)byte_1C00A0265 >= 3u )
  {
    WPP_SF__guid__guid__guid_(v6, v5, (__int64)&a1->InterfaceGuid, (__int64)&a1->Network->NetworkGuid, (__int64)&v21);
  }
  v7 = ndisIfReferenceMiniport((__int64)a1, 0x15u);
  v8 = v7;
  if ( v7 )
    v9 = *(_DEVICE_OBJECT **)(v7 + 3864);
  else
    v9 = 0LL;
  v11 = ndisIfReadHiddenFlag((void ***)&v15, v9, &v14);
  if ( v11 >= 0 )
  {
    ndisIfUpdateInterfaceHiddenFlag((__int64)a1, v14);
    if ( !v8 )
      goto LABEL_17;
    ndisMUpdateHiddenFlag(v8, v14);
  }
  if ( v8 )
    ndisIfDereferenceMiniport((__int64)a1, v10, 0x15u);
LABEL_17:
  if ( v11 >= 0 )
  {
    if ( (unsigned __int8)byte_1C00A0265 >= 4u )
      WPP_SF__guid_(0xB7u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)&a1->InterfaceGuid);
    updated = ndisIfUpdateInterfaceFromPersistentStore((const struct NdisNetworkInterfacePersistedState *)&v19, v10);
    if ( updated < 0 && (unsigned __int8)byte_1C00A0265 >= 2u )
      WPP_SF__guid_L(0xB8u, v13, (__int64)&a1->InterfaceGuid, updated);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x7274534Bu);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x7274534Bu);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x7274534Bu);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x7274534Bu);
}
