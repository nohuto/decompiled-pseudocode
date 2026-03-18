/*
 * XREFs of UsbhReferenceListAdd @ 0x1C000E800
 * Callers:
 *     UsbhResetPort @ 0x1C0011620 (UsbhResetPort.c)
 *     UsbhGetTopOfBusStack @ 0x1C001DE08 (UsbhGetTopOfBusStack.c)
 *     UsbhReferenceListOpen @ 0x1C0029588 (UsbhReferenceListOpen.c)
 *     UsbhTimerPnpStart @ 0x1C002AB90 (UsbhTimerPnpStart.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C0040DA4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSetTimer @ 0x1C004105C (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C0041108 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C00429F0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0042B60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0049BC0 (UsbhResetPortTimerDpc.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // si
  __int64 v7; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( *(_BYTE *)(v7 + 2480) )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 1397515890LL;
      v9 = v7 + 2512;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      *((_DWORD *)PoolWithTag + 10) = a3;
      PoolWithTag[2] = a2;
      PoolWithTag[1] = a1;
      v10 = PoolWithTag + 3;
      v11 = *(_QWORD **)(v9 + 8);
      if ( *v11 != v9 )
        __fastfail(3u);
      *v10 = v9;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(v9 + 8) = v10;
    }
    else
    {
      ++*(_DWORD *)(v7 + 2528);
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 0LL;
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 3221225473LL;
  }
}
