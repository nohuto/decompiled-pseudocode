/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C0015D90
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0013DA0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0044344 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0001DE8 (UsbhSignalResumeEvent.c)
 *     UsbhHandleSuspend @ 0x1C000BC64 (UsbhHandleSuspend.c)
 *     UsbhSignalDriverResetEvent @ 0x1C000BFCC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000C848 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhEnumerate1 @ 0x1C000F870 (UsbhEnumerate1.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011500 (UsbhAcquireEnumBusLock.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhWaitConnect @ 0x1C0017FC0 (UsbhWaitConnect.c)
 *     UsbhEnumerate2 @ 0x1C002B118 (UsbhEnumerate2.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C004017C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C00456A0 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     UsbhDropDevice @ 0x1C0054C3C (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C0054DC0 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // r14
  void *DeviceExtension; // r15
  unsigned __int16 v8; // dx
  int v9; // r8d
  __int64 v10; // rcx
  void *v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int16 v16; // bp
  void *v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // r12
  void *v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int16 v26; // r9
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // bp
  void *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  void *v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // r12d
  __int16 v41; // dx
  int v42; // eax
  __int64 v43; // r14
  __int64 v44; // r14
  _QWORD *v45; // rcx
  void (__fastcall *v46)(_QWORD, int *, __int64, __int64); // rax
  __int64 v47; // r12
  int v48; // eax
  int v49; // eax
  void *v50; // rdx
  __int64 v51; // rcx
  __int64 v53; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v55; // r14
  _QWORD *v56; // r14
  _QWORD *v57; // rcx
  __int64 v58; // r14
  KIRQL v59; // r15
  __int64 v60; // r9
  _DWORD *v61; // rbp
  __int64 *v62; // r14
  __int64 *v63; // r8
  void *v64; // rdx
  __int64 v65; // rcx
  __int64 *v66; // rdx
  __int64 **v67; // rcx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // r8d
  __int64 v76; // rdx
  struct _KEVENT *v77; // rcx
  int v78; // eax
  int v79; // eax
  int v80; // [rsp+48h] [rbp-50h]
  int v81[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_163;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v8 = *(_WORD *)(a2 + 4);
  v9 = v8;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *((_QWORD *)DeviceExtension + 111)
        + 32LL
        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
    *(_DWORD *)v10 = 729179504;
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = a2;
    v9 = *(unsigned __int16 *)(a2 + 4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      88,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      0);
    LOWORD(v9) = *(_WORD *)(a2 + 4);
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = a1->DeviceExtension;
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v12 = 1313891184;
      *(_QWORD *)(v12 + 16) = (unsigned __int16)v9;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v13 = a1->DeviceExtension;
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = 1145332592;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = v4;
      }
    }
  }
  v15 = 0LL;
  v16 = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v17 = a1->DeviceExtension;
    if ( v17 )
    {
      v18 = *((_QWORD *)v17 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
      *(_DWORD *)v18 = 1329877100;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 24) = 1884308559LL;
    }
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v20 = a1->DeviceExtension;
    if ( v20 )
    {
      v21 = *((_QWORD *)v20 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
      *(_DWORD *)v21 = 1413771367;
      *(_QWORD *)(v21 + 16) = v16;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 24) = 0LL;
    }
  }
  if ( v16 )
  {
    v22 = (unsigned __int8 *)a1->DeviceExtension;
    if ( v22 )
    {
      if ( *(_DWORD *)v22 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v22);
      if ( v16 <= v22[2938] )
      {
        v23 = *((_QWORD *)v22 + 382);
        if ( v23 )
        {
          v24 = 2928LL * v16 + v23 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v25 = *((_QWORD *)v22 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
            *(_DWORD *)v25 = 1044672615;
            *(_QWORD *)(v25 + 16) = v16;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 24) = v24;
          }
          if ( v24 )
          {
            v15 = *(_QWORD *)(v24 + 392);
            if ( v15 )
            {
              v53 = *(_QWORD *)(v15 + 64);
              if ( !v53 )
                UsbhTrapFatal_Dbg(*(_QWORD *)(v24 + 392), 0LL);
              if ( *(_DWORD *)v53 != 1329877064 )
                UsbhTrapFatal_Dbg(*(_QWORD *)(v24 + 392), *(_QWORD *)(v15 + 64));
              PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
              v55 = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, 0x30uLL);
                *(_DWORD *)v55 = 1668571500;
                v55[4] = v15;
                *((_DWORD *)v55 + 6) = 1884308559;
                v55[5] = 0LL;
                v56 = v55 + 1;
                v57 = *(_QWORD **)(v53 + 1280);
                if ( *v57 != v53 + 1272 )
                  goto LABEL_158;
                *v56 = v53 + 1272;
                v56[1] = v57;
                *v57 = v56;
                *(_QWORD *)(v53 + 1280) = v56;
              }
              else
              {
                ++*(_DWORD *)(v53 + 1288);
              }
              v4 = a3;
            }
          }
        }
      }
      goto LABEL_29;
    }
