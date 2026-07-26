/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005DD2C (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00EA23C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00EA7D4 (ndisHandleBindNotification.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00BDE80 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDEC0 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BE074 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE458 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFFF0 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00CEEB8 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0105B18 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edi
  enum CallRunMode v6; // r8d
  Ndis::BindStack v8; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned int)a2;
  Ndis::BindStack::BindStack(&v8);
  v5 = 0;
  if ( *((_BYTE *)P + 97) && !ndisBuildBindings(&this->InterfaceGuid, &v8)
    || Ndis::BindStack::ReadV2InterfaceBindings(&v8, &this->InterfaceGuid) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this->BindEngine.m_lock, 0LL);
    Ndis::BindRegistry::UpdateProtocols(this, &this->Bindings, &v8, v4);
    Ndis::BindRegistry::UpdateFilters(
      (__int64)this,
      (unsigned __int64)&this->Bindings.Filters,
      (unsigned __int64)&v8.Filters,
      v4);
    ++this->Bindings.ChangeEpoch;
    Ndis::BindEngine::EndPolicyUpdates(&this->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&this->BindEngine, RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded(this, RunSynchronous, v6);
  }
  else
  {
    v5 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v8);
  return v5;
}
