/*
 * XREFs of UsbhWaitConnect @ 0x1C0018760
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0002AEC (UsbhAcquirePdoStateLock.c)
 *     UsbhRequestPortSuspend @ 0x1C000C038 (UsbhRequestPortSuspend.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0053C6C (WPP_RECORDER_SF_DDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C0056D28 (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C0056FD0 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(PDEVICE_OBJECT a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v9; // rdi
  void *DeviceExtension; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rax
  KSPIN_LOCK *v18; // r15
  KIRQL v19; // al
  __int64 v20; // r9
  KIRQL v21; // r12
  int v22; // edx
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  KIRQL v29; // al
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // ebx
  __int64 v35; // r9
  __int64 (__fastcall *v36)(); // rax
  __int64 v38; // rdx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // rbp
  int v47; // r9d
  __int64 v48; // rax

  v5 = *(_DWORD *)(a4 + 400);
  v9 = (__int64)a1;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        a1 = (PDEVICE_OBJECT)(*((_QWORD *)DeviceExtension + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221)));
        *(_DWORD *)&a1->Type = 1313754947;
        a1->AttachedDevice = (_DEVICE_OBJECT *)a2;
        a1->DriverObject = 0LL;
        a1->NextDevice = (_DEVICE_OBJECT *)a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
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
  }
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 64);
        if ( v11 )
        {
          a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v11 + 888)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884)));
          *(_DWORD *)&a1->Type = 1884180291;
          a1->NextDevice = (_DEVICE_OBJECT *)a3;
          a1->DriverObject = 0LL;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a1 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
          *(_WORD *)(a4 + 4));
    }
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 64);
        if ( v12 )
        {
          a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v12 + 888)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884)));
          *(_DWORD *)&a1->Type = 1313175651;
          a1->DriverObject = 0LL;
          a1->NextDevice = (_DEVICE_OBJECT *)a4;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v46 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock((__int64)a1, v46, 19);
      if ( PdoExt(a5)[281] == 2 )
      {
        UsbhBusUnlatchPdo(v9, a5, a4, v47, v46 + 132);
        UsbhDeletePdo(v9, a5, 2LL);
      }
      else
      {
        v48 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v48 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(v48 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v48 + 132));
      }
    }
    return 4;
  }
  if ( a2 == 0x100000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v14 = *(_QWORD *)(v9 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 1833848643;
          *(_QWORD *)(v15 + 16) = a3;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
      }
    }
    v16 = 0;
    if ( !v9 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v17 = *(_QWORD *)(v9 + 64);
    if ( !v17 )
      UsbhTrapFatal_Dbg(v9, 0LL);
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(v9, *(_QWORD *)(v9 + 64));
    v18 = (KSPIN_LOCK *)(v17 + 4944);
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 4944));
    v20 = *(int *)(a4 + 696);
    v21 = v19;
    v22 = *(_DWORD *)(a4 + 696);
    v23 = *(unsigned __int16 *)(a4 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v24 = *(_QWORD *)(v9 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 1397909875;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = v20;
        *(_QWORD *)(v25 + 24) = v23;
        v22 = *(_DWORD *)(a4 + 696);
      }
    }
    if ( v22 == 3 )
    {
      v26 = *(unsigned __int16 *)(a4 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v27 = *(_QWORD *)(v9 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 2018666867;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = 3LL;
          *(_QWORD *)(v28 + 24) = v26;
        }
      }
      *(_DWORD *)(a4 + 696) = 0;
      KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
      v16 = 1;
    }
    KeReleaseSpinLock(v18, v21);
    if ( v16 )
    {
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
      v30 = *(unsigned __int16 *)(a4 + 4);
      v31 = *(int *)(a4 + 12);
      *(_DWORD *)(a4 + 448) = 1;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = *(_QWORD *)(v9 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 1986359664;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v31;
          *(_QWORD *)(v33 + 24) = v30;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
      *(_DWORD *)(a4 + 448) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v29);
    }
    return v5;
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log(v9, 4, 1129270898, a3, 0LL);
      v36 = off_1C0063938[2 * v44];
    }
    else
    {
      v34 = a2 - 1;
      if ( v34 )
      {
        v39 = v34 - 1;
        if ( v39 )
        {
          v40 = v39 - 2;
          if ( v40 )
          {
            if ( v40 != 4 )
              return v5;
            Log(v9, 4, 1129270902, a3, 0LL);
            return (unsigned int)UsbhHandleOvercurrent(v9, a5);
          }
          Log(v9, 4, 1129270899, a3, 0LL);
          v36 = (__int64 (__fastcall *)())qword_1C00624F8[2 * v41];
        }
        else
        {
          Log(v9, 4, 1129270885, a3, 0LL);
          v36 = off_1C0063B38[2 * v43];
        }
      }
      else
      {
        Log(v9, 4, 1129270883, a3, 0LL);
        v36 = off_1C00622F8[2 * v35];
      }
    }
LABEL_48:
    if ( !v36 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v36)(v9, a4, a5);
  }
  switch ( a2 )
  {
    case 0x20000u:
      Log(v9, 4, 1129270904, a3, 0LL);
      v36 = (__int64 (__fastcall *)())qword_1C00620F8[2 * v42];
      goto LABEL_48;
    case 0x10000u:
      Log(v9, 4, 1129270900, a3, 0LL);
      v36 = off_1C0063D38[2 * v45];
      goto LABEL_48;
    case 0x40000u:
      Log(v9, 4, 1129270867, a3, 0LL);
      return (unsigned int)UsbhRequestPortSuspend(v9, v38, a3, a4, a5);
  }
  return v5;
}
