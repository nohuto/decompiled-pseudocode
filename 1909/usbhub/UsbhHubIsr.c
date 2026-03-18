/*
 * XREFs of UsbhHubIsr @ 0x1C001B0B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0001EB8 (UsbhSignalResumeEvent.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001BB80 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0046EC8 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  signed __int32 v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int v18; // r9d
  KIRQL v19; // al
  _DWORD *v20; // rcx
  KIRQL v21; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // rdx
  _DWORD *v28; // rax
  struct _KEVENT *v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // rcx
  __int64 v37; // rdx
  KSPIN_LOCK *v38; // rbx
  KIRQL v39; // al
  int v40; // r10d
  _DWORD *v41; // rax
  int v42; // [rsp+48h] [rbp-50h]
  int v43; // [rsp+50h] [rbp-48h]

  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = Context[8];
  if ( !v6 )
    goto LABEL_93;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(Context, v6);
  v7 = *(_QWORD *)(v6 + 2672);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 1145661539;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)(v8 + 24) = Irp;
  }
  v9 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 2712));
  if ( (UsbhLogMask & 4) != 0 )
  {
    v10 = Context[8];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 1717790819;
      *(_QWORD *)(v11 + 24) = v9;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v7;
    }
  }
  Status = Irp->IoStatus.Status;
  v13 = *(int *)(v7 + 4);
  v43 = Status;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v14 = Context[8];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 843671651;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = Status;
      *(_QWORD *)(v15 + 24) = v13;
    }
  }
  if ( (int)Status >= 0 && !*(_DWORD *)(v7 + 36) )
  {
    Log((__int64)Context, 4, 1769101906, Status, *(int *)(v7 + 4));
    LOBYTE(v42) = 0;
    UsbhException((int)Context, 0, 116, 0, v40, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1094, v42);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v7 + 4) >= 0 && v9 != -1 )
  {
    *(_DWORD *)(v6 + 2656) = 0;
    v16 = 0;
    v17 = Context[8];
    while ( 1 )
    {
      if ( !v17 )
        goto LABEL_93;
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      v18 = *(unsigned __int8 *)(v17 + 2938);
      if ( v16 > v18
        || ((unsigned __int8)(1 << (v16 & 7)) & *(_BYTE *)(((unsigned __int64)v16 >> 3) + *(_QWORD *)(v6 + 2680))) != 0 )
      {
        break;
      }
      ++v16;
    }
    if ( v16 > v18 )
    {
      Log((__int64)Context, 4, 1113870435, v16, 0LL);
      LOBYTE(v42) = 0;
      UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, v42);
      v16 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        v16);
    v19 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v20 = (_DWORD *)Context[8];
    v21 = v19;
    if ( v20 )
    {
      if ( *v20 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      v20[383] = v16;
      v20[384] = 1;
      v22 = v20 + 386;
      v23 = (_QWORD *)qword_1C006F668;
      if ( *(__int64 **)qword_1C006F668 != &qword_1C006F660 )
        __fastfail(3u);
      *v22 = &qword_1C006F660;
      v22[1] = v23;
      *v23 = v22;
      qword_1C006F668 = (__int64)v22;
      v24 = Context[8];
      if ( v24 )
      {
        if ( *(_DWORD *)v24 != 541218120 )
          UsbhTrapFatal_Dbg(Context, Context[8]);
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 2740));
        v25 = *(int *)(v24 + 2740);
        if ( (UsbhLogMask & 4) != 0 )
        {
          v26 = Context[8];
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
            *(_DWORD *)v27 = 726813000;
            *(_QWORD *)(v27 + 8) = 0LL;
            *(_QWORD *)(v27 + 16) = Context;
            *(_QWORD *)(v27 + 24) = v25;
          }
        }
        KeReleaseSpinLock(&SpinLock, v21);
        v28 = (_DWORD *)Context[8];
        if ( v28 )
        {
          if ( *v28 != 541218120 )
            UsbhTrapFatal_Dbg(Context, Context[8]);
          UsbhQueueWorkItemWithRetry(
            (_DWORD)Context,
            *(_QWORD *)(v6 + 2720),
            (unsigned int)UsbhHubIsrWorker,
            0,
            (__int64)(v28 + 346),
            v16,
            1230467945);
          v29 = &Event;
          goto LABEL_43;
        }
      }
    }
LABEL_93:
    UsbhTrapFatal_Dbg(Context, 0LL);
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v7 + 4) == -1073676288 )
      goto LABEL_47;
    goto LABEL_67;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073741819 )
      goto LABEL_89;
    while ( 1 )
    {
LABEL_47:
      v31 = Context[8];
      if ( !v31 )
        goto LABEL_93;
      if ( *(_DWORD *)v31 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v31);
      if ( v5 > *(unsigned __int8 *)(v31 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v32 = *(_QWORD *)(v31 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
        *(_DWORD *)v32 = 1413771367;
        *(_QWORD *)(v32 + 16) = (unsigned __int16)v5;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 24) = 0LL;
      }
      if ( (_WORD)v5 )
      {
        v33 = Context[8];
        if ( !v33 )
          goto LABEL_93;
        if ( *(_DWORD *)v33 != 541218120 )
          UsbhTrapFatal_Dbg(Context, v33);
        if ( (unsigned __int16)v5 > *(unsigned __int8 *)(v33 + 2938) )
        {
          v35 = 0LL;
        }
        else
        {
          v34 = *(_QWORD *)(v33 + 3056);
          if ( v34 )
          {
            v35 = 2928LL * (unsigned __int16)v5 + v34 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v36 = *(_QWORD *)(v33 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
              *(_DWORD *)v36 = 1044672615;
              *(_QWORD *)(v36 + 8) = 0LL;
              *(_QWORD *)(v36 + 16) = (unsigned __int16)v5;
              *(_QWORD *)(v36 + 24) = v35;
            }
          }
          else
          {
            v35 = 0LL;
          }
        }
      }
      else
      {
        v35 = 0LL;
      }
      v37 = Context[8];
      if ( !v37 )
        goto LABEL_93;
      if ( *(_DWORD *)v37 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v37);
      v38 = (KSPIN_LOCK *)(v37 + 4944);
      v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v37 + 4944));
      if ( *(_DWORD *)(v35 + 696) == 2 )
      {
        KeReleaseSpinLock(v38, v39);
        Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v35 + 4));
        UsbhSignalSuspendEvent(Context, v35);
      }
      else if ( *(_DWORD *)(v35 + 696) == 3 )
      {
        KeReleaseSpinLock(v38, v39);
        Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v35 + 4));
        UsbhSignalResumeEvent((int)Context, v35);
      }
      else
      {
        KeReleaseSpinLock(v38, v39);
      }
      ++v5;
    }
    LODWORD(Status) = v43;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
LABEL_67:
    Log((__int64)Context, 4, 1667778867, (int)Status, v9);
LABEL_68:
    v29 = (struct _KEVENT *)(v6 + 2688);
LABEL_43:
    KeSetEvent(v29, 0, 0);
    return 3221225494LL;
  }
  if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
    goto LABEL_68;
LABEL_89:
  if ( v9 == -1 )
    goto LABEL_67;
  if ( ++*(_DWORD *)(v6 + 2656) < 3u )
  {
    *(_DWORD *)(v6 + 2560) |= 0x1000u;
    v41 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v6 + 2728),
      (unsigned int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v41 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 2688), 0, 0);
    LOBYTE(v42) = 0;
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1147, v42);
  }
  return 3221225494LL;
}
