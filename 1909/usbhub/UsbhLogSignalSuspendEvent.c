/*
 * XREFs of UsbhLogSignalSuspendEvent @ 0x1C000CB78
 * Callers:
 *     Usbh_PCE_wDone_Action @ 0x1C0015EB0 (Usbh_PCE_wDone_Action.c)
 *     UsbhSignalSuspendEvent @ 0x1C0046EC8 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004807C (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhLogSignalSuspendEvent(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // r14

  v3 = a1;
  v4 = 0;
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  Log(v3, 16, 1936282453, 0, *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 744), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v5, v6);
  return v4;
}
