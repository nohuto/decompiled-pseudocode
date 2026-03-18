/*
 * XREFs of UsbhDecHubBusy @ 0x1C000E470
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001090 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhDriverResetPort @ 0x1C0001CB0 (UsbhDriverResetPort.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002340 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhSshExitSx @ 0x1C0004A80 (UsbhSshExitSx.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     UsbhSshEnterSx @ 0x1C0008660 (UsbhSshEnterSx.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhBusResume_Action @ 0x1C0014460 (UsbhBusResume_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     UsbhSshPortsBusy @ 0x1C001A508 (UsbhSshPortsBusy.c)
 *     UsbhSshBusBusy @ 0x1C001E5CC (UsbhSshBusBusy.c)
 *     UsbhSshEnabled @ 0x1C001E868 (UsbhSshEnabled.c)
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C0041AEC (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusIdle @ 0x1C0042A6C (UsbhSshBusIdle.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0047BA0 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C004BF70 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C004CA38 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004D1BC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004D42C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004DE94 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004E15C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004E6E4 (UsbhIoctlResetStuckHub.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C005B71C (UsbhSshDisabled.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  unsigned __int8 Signalling; // r8
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  volatile int Lock; // eax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  v7 = Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1667581000;
      *(_QWORD *)(v9 + 24) = Signalling;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a3;
      v7 = v5[142].Header.Signalling;
    }
  }
  if ( v7 )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v10 = a3[1];
      v11 = a3 + 1;
      if ( *(_QWORD **)(v10 + 8) != a3 + 1 || (v12 = (_QWORD *)a3[2], (_QWORD *)*v12 != v11) )
        __fastfail(3u);
      *v12 = v10;
      *(_QWORD *)(v10 + 8) = v12;
      a3[2] = a3 + 1;
      *v11 = v11;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}
