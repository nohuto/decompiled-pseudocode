/*
 * XREFs of UsbhSetFdoPowerState @ 0x1C00056A8
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00047C0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005480 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006560 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004BB60 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 */

__int64 __fastcall UsbhSetFdoPowerState(__int64 a1, int a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r10
  int v9; // ecx

  result = FdoExt(a1);
  v8 = ((unsigned __int8)*(_DWORD *)(result + 828) + 1) & 7;
  *(_DWORD *)(result + 828) = v8;
  v8 *= 32LL;
  *(_DWORD *)(v8 + result + 284) = a4;
  v9 = *(_DWORD *)(result + 4172);
  *(_DWORD *)(v8 + result + 292) = a3;
  *(_DWORD *)(v8 + result + 288) = v9;
  *(_DWORD *)(v8 + result + 296) = a2;
  *(_DWORD *)(result + 4172) = a3;
  return result;
}
