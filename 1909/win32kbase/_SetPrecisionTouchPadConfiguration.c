/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C0107600
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0119EA0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     UnpackTouchpadSettings @ 0x1C0185794 (UnpackTouchpadSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0052228 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     UpdateTPCurrentActiveState @ 0x1C0053740 (UpdateTPCurrentActiveState.c)
 *     WriteSettingValues @ 0x1C010F980 (WriteSettingValues.c)
 *     ivBroadcastSettingsUpdateToAllContainers @ 0x1C0185A10 (ivBroadcastSettingsUpdateToAllContainers.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  if ( !a1 || *a1 )
    return 0LL;
  v2 = qword_1C0210A18;
  dword_1C020BFAC = DWORD2(gTouchPadParameters);
  dword_1C020C01C = qword_1C0210A18;
  if ( a1[2] <= 4u )
  {
    dword_1C020BFAC = a1[2];
    DWORD2(gTouchPadParameters) = a1[2];
  }
  v3 = a1[4];
  if ( (unsigned int)(v3 - 1) <= 0x13 )
    v2 = v3;
  dword_1C020C01C = v2;
  dword_1C020BFBC = -__CFSHR__(a1[3], 3);
  dword_1C020BFCC = -__CFSHR__(a1[3], 4);
  dword_1C020BFDC = -__CFSHR__(a1[3], 8);
  dword_1C020BFEC = -__CFSHR__(a1[3], 9);
  dword_1C020BFFC = -__CFSHR__(a1[3], 10);
  dword_1C020C00C = -__CFSHR__(a1[3], 11);
  dword_1C020C02C = -(a1[5] & 1);
  dword_1C020C03C = -__CFSHR__(a1[5], 2);
  dword_1C020C04C = -__CFSHR__(a1[5], 3);
  dword_1C020C06C = -__CFSHR__(a1[5], 7);
  v4 = WriteSettingValues(0LL, &off_1C020BFA0, 13LL);
  if ( v4 )
  {
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 8;
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 4;
    v5 = a1[4];
    if ( qword_1C0210A18 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      qword_1C0210A18 = a1[4];
      CDeviceAcceleration::ResetAccelerationCurves(qword_1C02080C0);
    }
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 0x80;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x400;
    *(&qword_1C0210A18 + 1) ^= (*((_BYTE *)&qword_1C0210A18 + 4) ^ (unsigned __int8)a1[5]) & 1;
    *(&qword_1C0210A18 + 1) ^= (*((_BYTE *)&qword_1C0210A18 + 4) ^ (unsigned __int8)a1[5]) & 2;
    *(&qword_1C0210A18 + 1) ^= (a1[5] ^ *(&qword_1C0210A18 + 1)) & 4;
    *(&qword_1C0210A18 + 1) ^= (a1[5] ^ *(&qword_1C0210A18 + 1)) & 0x40;
  }
  UpdateTPCurrentActiveState();
  if ( v4 )
    ivBroadcastSettingsUpdateToAllContainers();
  return v4;
}
