/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C0105B20
 * Callers:
 *     PrepareGammaRampData @ 0x1C0105940 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C0286D10 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C0105BC4 (GreGetDeviceGammaRampInternal.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, __int64 a2)
{
  unsigned int DeviceGammaRampInternal; // ebx
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  char v9; // [rsp+60h] [rbp+18h] BYREF

  DeviceGammaRampInternal = 0;
  v7 = 0;
  v8 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 32) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v9, (struct XDCOBJ *)&v6);
      DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_QWORD *)(v6 + 48), a2);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v9);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v6);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  return DeviceGammaRampInternal;
}
