/*
 * XREFs of UsbhHubIsr @ 0x1C001A670
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0001DE8 (UsbhSignalResumeEvent.c)
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001C7E4 (UsbhQueueWorkItemWithRetry.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 *     UsbhSignalSuspendEvent @ 0x1C00456A0 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  signed __int32 v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // r8
  KIRQL v18; // al
  _DWORD *v19; // rcx
  KIRQL v20; // r10
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int8 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rcx
  PVOID PoolWithTag; // rax
  __int64 v38; // rdx
  void *v39; // rdi
  __int64 v40; // rax
  __int64 (__fastcall *v41)(_QWORD *, _QWORD); // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  void (__fastcall *v49)(_QWORD *, __int64, void *, _QWORD, void *, int); // rax
  int v50; // ecx
  struct _KEVENT *v51; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rdx
  KSPIN_LOCK *v60; // rdi
  KIRQL v61; // al
  unsigned int v62; // r9d
  _DWORD *v63; // rax
  int v64; // [rsp+28h] [rbp-70h]
  int v65; // [rsp+48h] [rbp-50h]
  int v66; // [rsp+50h] [rbp-48h]

  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
    goto LABEL_142;
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
  v66 = Status;
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
    LOBYTE(v65) = 0;
    UsbhException((int)Context, 0, 116, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1094, v65);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v7 + 4) >= 0 && v9 != -1 )
  {
    *(_DWORD *)(v6 + 2656) = 0;
    v16 = 0;
    v17 = Context[8];
    while ( 1 )
    {
      if ( !v17 )
        goto LABEL_142;
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      if ( v16 > *(unsigned __int8 *)(v17 + 2938)
        || ((unsigned __int8)(1 << (v16 & 7)) & *(_BYTE *)(((unsigned __int64)v16 >> 3) + *(_QWORD *)(v6 + 2680))) != 0 )
      {
        break;
      }
      ++v16;
    }
    if ( v16 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
    {
      Log((__int64)Context, 4, 1113870435, v16, 0LL);
      LOBYTE(v65) = 0;
      UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, v65);
      v16 = 0;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        v16);
    v18 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v19 = (_DWORD *)Context[8];
    v20 = v18;
    if ( !v19 )
      goto LABEL_142;
    if ( *v19 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8]);
    v19[383] = v16;
    v19[384] = 1;
    v21 = v19 + 386;
    v22 = (_QWORD *)qword_1C006E668;
    if ( *(__int64 **)qword_1C006E668 != &qword_1C006E660 )
      __fastfail(3u);
    *v21 = &qword_1C006E660;
    v21[1] = v22;
    *v22 = v21;
    qword_1C006E668 = (__int64)v21;
    v23 = Context[8];
    if ( !v23 )
      goto LABEL_142;
    if ( *(_DWORD *)v23 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8]);
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 2740));
    v24 = *(int *)(v23 + 2740);
    if ( (UsbhLogMask & 4) != 0 )
    {
      v25 = Context[8];
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 726813000;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = Context;
        *(_QWORD *)(v26 + 24) = v24;
      }
    }
    KeReleaseSpinLock(&SpinLock, v20);
    v27 = Context[8];
    if ( !v27 )
      goto LABEL_142;
    if ( *(_DWORD *)v27 != 541218120 )
      UsbhTrapFatal_Dbg(Context, v27);
    v28 = *(_QWORD *)(v6 + 2720);
    v29 = v27 + 1384;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v30 = *(_QWORD *)(v27 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
      *(_DWORD *)v30 = 1129141329;
      *(_QWORD *)(v30 + 8) = 0LL;
      *(_QWORD *)(v30 + 16) = 1230467945LL;
      *(_QWORD *)(v30 + 24) = v29;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        48,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        v16);
    v31 = Context[8];
    if ( !v31 )
      goto LABEL_142;
    if ( *(_DWORD *)v31 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8]);
    v32 = *(_BYTE *)(v31 + 5268);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        v16);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v33 = Context[8];
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 1297568097;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = 1230467945LL;
        *(_QWORD *)(v34 + 24) = v29;
      }
    }
    v35 = Context[8];
    if ( !v35 )
      goto LABEL_142;
    if ( *(_DWORD *)v35 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8]);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 1296783201;
      *(_QWORD *)(v36 + 16) = v16;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 24) = v29;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        v16);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
    v39 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v40 = Context[8];
      if ( !v40 )
        goto LABEL_142;
      if ( *(_DWORD *)v40 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      v41 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(v40 + 4768);
      if ( v41 )
      {
        v42 = v41(Context, v32);
        if ( v42 )
        {
          *((_QWORD *)v39 + 5) = v42;
          *(_DWORD *)v39 = 1230463592;
          *((_QWORD *)v39 + 3) = UsbhHubIsrWorker;
          *((_DWORD *)v39 + 1) = 1230467945;
          *((_DWORD *)v39 + 3) = v16;
          *((_QWORD *)v39 + 4) = v29;
          *((_QWORD *)v39 + 2) = Context;
          ExInterlockedInsertTailList((PLIST_ENTRY)(v35 + 2784), (PLIST_ENTRY)v39 + 3, (PKSPIN_LOCK)(v35 + 2800));
          if ( *((_DWORD *)v39 + 1) != 2001228627 && (UsbhLogMask & 8) != 0 && (v43 = Context[8]) != 0 )
          {
            v44 = *(_QWORD *)(v43 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
            v45 = 0;
            *(_DWORD *)v44 = 726485847;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 16) = 0LL;
            *(_QWORD *)(v44 + 24) = v39;
          }
          else
          {
            v45 = 0;
          }
          _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              47,
              (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
              v16);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v46 = Context[8];
            if ( v46 )
            {
              v47 = *(_QWORD *)(v46 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
              *(_DWORD *)v47 = 726488145;
              *(_QWORD *)(v47 + 8) = 0LL;
              *(_QWORD *)(v47 + 16) = 1230467945LL;
              *(_QWORD *)(v47 + 24) = v39;
            }
          }
          v48 = Context[8];
          v38 = *((_QWORD *)v39 + 5);
          if ( v48 )
          {
            if ( *(_DWORD *)v48 != 541218120 )
              UsbhTrapFatal_Dbg(Context, Context[8]);
            v49 = *(void (__fastcall **)(_QWORD *, __int64, void *, _QWORD, void *, int))(v48 + 4784);
            if ( v49 )
            {
              LOBYTE(v64) = v32;
              v49(Context, v38, &UsbhHubWorker, 0LL, v39, v64);
              v50 = 0;
            }
            else
            {
              v50 = -1073741822;
            }
            goto LABEL_75;
          }
LABEL_142:
          UsbhTrapFatal_Dbg(Context, 0LL);
        }
      }
      ExFreePoolWithTag(v39, 0);
    }
    v50 = -1073741670;
    v45 = 0;
LABEL_75:
    if ( (v50 & 0xC0000000) == 0xC0000000 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v38,
          1,
          49,
          (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
          v16,
          v50);
      Log((__int64)Context, 8, 1364476705, 1230467945LL, v29);
      if ( v28 )
        UsbhEnableTimerObject((__int64)Context, v28, 0, v16, v29, v62);
      v45 = 1;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v38,
        1,
        50,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        v16,
        v45);
    v51 = &Event;
    goto LABEL_79;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v7 + 4) == -1073676288 )
      goto LABEL_83;
    goto LABEL_103;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073741819 )
      goto LABEL_138;
    while ( 1 )
    {
LABEL_83:
      v53 = Context[8];
      if ( !v53 )
        goto LABEL_142;
      if ( *(_DWORD *)v53 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v53);
      if ( v5 > *(unsigned __int8 *)(v53 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v54 = *(_QWORD *)(v53 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
        *(_DWORD *)v54 = 1413771367;
        *(_QWORD *)(v54 + 16) = (unsigned __int16)v5;
        *(_QWORD *)(v54 + 8) = 0LL;
        *(_QWORD *)(v54 + 24) = 0LL;
      }
      if ( (_WORD)v5 )
      {
        v55 = Context[8];
        if ( !v55 )
          goto LABEL_142;
        if ( *(_DWORD *)v55 != 541218120 )
          UsbhTrapFatal_Dbg(Context, v55);
        if ( (unsigned __int16)v5 > *(unsigned __int8 *)(v55 + 2938) )
        {
          v57 = 0LL;
        }
        else
        {
          v56 = *(_QWORD *)(v55 + 3056);
          if ( v56 )
          {
            v57 = 2928LL * (unsigned __int16)v5 + v56 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v58 = *(_QWORD *)(v55 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
              *(_DWORD *)v58 = 1044672615;
              *(_QWORD *)(v58 + 8) = 0LL;
              *(_QWORD *)(v58 + 16) = (unsigned __int16)v5;
              *(_QWORD *)(v58 + 24) = v57;
            }
          }
          else
          {
            v57 = 0LL;
          }
        }
      }
      else
      {
        v57 = 0LL;
      }
      v59 = Context[8];
      if ( !v59 )
        goto LABEL_142;
      if ( *(_DWORD *)v59 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v59);
      v60 = (KSPIN_LOCK *)(v59 + 4944);
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v59 + 4944));
      if ( *(_DWORD *)(v57 + 696) == 2 )
      {
        KeReleaseSpinLock(v60, v61);
        Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v57 + 4));
        UsbhSignalSuspendEvent(Context, v57);
      }
      else if ( *(_DWORD *)(v57 + 696) == 3 )
      {
        KeReleaseSpinLock(v60, v61);
        Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v57 + 4));
        UsbhSignalResumeEvent((int)Context, v57);
      }
      else
      {
        KeReleaseSpinLock(v60, v61);
      }
      ++v5;
    }
    LODWORD(Status) = v66;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
LABEL_103:
    Log((__int64)Context, 4, 1667778867, (int)Status, v9);
LABEL_104:
    v51 = (struct _KEVENT *)(v6 + 2688);
LABEL_79:
    KeSetEvent(v51, 0, 0);
    return 3221225494LL;
  }
  if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
    goto LABEL_104;
LABEL_138:
  if ( v9 == -1 )
    goto LABEL_103;
  if ( ++*(_DWORD *)(v6 + 2656) < 3u )
  {
    *(_DWORD *)(v6 + 2560) |= 0x1000u;
    v63 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v6 + 2728),
      (unsigned int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v63 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 2688), 0, 0);
    LOBYTE(v65) = 0;
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1147, v65);
  }
  return 3221225494LL;
}
