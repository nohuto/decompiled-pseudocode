/*
 * XREFs of ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007BB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003E3AC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  int _a3; // edi
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rbp
  int updated; // eax
  FxDeviceBase *v10; // rcx
  __int64 *p_m_DeviceObject; // rdx
  unsigned __int16 v12; // ax
  const void *_a1; // rcx
  unsigned __int16 v14; // ax
  const void *v15; // rcx
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *v17; // rax
  unsigned int v18; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v20; // rdx
  MxEvent *event; // [rsp+60h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEject.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    _a3 = m_Method((WDFDEVICE__ *)v5);
  }
  else
  {
    _a3 = 0;
  }
  if ( _a3 < 0 )
  {
    v18 = 258;
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPdo_cpp_Traceguids, _a3);
    if ( _a3 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxPkgPdo_cpp_Traceguids);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
          || v20->FxVerifyDownlevel )
        {
          FxVerifierDbgBreakPoint(v20);
        }
      }
    }
  }
  else
  {
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    updated = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    v10 = this->m_DeviceBase;
    _a3 = updated;
    p_m_DeviceObject = (__int64 *)&v10->m_DeviceObject;
    if ( updated < 0 )
    {
      v14 = v10->m_ObjectSize;
      v15 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14 )
        v15 = 0LL;
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xFu, WPP_FxPkgPdo_cpp_Traceguids, v15, *p_m_DeviceObject, _a3);
    }
    else
    {
      v12 = v10->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v12 )
        _a1 = 0LL;
      WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPdo_cpp_Traceguids, _a1, (const void *)*p_m_DeviceObject);
    }
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    v17 = this->m_Globals;
    if ( v17->FxVerboseOn )
    {
      WPP_IFR_SF_q(v17, 5u, 0xCu, 0x10u, WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v18 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v18;
}
