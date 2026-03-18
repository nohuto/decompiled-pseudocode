/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0012E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C0053DC4 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp)
{
  FxDevice *v5; // rbx
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrpPreprocessInfo *v8; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  void *m_PkgPnp; // rcx
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdx
  _LIST_ENTRY *Flink; // rcx
  _IO_STACK_LOCATION *v19; // rax
  __int64 v20; // r11
  FxIrpPreprocessInfo *v21; // r10
  unsigned int NumMinorFunctions; // r8d
  int v23; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *PPObject; // [rsp+58h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Device & 1) != 0 )
  {
    v6 = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - v6);
  }
  if ( v5->m_Type == 4098 )
  {
    PPObject = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, &PPObject, (void *)Device, 0x1002u, v6);
    v5 = (FxDevice *)PPObject;
  }
  m_Globals = v5->m_Globals;
  if ( !Irp )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, Device, 0xBu) || m_Globals->FxVerifyDownlevel) )
  {
    p_m_CxDeviceInfoListHead = &v5->m_CxDeviceInfoListHead;
    Flink = v5->m_CxDeviceInfoListHead.Flink;
    if ( Flink != &v5->m_CxDeviceInfoListHead )
    {
      if ( v5->m_PreprocessInfoListHead.Flink != &v5->m_PreprocessInfoListHead )
      {
        if ( Flink == p_m_CxDeviceInfoListHead )
          goto LABEL_8;
        while ( Flink[1].Flink != *(_LIST_ENTRY **)&DriverGlobals[-7].DriverName[16] )
        {
          Flink = Flink->Flink;
          if ( Flink == p_m_CxDeviceInfoListHead )
            goto LABEL_8;
        }
      }
      WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxDeviceApiKm_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_Globals);
      v5 = (FxDevice *)PPObject;
    }
  }
LABEL_8:
  v8 = (FxIrpPreprocessInfo *)v5->m_PreprocessInfoListHead.Flink->Flink;
  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( (CurrentStackLocation->MajorFunction == 22
     || MajorFunction == 23
     || MajorFunction == 27 && CurrentStackLocation->MinorFunction != 2)
    && (v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v5->m_DeviceObject.m_DeviceObject[1], Irp, a5, 1u, 0x20u),
        v12 = v11,
        v11 < 0) )
  {
    Irp->IoStatus.Status = v11;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
  }
  else if ( v8 == (FxIrpPreprocessInfo *)&v5->m_PreprocessInfoListHead )
  {
LABEL_11:
    v13 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    if ( v13 == 22 || v13 == 27 )
    {
      m_PkgPnp = v5->m_PkgPnp;
      if ( !m_PkgPnp )
LABEL_22:
        m_PkgPnp = v5->m_PkgDefault;
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          m_PkgPnp = v5->m_PkgGeneral;
          break;
        case 3u:
        case 4u:
        case 0xEu:
        case 0xFu:
          m_PkgPnp = v5->m_PkgIo;
          break;
        case 0x17u:
          m_PkgPnp = v5->m_PkgWmi;
          break;
        default:
          goto LABEL_22;
      }
    }
    return (unsigned int)(*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgPnp + 64LL))(m_PkgPnp, Irp);
  }
  else
  {
    v19 = Irp->Tail.Overlay.CurrentStackLocation;
    v20 = v19->MajorFunction;
    while ( 1 )
    {
      v21 = v8;
      v8 = (FxIrpPreprocessInfo *)v8->ListEntry.Flink;
      if ( v21->Dispatch[v20].EvtDevicePreprocess )
        break;
LABEL_42:
      if ( v8 == (FxIrpPreprocessInfo *)&v5->m_PreprocessInfoListHead )
        goto LABEL_11;
    }
    NumMinorFunctions = v21->Dispatch[v20].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v23 = 0;
      while ( v21->Dispatch[v20].MinorFunctions[v23] != v19->MinorFunction )
      {
        if ( ++v23 >= NumMinorFunctions )
          goto LABEL_42;
      }
    }
    return (unsigned int)PreprocessIrp(v5, Irp, v21, v8);
  }
  return v12;
}
