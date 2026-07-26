/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0092120 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34 (-ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C0115E70 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0101EBC (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C01081DC (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0108308 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108418 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C01084D0 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C0109D0C (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0125E24 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        Ndis::BindRegistry *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  enum CallRunMode v7; // r8d
  Ndis::BindStack v9; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned int)a2;
  Ndis::BindStack::BindStack(&v9);
  v5 = 0;
  if ( *((_BYTE *)P + 97) && !ndisBuildBindings((const struct _GUID *)((char *)this + 4008), &v9)
    || Ndis::BindStack::ReadV2InterfaceBindings(&v9, (const struct _GUID *)((char *)this + 4008)) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 5128, 0LL);
    Ndis::BindRegistry::UpdateProtocols((__int64)this, (__int64)this + 5000, (__int64)&v9, v4);
    Ndis::BindRegistry::UpdateFilters(this, (char *)this + 5016, &v9.Filters, v4);
    ++*((_DWORD *)this + 1274);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)this + 5104), v6);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)this + 5104), RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded(this, 0LL, v7);
  }
  else
  {
    v5 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v9);
  return v5;
}
