/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x1C00174B0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C0006B28 (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x1C0006C7C (UsbhUnlockSSH.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     USBHUB_TriggerCallBacks @ 0x1C0050F80 (USBHUB_TriggerCallBacks.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C005DCB4 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005DD30 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG_PTR v5; // rsi
  _DWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _DWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rax
  int v16; // edx
  __int64 v17; // rdx
  _DWORD *v18; // rax
  bool v19; // zf
  KIRQL v20; // dl
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edi
  __int64 PortState; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int SecurityQos; // edx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdi
  _QWORD *v39; // rbx
  KIRQL v40; // r15
  _QWORD *v41; // rcx
  _QWORD *v42; // rdx
  _QWORD *v43; // r8
  __int64 v45; // rcx
  int v46; // edx
  int v47; // esi
  int v48; // eax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  if ( !a2 )
    goto LABEL_118;
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    goto LABEL_117;
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    return 3221225485LL;
  }
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (__int64)a3, 0LL);
    return 3221225485LL;
  }
  LODWORD(SecurityContext->SecurityQos) = 0;
  v11 = *(_DWORD **)(v5 + 64);
  if ( !v11 )
    goto LABEL_117;
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(v5, *(_QWORD *)(v5 + 64));
  v12 = (__int64)(v11 + 236);
  if ( !a1 )
    goto LABEL_118;
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    goto LABEL_115;
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v13 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  *(_DWORD *)(v12 + 40) = *(_DWORD *)(v13 + 4172);
  *(_DWORD *)(v12 + 44) = 11;
  *(_DWORD *)(v12 + 32) = 844055622;
  *(_DWORD *)(v12 + 36) = 1953516355;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v12;
  v14 = *(_QWORD *)(v12 + 8);
  if ( !v14 )
    goto LABEL_118;
  v15 = *(_DWORD **)(v14 + 64);
  if ( !v15 )
    UsbhTrapFatal_Dbg(v14, 0LL);
  if ( *v15 != 541218120 )
    UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
  v16 = v15[1043];
  if ( v16 == 213 || v16 == 212 )
  {
    UsbhReleaseFdoPwrLock(a1, v12);
    Log(a1, 8, 1196450936, (__int64)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
LABEL_115:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v17 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v17);
  *(_DWORD *)(v12 + 32) = 1734964085;
  *(_QWORD *)(v17 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 5056), *(_BYTE *)(v17 + 5064));
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 16;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v18 = *(_DWORD **)(v5 + 64);
  if ( !v18 )
