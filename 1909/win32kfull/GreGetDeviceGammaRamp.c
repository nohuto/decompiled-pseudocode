/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C0101FA4
 * Callers:
 *     PrepareGammaRampData @ 0x1C0101DA0 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C02AF200 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C0102050 (GreGetDeviceGammaRampInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0125A4C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, __int64 a2)
{
  unsigned int DeviceGammaRampInternal; // ebx
  __int64 v5; // [rsp+28h] [rbp-70h] BYREF
  int v6; // [rsp+30h] [rbp-68h]
  int v7; // [rsp+34h] [rbp-64h]
  _BYTE v8[88]; // [rsp+40h] [rbp-58h] BYREF

  DeviceGammaRampInternal = 0;
  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  if ( v5 )
  {
    if ( !*(_DWORD *)(v5 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v8, (struct XDCOBJ *)&v5);
      DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_QWORD *)(v5 + 48), a2);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v5);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  return DeviceGammaRampInternal;
}
