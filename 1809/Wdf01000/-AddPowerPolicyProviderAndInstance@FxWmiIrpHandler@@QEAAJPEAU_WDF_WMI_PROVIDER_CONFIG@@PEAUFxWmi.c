/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0041934
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00850C0 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C0013F40 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     FxIsEqualGuid @ 0x1C003BBD8 (FxIsEqualGuid.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C003FE34 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0040048 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C0040870 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0041C80 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0041F14 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0042200 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005BF04 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char v5; // r15
  unsigned __int8 updated; // bp
  FxObject *v7; // r14
  _LIST_ENTRY **ProviderLocked; // rax
  FxWmiProvider *v12; // rdi
  FxWmiProvider *v13; // rax
  unsigned __int8 v14; // r8
  FxWmiProvider *v15; // rax
  int v16; // ebx
  const _GUID *v17; // rbx
  FxWmiInstanceInternal *v18; // rax
  FxObject *v19; // rax
  _LIST_ENTRY *p_m_ListEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql[16]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 update; // [rsp+88h] [rbp+10h] BYREF

  update = 0;
  v5 = 0;
  updated = 0;
  v7 = 0LL;
  FxNonPagedObject::Lock(this, irql, (unsigned __int8)InstanceCallbacks);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  v12 = (FxWmiProvider *)ProviderLocked;
  if ( ProviderLocked )
  {
    if ( !*((_DWORD *)ProviderLocked + 38) )
      goto LABEL_18;
    v17 = (const _GUID *)(ProviderLocked + 21);
    if ( !FxIsEqualGuid((const _GUID *)(ProviderLocked + 21), &GUID_POWER_DEVICE_ENABLE)
      && !FxIsEqualGuid(v17, &GUID_POWER_DEVICE_WAKE_ENABLE) )
    {
      goto LABEL_18;
    }
    WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
    v16 = -1073741055;
LABEL_17:
    if ( v16 < 0 )
    {
LABEL_31:
      if ( !v5 )
        goto LABEL_7;
      goto LABEL_32;
    }
LABEL_18:
    v18 = (FxWmiInstanceInternal *)FxObjectHandleAlloc(
                                     this->m_Globals,
                                     ExDefaultNonPagedPoolType,
                                     0xB0uLL,
                                     0,
                                     0LL,
                                     0,
                                     FxObjectTypeExternal);
    if ( v18 )
    {
      FxWmiInstanceInternal::FxWmiInstanceInternal(v18, this->m_Globals, InstanceCallbacks, v12);
      v7 = v19;
    }
    if ( v7 )
      v16 = FxObject::AssignParentObject(v7, v12);
    else
      v16 = -1073741670;
    if ( v16 >= 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Instance, (signed __int64)v7, 0LL) )
        v16 = -1073741771;
      if ( v16 >= 0 )
      {
        v16 = FxWmiProvider::AddInstanceLocked(v12, (unsigned __int64)v7, 0, &update, AddInstanceToHead);
        if ( v16 >= 0 )
        {
          updated = update;
          if ( update )
            updated = FxWmiIrpHandler::DeferUpdateLocked(this, irql[0]);
          goto LABEL_7;
        }
      }
      updated = update;
    }
    goto LABEL_31;
  }
  v13 = (FxWmiProvider *)FxObjectHandleAlloc(
                           this->m_Globals,
                           ExDefaultNonPagedPoolType,
                           0xD8uLL,
                           0,
                           0LL,
                           0,
                           FxObjectTypeExternal);
  if ( v13 )
  {
    FxWmiProvider::FxWmiProvider(v13, this->m_Globals, ProviderConfig, this->m_Device);
    v12 = v15;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v16 = -1073741670;
    goto LABEL_7;
  }
  v5 = 1;
  v16 = FxWmiIrpHandler::AddProviderLocked(this, v12, irql[0], 0LL);
  if ( v16 >= 0 )
  {
    v16 = FxObject::AssignParentObject(v12, this->m_DeviceBase);
    if ( v16 < 0 )
    {
LABEL_32:
      --this->m_NumProviders;
      p_m_ListEntry = &v12->m_ListEntry;
      Flink = v12->m_ListEntry.Flink;
      if ( Flink->Blink != &v12->m_ListEntry || (Blink = v12->m_ListEntry.Blink, Blink->Flink != p_m_ListEntry) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      v12->m_ListEntry.Blink = &v12->m_ListEntry;
      p_m_ListEntry->Flink = p_m_ListEntry;
      goto LABEL_7;
    }
    goto LABEL_17;
  }
LABEL_7:
  FxNonPagedObject::Unlock(this, irql[0], v14);
  if ( v16 < 0 )
  {
    if ( v7 )
      v7->DeleteObject(v7);
    if ( v5 )
      v12->DeleteObject(v12);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v16;
}
