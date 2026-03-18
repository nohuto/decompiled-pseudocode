/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0003D40 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00026CC (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0063140 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, unsigned __int16 *a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v8[112]; // [rsp+50h] [rbp-78h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] && !*(_DWORD *)(v7[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v8, (struct XDCOBJ *)v7);
    v5 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v7[0] + 48LL), a2, a3);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
