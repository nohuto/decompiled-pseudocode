/*
 * XREFs of Usbh_PIND_Timeout_Action @ 0x1C00428C4
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C004217C (UsbhDispatch_PindicatorEvent.c)
 *     UsbhPindicatorWorker @ 0x1C0042360 (UsbhPindicatorWorker.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhLockPindicator @ 0x1C004227C (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C00423B0 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C00423F4 (UsbhSetPortIndicator.c)
 *     UsbhUnlockPindicator @ 0x1C004256C (UsbhUnlockPindicator.c)
 */

LONG __fastcall Usbh_PIND_Timeout_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  __int64 v8; // rcx
  int v9; // r8d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 1);
  Log(a1, 0x8000, 1718383413, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 1 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), *(_WORD *)(a2 + 2836));
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v9 = 2;
    goto LABEL_7;
  }
  if ( v7 == 2 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0x300u);
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v9 = 1;
LABEL_7:
    v8 = a3;
    goto LABEL_8;
  }
  v8 = a3;
  if ( (unsigned int)(v7 - 3) <= 1 )
  {
    v9 = v7;
LABEL_8:
    UsbhSetPindicatorState(v8, a2, v9);
    v8 = a3;
  }
  return UsbhUnlockPindicator(v8);
}
