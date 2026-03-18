/*
 * XREFs of UsbhSS_PdoWakeWorker @ 0x1C0002B50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0002AEC (UsbhAcquirePdoStateLock.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0002D28 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSetPdoPowerState @ 0x1C0003BB4 (UsbhSetPdoPowerState.c)
 *     GET_FDO_POWER_STATE @ 0x1C00055FC (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  KIRQL v9; // dl
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  unsigned __int8 v13; // al
  int v14; // edx
  int v15; // r8d
  char v16; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  v6 = PdoExt(a3) + 944;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_dd73fc5f9bd6348bc759932d69a6c494_Traceguids,
      *(_WORD *)(v5 + 1428));
  Log(a1, 0x10000, 1936945239, a3, *(unsigned __int16 *)(v5 + 1428));
  UsbhAcquirePdoStateLock(v7, v6, 12);
  v8 = *(_DWORD *)(PdoExt(a3) + 1124) == 3;
  *(_DWORD *)(v6 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v6 + 88) = 1734964085;
  v9 = *(_BYTE *)(v6 + 132);
  if ( v8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    UsbhAcquireFdoPwrLock(a1, v6, 126LL, 1986356311LL);
    v10 = GET_FDO_POWER_STATE(v6);
    v12 = *(_DWORD *)(PdoExt(a3) + 1128);
    if ( v10 == 201 && (v12 != 1 || (*(_DWORD *)(v5 + 1420) & 4) != 0) )
    {
      UsbhSetPdoPowerState(v6, a3, v11, v12, 12);
      UsbhReleaseFdoPwrLock(a1, v6);
      v13 = UsbhCompletePdoWakeIrp(a1, a3, 0LL);
      Log(a1, 0x10000, 1936938801, v13, a3);
      if ( v16
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          v15,
          11,
          (__int64)&WPP_dd73fc5f9bd6348bc759932d69a6c494_Traceguids,
          *(_WORD *)(v5 + 1428),
          a3);
      }
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v6);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
  return UsbhUnlatchPdo(a1, a3, 0LL, 1936945239LL);
}
