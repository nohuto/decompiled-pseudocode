/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C00687E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0048638 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C006897C (WPP_IFR_SF_qcDqd.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077208 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int8 MajorFunction; // r11
  const void *_a1; // rcx
  int v7; // esi
  FxDevice *m_Device; // rcx
  FxDefaultIrpHandler *m_PkgIo; // rbx
  __int64 v10; // rcx
  FxIoQueue *v11; // r9
  __int64 v12; // r10
  char v13; // r11
  __int16 v14; // ax
  _FX_DRIVER_GLOBALS **v15; // rbx
  const void *globals; // rcx
  bool v17; // zf
  __int16 v18; // ax
  const void *v19; // r10
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  int v22; // [rsp+48h] [rbp-10h]

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !this->m_DispatchQueue && !*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + MajorFunction) )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, _a1, MajorFunction);
    v7 = -1073741436;
$Fail:
    Irp->IoStatus.Status = v7;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return;
  }
  m_Device = this->m_Device;
  m_PkgIo = (FxDefaultIrpHandler *)m_Device->m_PkgIo;
  if ( FxDevice::GetDispatchPackage(m_Device, CurrentStackLocation->MajorFunction) != m_PkgIo )
  {
    v7 = -1073741811;
    v14 = *(_WORD *)(v10 + 10);
    v15 = (_FX_DRIVER_GLOBALS **)(v12 + 16);
    globals = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v17 = v14 == 0;
    v18 = *(_WORD *)(v12 + 10);
    if ( v17 )
      globals = 0LL;
    v19 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v18 )
      v19 = 0LL;
    WPP_IFR_SF_qcDqd(
      *v15,
      CurrentStackLocation->MinorFunction,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      v19,
      v13,
      CurrentStackLocation->MinorFunction,
      globals,
      v22);
    FxVerifierDbgBreakPoint(*v15);
    goto $Fail;
  }
  m_CxDeviceInfo = v11->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = (FxIoInCallerContext *)&m_PkgIo[3].m_ChildListHead;
  FxPkgIo::DispatchStep2((FxPkgIo *)m_PkgIo, Irp, p_IoInCallerContextCallback, v11);
}
