/*
 * XREFs of UsbhSetPdo_AllowIo @ 0x1C001FDB0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0020454 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 *     UsbhResetNotifyCompletion @ 0x1C004CC9C (UsbhResetNotifyCompletion.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_AllowIo(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v3; // rdi
  _DWORD *v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // al
  _DWORD *v7; // rax

  v3 = (KSPIN_LOCK *)PdoExt(a2);
  v4 = PdoExt(a2) + 236;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v4[34] = 1;
  *((_BYTE *)v4 + 132) = v5;
  v4[22] = 2018460752;
  v4[23] = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v4;
  *((_QWORD *)v4 + 3) = KeGetCurrentThread();
  if ( PdoExt(a2)[281] == 3 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(v3 + 152);
    *((_DWORD *)v3 + 196) = 1;
    KeReleaseSpinLock(v3 + 152, v6);
  }
  v7 = PdoExt(a2);
  v7[270] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v7[258] = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v7 + 1076));
}
