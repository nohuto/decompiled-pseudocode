/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C0094D9C
 * Callers:
 *     PrepareGammaRampData @ 0x1C0094B90 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C029A950 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C0094E4C (GreGetDeviceGammaRampInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, __int64 a2)
{
  unsigned int DeviceGammaRampInternal; // ebx
  _QWORD v5[7]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v6[120]; // [rsp+60h] [rbp-78h] BYREF

  DeviceGammaRampInternal = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] && !*(_DWORD *)(v5[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v6);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v6, (struct XDCOBJ *)v5);
    DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_QWORD *)(v5[0] + 48LL), a2);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v6);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return DeviceGammaRampInternal;
}
