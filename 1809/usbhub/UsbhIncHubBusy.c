/*
 * XREFs of UsbhIncHubBusy @ 0x1C0019500
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001090 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     UsbhSshEnterSx @ 0x1C0008660 (UsbhSshEnterSx.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011500 (UsbhAcquireEnumBusLock.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0019870 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSshPortsBusy @ 0x1C001A508 (UsbhSshPortsBusy.c)
 *     UsbhSshBusBusy @ 0x1C001E5CC (UsbhSshBusBusy.c)
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
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
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C00567A4 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C005B71C (UsbhSshDisabled.c)
 * Callees:
 *     Usbh_SSH_HubPendingSuspend @ 0x1C00064D8 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C000655C (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C000662C (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x1C0006770 (UsbhUnlockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C005B818 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005B884 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rdi
  struct _KEVENT *v10; // rbp
  unsigned __int8 Signalling; // r9
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v16; // rbx
  _LIST_ENTRY *p_WaitListHead; // rdi
  char *v18; // rax
  char **Blink; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx

  if ( !a1 )
    goto LABEL_51;
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    goto LABEL_50;
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  v12 = Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 1668172104;
      *(_QWORD *)(v14 + 24) = Signalling;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a5;
      v12 = v9[142].Header.Signalling;
    }
  }
  if ( v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v16 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      v18 = (char *)(PoolWithTag + 1);
      *(_DWORD *)v16 = 1215918946;
      *(_QWORD *)(v16 + 24) = a3;
      *(_DWORD *)(v16 + 32) = a4;
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v18 = p_WaitListHead;
      *(_QWORD *)(v16 + 16) = Blink;
      *Blink = v18;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v18;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v16 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 != 1 )
      return v16;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        10,
        (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids,
        6);
    v21 = *(_QWORD *)(a2 + 8);
    if ( !v21 )
      goto LABEL_51;
    v22 = *(_QWORD *)(v21 + 64);
    if ( !v22 )
      UsbhTrapFatal_Dbg(v21, 0LL);
    if ( *(_DWORD *)v22 != 541218120 )
      UsbhTrapFatal_Dbg(v21, *(_QWORD *)(v21 + 64));
    KeWaitForSingleObject((PVOID)(v22 + 3128), Executive, 0, 0, 0LL);
    *(_QWORD *)(v22 + 3192) = a2;
    *(_DWORD *)(a2 + 120) = 2018005843;
    *(_DWORD *)(a2 + 124) = 6;
    *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
    v23 = *(_DWORD *)(v22 + 3456);
    v24 = 32LL * (v23 & 7);
    if ( *(_DWORD *)(v24 + v22 + 3460) != 6
      || (v25 = *(unsigned int *)(v22 + 3124), *(_DWORD *)(v24 + v22 + 3464) != (_DWORD)v25) )
    {
      v30 = ((_BYTE)v23 + 1) & 7;
      *(_DWORD *)(v22 + 3456) = v30;
      v30 *= 32LL;
      *(_DWORD *)(v30 + v22 + 3460) = 6;
      *(_DWORD *)(v30 + v22 + 3464) = *(_DWORD *)(v22 + 3124);
      v25 = *(unsigned int *)(v22 + 3124);
    }
    if ( (_DWORD)v25 != 1 )
    {
      switch ( (_DWORD)v25 )
      {
        case 2:
          Usbh_SSH_HubPendingSuspend(a1, 6, a2);
          break;
        case 3:
          Usbh_SSH_HubPendingResumeAfterSuspend(a1, 6LL, a2);
          break;
        case 4:
          Usbh_SSH_HubSuspended(a1, 6, a2);
          break;
        case 5:
          Usbh_SSH_HubPendingResume(a1, 6, a2);
          break;
        case 6:
          Usbh_SSH_HubFailedResume(a1, v25, a2);
          break;
        default:
          UsbhUnlockSSH(a2, v25);
          break;
      }
      return v16;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        11,
        (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
    v26 = *(_QWORD *)(a1 + 64);
    if ( v26 )
    {
      if ( *(_DWORD *)v26 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      *(_BYTE *)(v26 + 3408) = 1;
      v27 = *(_QWORD *)(a2 + 8);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 64);
        if ( !v28 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a2 + 8), 0LL);
        if ( *(_DWORD *)v28 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a2 + 8), *(_QWORD *)(v27 + 64));
        v29 = *(unsigned int *)(v28 + 3456);
        *(_DWORD *)(v28 + 3124) = 1;
        *(_DWORD *)(32 * v29 + v28 + 3468) = 1;
        *(_DWORD *)(a2 + 120) = 1734964085;
        *(_QWORD *)(v28 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v28 + 3128), 16, 1, 0);
        return v16;
      }
LABEL_51:
      UsbhTrapFatal_Dbg(0LL, 0LL);
    }
LABEL_50:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  KeSetEvent(v9 + 139, 0, 0);
  return 0LL;
}
