/*
 * XREFs of ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067A40 (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0011DAC (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0011FD4 (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D7C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C003EE24 (WPP_RECORDER_SF__guid_.c)
 *     ndisMUpdateHiddenFlag @ 0x1C003F3C0 (ndisMUpdateHiddenFlag.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0063D7C (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0063E28 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1C0066F8C (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid__guid__guid_ @ 0x1C006714C (WPP_RECORDER_SF__guid__guid__guid_.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ndisIfReadHiddenFlag @ 0x1C01073E0 (ndisIfReadHiddenFlag.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958 (ndisIfUpdateInterfaceHiddenFlag.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *this)
{
  struct NdisNetworkInterfacePersistedState *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  _DEVICE_OBJECT *v9; // rdx
  __int64 v10; // rdx
  NTSTATUS v11; // esi
  int v12; // r8d
  _GUID *p_InterfaceGuid; // rbx
  int v14; // edx
  int v15; // r8d
  PVOID v16; // rcx
  PVOID v17; // rcx
  int v18; // [rsp+20h] [rbp-E0h]
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  struct KRegKey *v20; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v22; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct KRegKey v24; // [rsp+70h] [rbp-90h] BYREF
  const void **v25; // [rsp+78h] [rbp-88h]
  struct _GUID v26; // [rsp+94h] [rbp-6Ch] BYREF

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v24);
  Handle[0] = 0LL;
  Ndis::BindRegistry::ReadNetworkInterfaceV2(this, (struct KRegKey *)Handle, &v24, v4);
  v22 = 0LL;
  v20 = this;
  if ( (int)NetSetupPropertyBag::ReadString((void ***)&v20, (const struct _NETSETUPPROPKEY *)&unk_1C00D3148, &v22) >= 0 )
    ndisIfUpdateStringIfNeeded((const wchar_t *)&a1->Type, (const void **)v24.m_ptr, &a1->ifAlias.Length, 0, 20);
  P = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString((void ***)&v20, (const struct _NETSETUPPROPKEY *)&unk_1C00D3130, &P) >= 0 )
    ndisIfUpdateStringIfNeeded((const wchar_t *)&a1->Type, v25, &a1->ifDescr.Length, 2, 4);
  if ( (int)ndisIfReadNetworkGuidFromKey(this, &v26) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v26, 0) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid__guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&v26,
      v5,
      v6,
      v18,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->Network->NetworkGuid,
      (__int64)&v26);
  }
  v7 = ndisIfReferenceMiniport((__int64)a1);
  v8 = v7;
  if ( v7 )
    v9 = *(_DEVICE_OBJECT **)(v7 + 3832);
  else
    v9 = 0LL;
  v11 = ndisIfReadHiddenFlag((void ***)&v20, v9, &v19);
  if ( v11 >= 0 )
  {
    ndisIfUpdateInterfaceHiddenFlag((__int64)a1, v19);
    if ( !v8 )
      goto LABEL_17;
    ndisMUpdateHiddenFlag(v8, v19);
  }
  if ( v8 )
    ndisIfDereferenceMiniport((__int64)a1, v10, 0x15u);
LABEL_17:
  if ( v11 >= 0 )
  {
    p_InterfaceGuid = &a1->InterfaceGuid;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        22,
        184,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
        (__int64)p_InterfaceGuid);
    }
    if ( (int)ndisIfUpdateInterfaceFromPersistentStore(
                (const struct NdisNetworkInterfacePersistedState *)&v24,
                v10,
                v12) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF__guid_L(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, 185);
    }
  }
  v16 = P;
  P = 0LL;
  if ( v16 )
    ExFreePoolWithTag(v16, 0x7274534Bu);
  v17 = v22;
  v22 = 0LL;
  if ( v17 )
    ExFreePoolWithTag(v17, 0x7274534Bu);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v24);
}
