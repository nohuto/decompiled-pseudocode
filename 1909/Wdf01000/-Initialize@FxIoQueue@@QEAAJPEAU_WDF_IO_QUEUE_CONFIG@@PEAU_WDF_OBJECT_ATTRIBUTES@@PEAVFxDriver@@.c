/*
 * XREFs of ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00791C4
 * Callers:
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C007A39C (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000C9B4 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00173B0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_dqd @ 0x1C00356E4 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C0068CCC (WPP_IFR_SF_qqqqq.c)
 *     ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C00789F8 (-ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Initialize(
        FxIoQueue *this,
        _WDF_IO_QUEUE_CONFIG *pConfig,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        unsigned __int8 InitialPowerStateOn)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  MxEvent *p_m_PowerIdle; // rbx
  __int64 result; // rax
  unsigned int NumberOfPresentedRequests; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType; // ecx
  void (__fastcall *EvtIoDefault)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  unsigned int _a1; // ebx
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // ax
  const void *v19; // rbp
  _WDF_TRI_STATE PowerManaged; // ecx
  __int32 v21; // ecx
  unsigned __int8 m_PowerManaged; // al
  FxIoQueuePowerState v23; // eax
  const void *v24; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbp

  m_Globals = this->m_Globals;
  p_m_PowerIdle = &this->m_PowerIdle;
  KeInitializeEvent(&this->m_PowerIdle.m_Event, NotificationEvent, 0);
  p_m_PowerIdle->m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_FinishDisposing.m_Event, NotificationEvent, 0);
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
  result = FxIoQueue::ConfigureConstraints(this, QueueAttributes, Caller);
  if ( (int)result >= 0 )
  {
    DispatchType = pConfig->DispatchType;
    if ( (unsigned int)(DispatchType - 1) > 2 )
    {
      m_ObjectSize = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a1 = -1073741811;
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dqd(m_Globals, 2u, 0xDu, 0xCu, WPP_FxIoQueue_cpp_Traceguids, DispatchType, _a2, -1073741811);
      return _a1;
    }
    EvtIoDefault = pConfig->EvtIoDefault;
    if ( DispatchType == WdfIoQueueDispatchManual )
    {
      if ( EvtIoDefault
        || pConfig->EvtIoRead
        || pConfig->EvtIoWrite
        || pConfig->EvtIoDeviceControl
        || pConfig->EvtIoInternalDeviceControl )
      {
        v17 = 16;
        goto LABEL_20;
      }
    }
    else if ( !EvtIoDefault
           && !pConfig->EvtIoRead
           && !pConfig->EvtIoWrite
           && !pConfig->EvtIoDeviceControl
           && !pConfig->EvtIoInternalDeviceControl )
    {
      _a1 = -1071644149;
      v16 = 15;
LABEL_10:
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, v16, WPP_FxIoQueue_cpp_Traceguids, _a1);
      return _a1;
    }
    if ( pConfig->Size > 0x50 )
    {
      NumberOfPresentedRequests = pConfig->Settings.Parallel.NumberOfPresentedRequests;
      if ( NumberOfPresentedRequests && ((DispatchType - 1) & 0xFFFFFFFD) == 0 )
      {
        v17 = 17;
LABEL_20:
        v18 = this->m_ObjectSize;
        v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        _a1 = -1073741811;
        if ( !v18 )
          v19 = 0LL;
        WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, v17, WPP_FxIoQueue_cpp_Traceguids, v19, 0xC000000D);
        return _a1;
      }
      this->m_MaxParallelQueuePresentedRequests = NumberOfPresentedRequests;
    }
    if ( this->m_PassiveLevel )
    {
      _a1 = FxSystemWorkItem::_Create(
              m_Globals,
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              &this->m_SystemWorkItem);
      if ( (_a1 & 0x80000000) != 0 )
      {
        v16 = 18;
        goto LABEL_10;
      }
    }
    this->m_Type = pConfig->DispatchType;
    PowerManaged = pConfig->PowerManaged;
    if ( PowerManaged )
    {
      v21 = PowerManaged - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
          this->m_PowerManaged = BYTE1(this->m_DeviceBase[1].m_Globals) == 0;
      }
      else
      {
        this->m_PowerManaged = 1;
      }
    }
    else
    {
      this->m_PowerManaged = 0;
    }
    if ( BYTE5(this->m_DeviceBase[1].m_Globals) )
    {
      this->m_PowerManaged = 0;
      m_PowerManaged = 0;
    }
    else
    {
      m_PowerManaged = this->m_PowerManaged;
    }
    if ( m_PowerManaged )
      v23 = 2 - (InitialPowerStateOn != 0);
    else
      v23 = FxIoQueuePowerOn;
    this->m_PowerState = v23;
    this->m_AllowZeroLengthRequests = pConfig->AllowZeroLengthRequests;
    if ( m_Globals->FxVerboseOn )
    {
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v24 = 0LL;
      WPP_IFR_SF_qqqqq(
        m_Globals,
        NumberOfPresentedRequests,
        0xDu,
        0x13u,
        WPP_FxIoQueue_cpp_Traceguids,
        pConfig->EvtIoDefault,
        pConfig->EvtIoRead,
        pConfig->EvtIoWrite,
        pConfig->EvtIoDeviceControl,
        v24);
    }
    this->m_IoDefault.Method = pConfig->EvtIoDefault;
    this->m_IoStop.Method = pConfig->EvtIoStop;
    this->m_IoResume.Method = pConfig->EvtIoResume;
    this->m_IoRead.Method = pConfig->EvtIoRead;
    this->m_IoWrite.Method = pConfig->EvtIoWrite;
    this->m_IoDeviceControl.Method = pConfig->EvtIoDeviceControl;
    this->m_IoInternalDeviceControl.Method = pConfig->EvtIoInternalDeviceControl;
    this->m_IoCanceledOnQueue.Method = pConfig->EvtIoCanceledOnQueue;
    FxIoQueue::SetState(this, FxIoQueueSetDispatchRequests|0x1);
    result = 0LL;
    this->m_Configured = 1;
  }
  return result;
}