LABEL_117:
    UsbhTrapFatal_Dbg(v5, 0LL);
  if ( *v18 != 1329877064 )
    UsbhTrapFatal_Dbg(v5, *(_QWORD *)(v5 + 64));
  v19 = v18[281] == 3;
  *(_DWORD *)(v12 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v12 + 88) = 1734964085;
  v20 = *(_BYTE *)(v12 + 132);
  if ( !v19 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(v5, (ULONG_PTR)a3);
    Log(a1, 8, 1196446584, (__int64)a3, 0LL);
    return 3221225486LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
  v21 = *(_QWORD *)(v12 + 8);
  v22 = v21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids,
      5);
    v22 = *(_QWORD *)(v12 + 8);
  }
  if ( !v22 )
    goto LABEL_118;
  v23 = *(_QWORD *)(v22 + 64);
  if ( !v23 )
    UsbhTrapFatal_Dbg(v22, 0LL);
  if ( *(_DWORD *)v23 != 541218120 )
    UsbhTrapFatal_Dbg(v22, *(_QWORD *)(v22 + 64));
  KeWaitForSingleObject((PVOID)(v23 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v23 + 3192) = v12;
  *(_DWORD *)(v12 + 120) = 2018005843;
  *(_DWORD *)(v12 + 124) = 5;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v24 = *(_DWORD *)(v23 + 3456);
  v25 = 32LL * (v24 & 7);
  if ( *(_DWORD *)(v25 + v23 + 3460) != 5
    || (v26 = *(unsigned int *)(v23 + 3124), *(_DWORD *)(v25 + v23 + 3464) != (_DWORD)v26) )
  {
    v45 = ((_BYTE)v24 + 1) & 7;
    *(_DWORD *)(v23 + 3456) = v45;
    v45 *= 32LL;
    *(_DWORD *)(v45 + v23 + 3460) = 5;
    *(_DWORD *)(v45 + v23 + 3464) = *(_DWORD *)(v23 + 3124);
    v26 = *(unsigned int *)(v23 + 3124);
  }
  if ( (_DWORD)v26 != 1 )
  {
    if ( (_DWORD)v26 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          12,
          (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
      FdoExt(v21);
      v46 = 2;
    }
    else
    {
      if ( (_DWORD)v26 == 3 )
      {
        v31 = Usbh_SSH_HubPendingResumeAfterSuspend(v21, 5LL, v12);
        goto LABEL_44;
      }
      if ( (_DWORD)v26 != 4 )
      {
        if ( (_DWORD)v26 == 5 )
        {
          v31 = Usbh_SSH_HubPendingResume(v21, 5, v12);
        }
        else if ( (_DWORD)v26 == 6 )
        {
          v31 = Usbh_SSH_HubFailedResume(v21, v26, v12);
        }
        else
        {
          v31 = -1073741823;
          UsbhUnlockSSH(v12, v26);
        }
        goto LABEL_44;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          14,
          (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
      v46 = 4;
    }
    UsbhUnlockSSH(v12, v46);
    v31 = -1073741823;
    goto LABEL_44;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  if ( !v21 )
    goto LABEL_118;
  v27 = *(_DWORD **)(v21 + 64);
  if ( !v27 )
    UsbhTrapFatal_Dbg(v21, 0LL);
  if ( *v27 != 541218120 )
    UsbhTrapFatal_Dbg(v21, v27);
  v28 = *(_QWORD *)(v12 + 8);
  if ( !v28 )
LABEL_118:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v29 = *(_QWORD *)(v28 + 64);
  if ( !v29 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), 0LL);
  if ( *(_DWORD *)v29 != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), *(_QWORD *)(v28 + 64));
  v30 = *(unsigned int *)(v29 + 3456);
  *(_DWORD *)(v29 + 3124) = 1;
  *(_DWORD *)(32 * v30 + v29 + 3468) = 1;
  *(_DWORD *)(v12 + 120) = 1734964085;
  *(_QWORD *)(v29 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v29 + 3128), 16, 1, 0);
  v31 = 0;
LABEL_44:
  if ( (v31 & 0xC0000000) == 0xC0000000 )
  {
    LODWORD(SecurityContext->SecurityQos) |= 3u;
    v47 = 0;
    SecurityQos = (unsigned int)SecurityContext->SecurityQos;
  }
  else
  {
    PortState = (int)UsbhQueryPortState(a1);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 861098055;
        *(_QWORD *)(v34 + 16) = 0LL;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 24) = PortState;
      }
    }
    SecurityQos = (unsigned int)SecurityContext->SecurityQos;
    if ( (int)PortState < 0 )
    {
      v47 = -1073741810;
    }
    else
    {
      v47 = -1073741810;
      if ( v7[596] == 2 )
      {
        SecurityQos &= ~1u;
        LODWORD(SecurityContext->SecurityQos) = SecurityQos;
      }
    }
  }
  if ( (UsbhLogMask & 8) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
      *(_DWORD *)v37 = 877875271;
      *(_QWORD *)(v37 + 16) = SecurityQos;
      *(_QWORD *)(v37 + 24) = v47;
      *(_QWORD *)(v37 + 8) = 0LL;
    }
  }
  a3->IoStatus.Status = v47;
  IofCompleteRequest(a3, 0);
  v38 = *(_QWORD *)(a2 + 64);
  if ( !v38 )
  {
    v5 = a2;
    goto LABEL_117;
  }
  if ( *(_DWORD *)v38 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v39 = (_QWORD *)(v38 + 1224);
  v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v38 + 1216));
  v41 = *(_QWORD **)(v38 + 1224);
  if ( v41 == (_QWORD *)(v38 + 1224) || !v41 || v41 == v39 )
  {
LABEL_109:
    v48 = *(_DWORD *)(v38 + 1264);
    if ( !v48 )
    {
      USBHUB_TriggerCallBacks(a2);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
    }
    *(_DWORD *)(v38 + 1264) = v48 - 1;
  }
  else
  {
    while ( 1 )
    {
      v42 = (_QWORD *)*v41;
      if ( (IRP *)v41[2] == a3 )
        break;
      v41 = (_QWORD *)*v41;
      if ( v42 == v39 )
        goto LABEL_109;
    }
    if ( (_QWORD *)v42[1] != v41 || (v43 = (_QWORD *)v41[1], (_QWORD *)*v43 != v41) )
      __fastfail(3u);
    *v43 = v42;
    v42[1] = v43;
    ExFreePoolWithTag(v41 - 1, 0);
  }
  if ( (_QWORD *)*v39 != v39 || *(_DWORD *)(v38 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v38 + 1216), v40);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v38 + 1216), v40);
    KeSetEvent((PRKEVENT)(v38 + 1240), 0, 0);
  }
  return (unsigned int)v47;
}
