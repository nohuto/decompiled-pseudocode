/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000DC48
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000D9A8 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000DA90 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C000DD70 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _FX_DRIVER_GLOBALS *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v10; // r9d
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rcx
  FxDeviceBase *v12; // rax
  int EffectiveLock; // esi
  struct _IO_WORKITEM *v14; // rax
  unsigned int v15; // ecx
  FxTagTracker *m_Lock; // rax
  void **v17; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  this->m_Callback = Config->EvtWorkItemFunc;
  v10 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_Callback = this[-1].m_Callback;
  else
    m_Callback = 0LL;
  if ( m_Callback )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_Callback,
      this,
      178,
      "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
      TagAddRef,
      v10);
  v12 = FxDeviceBase::_SearchForDevice((unsigned __int64)ParentObject, &pCallbacks);
  this->m_DeviceBase = v12;
  if ( !v12 )
    return 3221225488LL;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    1u,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qL(
        m_Globals,
        2u,
        0x12u,
        0xCu,
        WPP_FxWorkItem_cpp_Traceguids,
        Attributes->DestroyEvent.m_Event.Header.WaitListHead.Flink,
        0xC020020C);
    return (unsigned int)EffectiveLock;
  }
  else
  {
    v14 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
    this->m_WorkItem.m_WorkItem = v14;
    if ( v14 )
    {
      v15 = _InterlockedIncrement(&ParentObject->m_Refcnt);
      if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
        m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
      else
        m_Lock = 0LL;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          this,
          269,
          "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
          TagAddRef,
          v15);
      v17 = (void **)WorkItem;
      this->m_Object = ParentObject;
      return FxObject::Commit(this, Attributes, v17, ParentObject, 1u);
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
  }
}
