/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008EA78
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00875B0 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C00636C0 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C006397C (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0087A68 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // ebx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // rbp
  FxIoResReqList *v8; // rax
  FxIoResReqList *v9; // rsi
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  unsigned __int64 v16; // r15
  int v17; // eax
  unsigned __int8 v18; // r8
  _IO_RESOURCE_REQUIREMENTS_LIST *v19; // rbp
  FxIoResReqList *v20; // rax
  FxIoResReqList *v21; // rsi
  FxDeviceBase *v22; // rcx
  int (__fastcall *v23)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  unsigned __int16 v24; // dx
  unsigned __int64 v25; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *v26; // rax
  unsigned __int64 v27; // r15
  _FX_DRIVER_GLOBALS *v28; // rcx
  WDFIORESREQLIST__ *reqlist; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xAu, WPP_FxPkgFdoKm_cpp_Traceguids);
  if ( this->m_DeviceFilterRemoveResourceRequirements.m_Method )
  {
    _a1 = -1073741670;
    Information = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
    v8 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, Information, a3);
    v9 = v8;
    if ( !v8 )
      goto LABEL_42;
    FxObject::Commit(v8, 0LL, (void **)&reqlist, 0LL, 1u);
    m_DeviceBase = this->m_DeviceBase;
    m_Method = this->m_DeviceFilterRemoveResourceRequirements.m_Method;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( m_Method )
    {
      v13 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v9->m_ObjectSize )
        v13 = 0LL;
      v14 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v14 = 0LL;
      _a1 = m_Method((WDFDEVICE__ *)v14, (WDFIORESREQLIST__ *)v13);
    }
    else
    {
      _a1 = 0;
    }
    if ( _a1 >= 0 && v9->m_Changed )
    {
      WdmList = FxIoResReqList::CreateWdmList(v9);
      v16 = (unsigned __int64)WdmList;
      if ( WdmList )
      {
        if ( Information )
        {
          WdmList->BusNumber = Information->BusNumber;
          ExFreePoolWithTag(Information, 0);
        }
        Irp->m_Irp->IoStatus.Information = v16;
      }
      else
      {
        _a1 = -1073741670;
      }
    }
    v9->DeleteObject(v9);
  }
  else
  {
    _a1 = 0;
  }
  if ( _a1 >= 0 && (_a1 = this->SendIrpSynchronously(this, Irp), _a1 >= 0) || _a1 == -1073741637 )
  {
    v17 = FxPkgPnp::FilterResourceRequirements(
            this,
            (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
    if ( v17 >= 0 )
    {
      if ( this->m_DeviceFilterAddResourceRequirements.m_Method )
      {
        v19 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
        v20 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, v19, v18);
        v21 = v20;
        if ( v20 )
        {
          FxObject::Commit(v20, 0LL, (void **)&reqlist, 0LL, 1u);
          v22 = this->m_DeviceBase;
          v23 = this->m_DeviceFilterAddResourceRequirements.m_Method;
          v24 = v22->m_ObjectSize;
          if ( v23 )
          {
            v25 = (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !v24 )
              v25 = 0LL;
            _a1 = v23((WDFDEVICE__ *)v25, reqlist);
          }
          else
          {
            _a1 = 0;
          }
          if ( _a1 >= 0 && v21->m_Changed )
          {
            v26 = FxIoResReqList::CreateWdmList(v21);
            v27 = (unsigned __int64)v26;
            if ( v26 )
            {
              if ( v19 )
              {
                v26->BusNumber = v19->BusNumber;
                ExFreePoolWithTag(v19, 0);
              }
              Irp->m_Irp->IoStatus.Information = v27;
            }
            else
            {
              _a1 = -1073741670;
            }
          }
          v21->DeleteObject(v21);
        }
        else
        {
          _a1 = -1073741670;
        }
      }
    }
    else
    {
      _a1 = v17;
    }
  }
LABEL_42:
  FxPkgPnp::CompletePnpRequest(this, Irp, _a1);
  v28 = this->m_Globals;
  if ( v28->FxVerboseOn )
    WPP_IFR_SF_d(v28, 5u, 0xCu, 0xBu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
