/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0076FF8
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0076440 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00909D8 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000D9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C0076B90 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0079AE8 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 */

int __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  void *ParentObject; // rdx
  FxDeviceBase *v11; // rax
  FxDeviceBase *v12; // rcx
  int result; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 _a3; // rdx
  bool v17; // zf
  unsigned __int16 v18; // ax
  const void *_a2; // rcx
  WDFDRIVER__ *Driver; // rdx
  FxIoQueue *v21; // rbx
  FxCxDeviceInfo **p_m_ExecutionLevel; // rcx
  FxCxDeviceInfo *i; // rax
  int v24; // esi
  unsigned __int8 v25; // r8
  FxDriver *pDriver; // [rsp+50h] [rbp-38h] BYREF
  FxObject *pParent; // [rsp+90h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+A0h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  pParent = 0LL;
  pQueue = 0LL;
  pDriver = 0LL;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v11 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
    v12 = v11;
    if ( !v11 )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, 0xC0000010);
      return -1073741808;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v11 != m_DeviceBase )
    {
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      v17 = m_ObjectSize == 0;
      v18 = v12->m_ObjectSize;
      if ( v17 )
        _a3 = 0LL;
      _a2 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18 )
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return -1073741808;
    }
  }
  else
  {
    pParent = this;
  }
  if ( Config->Size > 0x58 )
  {
    Driver = Config->Driver;
    if ( Driver )
      FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  }
  result = FxIoQueue::_Create(m_Globals, QueueAttributes, Config, Caller, this, this->m_PowerStateOn, &pQueue);
  if ( result >= 0 )
  {
    v21 = pQueue;
    if ( pDriver )
    {
      p_m_ExecutionLevel = (FxCxDeviceInfo **)&this->m_DeviceBase[1].m_ExecutionLevel;
      for ( i = *p_m_ExecutionLevel; i != (FxCxDeviceInfo *)p_m_ExecutionLevel; i = (FxCxDeviceInfo *)i->ListEntry.Flink )
      {
        if ( i->Driver == pDriver )
          goto LABEL_23;
      }
      i = 0LL;
LABEL_23:
      pQueue->m_CxDeviceInfo = i;
    }
    v24 = FxObject::Commit(v21, (_FX_DRIVER_GLOBALS *)QueueAttributes, 0LL, pParent, 1u);
    if ( v24 >= 0 )
    {
      FxPkgIo::AddIoQueue(this, v21, v25);
      *ppQueue = v21;
    }
    else
    {
      FxObject::ClearEvtCallbacks(v21);
      ((void (*)(void))v21->DeleteObject)();
    }
    return v24;
  }
  return result;
}
