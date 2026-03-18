/*
 * XREFs of UsbhWaitConnect @ 0x1C0017FC0
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C00029B0 (UsbhAcquirePdoStateLock.c)
 *     UsbhRequestPortSuspend @ 0x1C000BA08 (UsbhRequestPortSuspend.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0051C08 (WPP_RECORDER_SF_DDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C0054B38 (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C0054DC0 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  KSPIN_LOCK *v21; // r15
  KIRQL v22; // al
  __int64 v23; // r9
  KIRQL v24; // r12
  int v25; // edx
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  KIRQL v32; // al
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // r9
  __int64 (__fastcall *v39)(); // rax
  __int64 v41; // rdx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // r9
  __int64 v47; // r9
  __int64 v48; // r9
  __int64 v49; // rbp
  int v50; // r9d
  __int64 v51; // rax

  v5 = *(_DWORD *)(a4 + 400);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1313754947;
        *(_QWORD *)(v11 + 24) = a2;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a4;
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a4 + 4),
      a3,
      10,
      (__int64)&WPP_57b476e21d3e339a1febd811520f5e72_Traceguids,
      *(_WORD *)(a4 + 4),
      a3,
      a2);
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 1884180291;
          *(_QWORD *)(v13 + 16) = a3;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 24) = 0LL;
        }
      }
    }
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
        *(_WORD *)(a4 + 4));
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( a1 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v14 = (PDEVICE_OBJECT)(*(_QWORD *)(v15 + 888)
                               + 32LL
                               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884)));
          *(_DWORD *)&v14->Type = 1313175651;
          v14->DriverObject = 0LL;
          v14->NextDevice = (_DEVICE_OBJECT *)a4;
          v14->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v49 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock((__int64)v14, v49, 19);
      if ( PdoExt(a5)[281] == 2 )
      {
        UsbhBusUnlatchPdo(a1, a5, a4, v50, v49 + 132);
        UsbhDeletePdo(a1, a5, 2LL);
      }
      else
      {
        v51 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v51 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(v51 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v51 + 132));
      }
    }
    return 4;
  }
  if ( a2 == 0x100000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 1833848643;
          *(_QWORD *)(v18 + 16) = a3;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 24) = 0LL;
        }
      }
    }
    v19 = 0;
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v20 = *(_QWORD *)(a1 + 64);
    if ( !v20 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v20 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v21 = (KSPIN_LOCK *)(v20 + 4944);
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4944));
    v23 = *(int *)(a4 + 696);
    v24 = v22;
    v25 = *(_DWORD *)(a4 + 696);
    v26 = *(unsigned __int16 *)(a4 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1397909875;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v23;
        *(_QWORD *)(v28 + 24) = v26;
        v25 = *(_DWORD *)(a4 + 696);
      }
    }
    if ( v25 == 3 )
    {
      v29 = *(unsigned __int16 *)(a4 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v30 = *(_QWORD *)(a1 + 64);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 2018666867;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = 3LL;
          *(_QWORD *)(v31 + 24) = v29;
        }
      }
      *(_DWORD *)(a4 + 696) = 0;
      KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
      v19 = 1;
    }
    KeReleaseSpinLock(v21, v24);
    if ( v19 )
    {
      v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
      v33 = *(unsigned __int16 *)(a4 + 4);
      v34 = *(int *)(a4 + 12);
      *(_DWORD *)(a4 + 448) = 1;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v35 = *(_QWORD *)(a1 + 64);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
          *(_DWORD *)v36 = 1986359664;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 16) = v34;
          *(_QWORD *)(v36 + 24) = v33;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
      *(_DWORD *)(a4 + 448) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v32);
    }
    return v5;
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log(a1, 4, 1129270898, a3, 0LL);
      v39 = off_1C0061938[2 * v47];
    }
    else
    {
      v37 = a2 - 1;
      if ( v37 )
      {
        v42 = v37 - 1;
        if ( v42 )
        {
          v43 = v42 - 2;
          if ( v43 )
          {
            if ( v43 != 4 )
              return v5;
            Log(a1, 4, 1129270902, a3, 0LL);
            return (unsigned int)UsbhHandleOvercurrent(a1, a5);
          }
          Log(a1, 4, 1129270899, a3, 0LL);
          v39 = (__int64 (__fastcall *)())qword_1C00604F8[2 * v44];
        }
        else
        {
          Log(a1, 4, 1129270885, a3, 0LL);
          v39 = off_1C0061B38[2 * v46];
        }
      }
      else
      {
        Log(a1, 4, 1129270883, a3, 0LL);
        v39 = off_1C00602F8[2 * v38];
      }
    }
LABEL_46:
    if ( !v39 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v39)(a1, a4, a5);
  }
  switch ( a2 )
  {
    case 0x20000u:
      Log(a1, 4, 1129270904, a3, 0LL);
      v39 = (__int64 (__fastcall *)())qword_1C00600F8[2 * v45];
      goto LABEL_46;
    case 0x10000u:
      Log(a1, 4, 1129270900, a3, 0LL);
      v39 = off_1C0061D38[2 * v48];
      goto LABEL_46;
    case 0x40000u:
      Log(a1, 4, 1129270867, a3, 0LL);
      return (unsigned int)UsbhRequestPortSuspend(a1, v41, a3, a4, a5);
  }
  return v5;
}
