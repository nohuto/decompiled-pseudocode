/*
 * XREFs of UsbhSetFdoPowerState @ 0x1C004A87C
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005110 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0005B50 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006080 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004A190 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 */

_DWORD *__fastcall UsbhSetFdoPowerState(__int64 a1, int a2, int a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // r10
  int v9; // ecx

  result = FdoExt(a1);
  v8 = ((unsigned __int8)result[207] + 1) & 7;
  result[207] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)result + v8 + 284) = a4;
  v9 = result[1043];
  *(_DWORD *)((char *)result + v8 + 292) = a3;
  *(_DWORD *)((char *)result + v8 + 288) = v9;
  *(_DWORD *)((char *)result + v8 + 296) = a2;
  result[1043] = a3;
  return result;
}
