/*
 * XREFs of UsbhSshResumePort @ 0x1C0007180
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhSshPropagateResume @ 0x1C000285C (UsbhSshPropagateResume.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00086E4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C001A060 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhRefPdo @ 0x1C001CFB0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00466B0 (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rbp
  struct _DEVICE_OBJECT *v7; // r15
  unsigned __int16 v8; // r14
  __int64 v9; // rcx
  KIRQL v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // eax
  KIRQL v22; // al
  KSPIN_LOCK *v23; // rcx
  int v24; // r10d
  int v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v26 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_38;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = 0LL;
  v8 = *(_WORD *)(a3 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v9 = 1329877100;
    *(_QWORD *)(v9 + 16) = v8;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 24) = 1399612007LL;
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 1413771367;
      *(_QWORD *)(v12 + 16) = v8;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
  }
  if ( v8 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      if ( *(_DWORD *)v13 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v13);
      if ( v8 <= *(unsigned __int8 *)(v13 + 2938) )
      {
        v14 = *(_QWORD *)(v13 + 3056);
        if ( v14 )
        {
          v15 = 2928LL * v8;
          v16 = v15 + v14 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v15 = *(_QWORD *)(v13 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
            *(_DWORD *)v15 = 1044672615;
            *(_QWORD *)(v15 + 16) = v8;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_QWORD *)(v15 + 24) = v16;
          }
          if ( v16 )
          {
            v7 = *(struct _DEVICE_OBJECT **)(v16 + 392);
            if ( v7 )
              v7 = (struct _DEVICE_OBJECT *)UsbhRefPdo(v15, v7, 0LL, 1399612007LL);
          }
        }
      }
      goto LABEL_22;
    }
LABEL_38:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_22:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v10);
  v17 = *(unsigned __int16 *)(a3 + 4);
  if ( v7 )
  {
    Log(a1, 0x10000, 1936937522, v17, (__int64)v7);
    Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(a3 + 4));
    while ( 1 )
    {
      v21 = UsbhFdoCheckUpstreamConnectionState(a1, &v26);
      if ( (v21 & 0xC0000000) == 0xC0000000 )
        break;
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
      v23 = (KSPIN_LOCK *)(v6 + 4944);
      if ( *(_DWORD *)(a3 + 696) != 3 )
      {
        KeReleaseSpinLock(v23, v22);
        v24 = 0;
        goto LABEL_31;
      }
      KeReleaseSpinLock(v23, v22);
      v24 = UsbhWaitEventWithTimeoutEx(a1, a3 + 712, 500LL, 1936937556LL, 0, 0LL);
      if ( v24 != 258 )
        goto LABEL_31;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v21);
LABEL_31:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT, *(unsigned __int16 *)(a3 + 4), v24);
    v3 = UsbhSshPropagateResume(a1, a2, v7);
    Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(a3 + 4), (__int64)v7);
    UsbhUnlatchPdo(a1, v7, 0LL, 1399612007LL);
  }
  else if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 894595955;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v17;
      *(_QWORD *)(v19 + 24) = 0LL;
    }
  }
  return v3;
}
