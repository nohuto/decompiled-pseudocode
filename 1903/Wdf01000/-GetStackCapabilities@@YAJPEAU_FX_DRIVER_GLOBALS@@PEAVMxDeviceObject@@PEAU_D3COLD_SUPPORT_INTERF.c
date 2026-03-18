/*
 * XREFs of ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C000E650
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000E1E0 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C007CDC0 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0085EA0 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 */

__int64 __fastcall GetStackCapabilities(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        MxDeviceObject *DeviceInStack,
        _D3COLD_SUPPORT_INTERFACE *D3ColdInterface,
        _STACK_DEVICE_CAPABILITIES *Capabilities)
{
  PIRP Irp; // rbx
  NTSTATUS _a2; // esi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  unsigned int v11; // r12d
  _IO_STACK_LOCATION *v12; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rsi
  _IO_STACK_LOCATION *v15; // rax
  unsigned int v16; // edx
  _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  char v19; // [rsp+58h] [rbp-30h]
  _DEVICE_WAKE_DEPTH deepestWakeableDstate; // [rsp+98h] [rbp+10h] BYREF

  Irp = 0LL;
  _a2 = -1073741670;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceInStack->m_DeviceObject);
  DeviceInStack->m_DeviceObject = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    if ( Irp )
    {
      memset(Capabilities, 0, sizeof(_STACK_DEVICE_CAPABILITIES));
      *(_DWORD *)&Capabilities->DeviceCaps.Size = 65600;
      v11 = 1;
      *(_QWORD *)&Capabilities->DeviceCaps.Address = -1LL;
      v12 = Irp->Tail.Overlay.CurrentStackLocation - 1;
      Irp->IoStatus.Status = -1073741637;
      memset(v12, 0, sizeof(_IO_STACK_LOCATION));
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v19 = 0;
      CurrentStackLocation[-1].MajorFunction = 27;
      Irp->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 9;
      Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Capabilities;
      m_DeviceObject = DeviceInStack->m_DeviceObject;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      v19 = 1;
      v15[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
      v15[-1].Context = &Event;
      v15[-1].Control = -32;
      _a2 = IofCallDriver(m_DeviceObject, Irp);
      if ( _a2 == 259 )
      {
        KeEnterCriticalRegion();
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        KeLeaveCriticalRegion();
        _a2 = Irp->IoStatus.Status;
      }
      if ( _a2 < 0 )
      {
        WPP_IFR_SF_qL(DriverGlobals, 2u, 0xCu, 0xAu, WPP_supportKM_cpp_Traceguids, DeviceInStack->m_DeviceObject, _a2);
      }
      else
      {
        Capabilities->DeepestWakeableDstate[0] = DeviceWakeDepthMaximum;
        Capabilities->DeepestWakeableDstate[1] = DeviceWakeDepthMaximum;
        Capabilities->DeepestWakeableDstate[2] = DeviceWakeDepthMaximum;
        Capabilities->DeepestWakeableDstate[3] = DeviceWakeDepthMaximum;
        Capabilities->DeepestWakeableDstate[4] = DeviceWakeDepthMaximum;
        Capabilities->DeepestWakeableDstate[5] = DeviceWakeDepthMaximum;
        if ( D3ColdInterface
          && D3ColdInterface->GetIdleWakeInfo
          && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(DriverGlobals, v16, 0xBu) )
        {
          do
          {
            if ( D3ColdInterface->GetIdleWakeInfo(
                   D3ColdInterface->Context,
                   (_SYSTEM_POWER_STATE)v11,
                   &deepestWakeableDstate) >= 0 )
              Capabilities->DeepestWakeableDstate[v11] = deepestWakeableDstate;
            ++v11;
          }
          while ( v11 <= 5 );
        }
        _a2 = 0;
      }
    }
  }
  if ( DeviceInStack->m_DeviceObject )
    ObfDereferenceObject(DeviceInStack->m_DeviceObject);
  if ( Irp )
    IoFreeIrp(Irp);
  return (unsigned int)_a2;
}