LABEL_163:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_29:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
  if ( v15 )
    *(_DWORD *)(a2 + 416) = 1;
  v26 = *a4;
  v27 = (v15 != 0) | 0x10;
  if ( (*a4 & 1) == 0 )
    v27 = v15 != 0;
  v28 = v27 | 2;
  if ( (v26 & 4) == 0 )
    v28 = v27;
  if ( (v26 & 8) != 0 )
    v28 |= 4u;
  *(_WORD *)(a2 + 420) = v26;
  v29 = v28 | 8;
  if ( (v26 & 2) == 0 )
    v29 = v28;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v30 = a1->DeviceExtension;
    if ( v30 )
    {
      v31 = *((_QWORD *)v30 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
      *(_DWORD *)v31 = 1414087210;
      *(_QWORD *)(v31 + 16) = v26;
      *(_QWORD *)(v31 + 24) = v29;
      *(_QWORD *)(v31 + 8) = 0LL;
    }
  }
  v32 = *(unsigned __int16 *)(a2 + 4);
  v33 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v34 = a1->DeviceExtension;
    if ( v34 )
    {
      v35 = *((_QWORD *)v34 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v34 + 220) & *((_DWORD *)v34 + 221));
      *(_DWORD *)v35 = 844382762;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = v33;
      *(_QWORD *)(v35 + 24) = v32;
    }
  }
  v36 = *(unsigned int *)(v4 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v37 = a1->DeviceExtension;
    if ( v37 )
    {
      v38 = *((_QWORD *)v37 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
      *(_DWORD *)v38 = 861159978;
      *(_QWORD *)(v38 + 24) = v29;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = v36;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      89,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_WORD *)(a2 + 420));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      90,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_DWORD *)(a2 + 400));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      91,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_DWORD *)(v4 + 8));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      92,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      v29);
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 )
  {
    v73 = *(unsigned int *)(v4 + 8);
    if ( (v73 & 0x80008) == 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          93,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4));
        v73 = *(unsigned int *)(v4 + 8);
      }
      Log((__int64)a1, 512, 1886353240, v29, v73);
      v29 &= ~8u;
      UsbhSignalResumeEvent((int)a1, a2);
      UsbhSignalSuspendEvent(a1, a2);
      LOBYTE(v80) = 0;
      UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 60, v4, 56, 0, 0, usbfile_pchange_c, 5582, v80);
    }
  }
  v39 = *(_DWORD *)(v4 + 8);
  v40 = *(_DWORD *)(v4 + 32);
  v41 = *(_WORD *)(a2 + 420);
  v42 = *(_DWORD *)(a2 + 400);
  v43 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  *(_DWORD *)(a2 + 856) = v43;
  v44 = a2 + 32 * (v43 + 27);
  *(_DWORD *)v44 = v42;
  *(_DWORD *)(v44 + 4) = v39;
  *(_BYTE *)(v44 + 18) = v29;
  *(_WORD *)(v44 + 16) = v41;
  *(_QWORD *)(v44 + 8) = v15;
  *(_BYTE *)(v44 + 19) = 0;
  *(_DWORD *)(v44 + 20) = v40;
  *(_DWORD *)(v44 + 28) = 1;
  v45 = a1->DeviceExtension;
  if ( !v45 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v45 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v46 = (void (__fastcall *)(_QWORD, int *, __int64, __int64))v45[574];
  if ( v46 )
  {
    v46(v45[570], v81, v36, v33);
    LODWORD(v46) = v81[0];
  }
  *(_DWORD *)(v44 + 24) = (_DWORD)v46 - v40;
  if ( !v15 )
    goto LABEL_62;
  v58 = *(_QWORD *)(v15 + 64);
  if ( !v58 )
    UsbhTrapFatal_Dbg(v15, 0LL);
  if ( *(_DWORD *)v58 != 1329877064 )
    UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64));
  if ( *(_BYTE *)(v58 + 2740) && (*(_BYTE *)(a2 + 420) & 1) == 0 )
  {
    v74 = *(unsigned int *)(a3 + 8);
    if ( (v74 & 0x30008) != 0 )
    {
      if ( (v74 & 0x30000) != 0 )
      {
        Log((__int64)a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
        UsbhSignalSyncDeviceResetPdo((__int64)a1, v15, -1073741823);
        UsbhSignalDriverResetEvent((__int64)a1, a2);
        v74 = *(unsigned int *)(a3 + 8);
      }
      Log((__int64)a1, 512, 1650741836, 0LL, v74);
      v75 = *(unsigned __int16 *)(a2 + 4);
      if ( *((_DWORD *)DeviceExtension + 768) == v75 )
      {
        v76 = *(_QWORD *)(a2 + 376);
        if ( *((_QWORD *)DeviceExtension + 385) == v76 )
          UsbhReleaseEnumBusLockEx((__int64)a1, v76, v75);
      }
      LOBYTE(v80) = 1;
      UsbhException((int)a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v80);
    }
    goto LABEL_69;
  }
  if ( (*(_DWORD *)(v58 + 1420) & 0x400000) != 0 )
  {
    KeWaitForSingleObject((PVOID)(v58 + 2944), Executive, 0, 0, 0LL);
    v47 = a3;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 && (*(_DWORD *)(v58 + 1420) & 0x4000000) != 0 )
    {
      Log((__int64)a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v58 + 1420)) & 1, *(unsigned __int16 *)(a2 + 420));
      *(_DWORD *)(v58 + 1420) |= 0x3000000u;
      v77 = (struct _KEVENT *)(v58 + 2920);
      if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
        KeSetEvent(v77, 0, 0);
      else
        KeResetEvent(v77);
      KeSetEvent((PRKEVENT)(v58 + 2944), 0, 0);
      goto LABEL_69;
    }
    KeSetEvent((PRKEVENT)(v58 + 2944), 0, 0);
  }
  else
  {
LABEL_62:
    v47 = a3;
  }
  if ( (*(_DWORD *)(v47 + 8) & 0x20000) != 0 )
  {
    v72 = *(_QWORD *)(v47 + 40);
    if ( v72 != v15 )
    {
      Log((__int64)a1, 512, 1685222994, v72, *(unsigned int *)(v47 + 8));
      UsbhSignalSyncDeviceResetPdo((__int64)a1, *(_QWORD *)(v47 + 40), -1073741810);
      UsbhSignalDriverResetEvent((__int64)a1, a2);
      goto LABEL_69;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      94,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  v48 = *(_DWORD *)(a2 + 400);
  if ( !v48 )
  {
    v49 = UsbhWaitConnect((_DWORD)a1, v15);
    goto LABEL_68;
  }
  v68 = v48 - 1;
  if ( !v68 )
  {
    v49 = UsbhEnumerate1((__int64)a1, *(_QWORD *)(v47 + 8), v29, a2, v15);
    goto LABEL_68;
  }
  v69 = v68 - 1;
  if ( !v69 )
  {
    v49 = UsbhEnumerate2((_DWORD)a1, v15);
    goto LABEL_68;
  }
  v70 = v69 - 1;
  if ( v70 )
  {
    v71 = v70 - 1;
    if ( v71 )
    {
      if ( v71 != 1 )
        goto LABEL_69;
      v49 = UsbhHandleSuspend((__int64)a1, *(_QWORD *)(v47 + 8), v29, a2, v15);
LABEL_68:
      *(_DWORD *)(a2 + 400) = v49;
      goto LABEL_69;
    }
    if ( (*(_DWORD *)(v47 + 8) & 8) != 0 )
    {
      *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent((int)a1, v15);
    }
    else
    {
      *(_DWORD *)(a2 + 400) = 4;
      v78 = *(_DWORD *)(v47 + 8);
      if ( (v78 & 0x20000) != 0 )
      {
        UsbhSignalSyncDeviceResetPdo((__int64)a1, v15, -1073741823);
        UsbhSignalDriverResetEvent((__int64)a1, a2);
        v78 = *(_DWORD *)(v47 + 8);
      }
      if ( (v78 & 0x10000) != 0 )
      {
        UsbhSignalSyncDeviceResetPdo((__int64)a1, v15, -1073741823);
        UsbhSignalDriverResetEvent((__int64)a1, a2);
        v78 = *(_DWORD *)(v47 + 8);
      }
      if ( (v78 & 0x40000) != 0 )
      {
        UsbhSignalSuspendEvent(a1, a2);
        v78 = *(_DWORD *)(v47 + 8);
      }
      if ( (v78 & 0x100000) != 0 )
      {
        UsbhSignalResumeEvent((int)a1, a2);
        if ( v29 == 1 )
        {
          UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
          UsbhDropDevice(a1, a2, v15);
        }
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        96,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids);
    Log((__int64)a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v29);
  }
  else
  {
    if ( (*(_DWORD *)(v47 + 8) & 8) != 0 )
      *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent((int)a1, v15);
    *(_DWORD *)(a2 + 400) = 3;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        95,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids);
    Log((__int64)a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v29);
  }
LABEL_69:
  if ( !*(_DWORD *)(a2 + 416) )
    goto LABEL_70;
  Log((__int64)a1, 1024, 1970032689, v15, a2);
  v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  *(_DWORD *)(a2 + 416) = 0;
  Log((__int64)a1, 1024, 1970032690, v15, a2);
  Log((__int64)a1, 256, 1685218896, v60, 1884308559LL);
  v61 = PdoExt(v15);
  v62 = (__int64 *)(v61 + 318);
  v63 = (__int64 *)*((_QWORD *)v61 + 159);
  if ( v63 == (__int64 *)(v61 + 318) )
  {
LABEL_159:
    v79 = v61[322];
    if ( v79 )
      v61[322] = v79 - 1;
    goto LABEL_98;
  }
  while ( 1 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v64 = a1->DeviceExtension;
      if ( v64 )
      {
        v65 = *((_QWORD *)v64 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v64 + 220) & *((_DWORD *)v64 + 221));
        *(_DWORD *)v65 = 1064591724;
        *(_QWORD *)(v65 + 8) = 0LL;
        *(_QWORD *)(v65 + 16) = v61;
        *(_QWORD *)(v65 + 24) = 1884308559LL;
      }
    }
    if ( *((_DWORD *)v63 + 4) == 1884308559 && !v63[4] )
      break;
    v63 = (__int64 *)*v63;
    if ( v63 == v62 )
      goto LABEL_159;
  }
  v66 = (__int64 *)*v63;
  if ( *(__int64 **)(*v63 + 8) != v63 || (v67 = (__int64 **)v63[1], *v67 != v63) )
LABEL_158:
    __fastfail(3u);
  *v67 = v66;
  v66[1] = (__int64)v67;
  ExFreePoolWithTag(v63 - 1, 0);
LABEL_98:
  if ( (__int64 *)*v62 == v62 && !v61[322] )
    KeSetEvent((PRKEVENT)v61 + 54, 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
LABEL_70:
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v50 = a1->DeviceExtension;
    if ( v50 )
    {
      v51 = *((_QWORD *)v50 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
      *(_DWORD *)v51 = 762733936;
      *(_QWORD *)(v51 + 8) = 0LL;
      *(_QWORD *)(v51 + 16) = a2;
      *(_QWORD *)(v51 + 24) = 0LL;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
