/*
 * XREFs of ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C006A7E8
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0069844 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0042574 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::GetTargetDeviceRelations(FxIoTargetRemote *this, unsigned __int8 *Close)
{
  _IRP *v3; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP v6; // rax
  PIRP v7; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v9; // esi
  _DEVICE_OBJECT **Information; // rcx
  const void *_a1; // rcx
  FxAutoIrp irp; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_TargetDevice);
  v6 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = v6;
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v3 = v6;
    irp.m_Irp = v6;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v6->IoStatus.Status = -1073741637;
    v9 = FxIrp::SendIrpSynchronously(&irp, AttachedDeviceReference);
    if ( v9 >= 0 )
    {
      Information = (_DEVICE_OBJECT **)v3->IoStatus.Information;
      this->m_TargetPdo = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    v9 = -1073741670;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1, 0xC000009A);
    v7 = 0LL;
  }
  if ( v9 == -1073741670 )
    *Close = 1;
  else
    v9 = 0;
  ObfDereferenceObject(AttachedDeviceReference);
  if ( v7 )
    IoFreeIrp(v3);
  return (unsigned int)v9;
}
