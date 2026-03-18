/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C0109F70
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C011C810 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     UnpackTouchpadSettings @ 0x1C0187984 (UnpackTouchpadSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0066A98 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     UpdateTPCurrentActiveState @ 0x1C0067FB0 (UpdateTPCurrentActiveState.c)
 *     WriteSettingValues @ 0x1C01122F0 (WriteSettingValues.c)
 *     ivBroadcastSettingsUpdateToAllContainers @ 0x1C0187C00 (ivBroadcastSettingsUpdateToAllContainers.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  if ( !a1 || *a1 )
    return 0LL;
  v2 = qword_1C0213A18;
  dword_1C020EFAC = DWORD2(gTouchPadParameters);
  dword_1C020F01C = qword_1C0213A18;
  if ( a1[2] <= 4u )
  {
    dword_1C020EFAC = a1[2];
    DWORD2(gTouchPadParameters) = a1[2];
  }
  v3 = a1[4];
  if ( (unsigned int)(v3 - 1) <= 0x13 )
    v2 = v3;
  dword_1C020F01C = v2;
  dword_1C020EFBC = -__CFSHR__(a1[3], 3);
  dword_1C020EFCC = -__CFSHR__(a1[3], 4);
  dword_1C020EFDC = -__CFSHR__(a1[3], 8);
  dword_1C020EFEC = -__CFSHR__(a1[3], 9);
  dword_1C020EFFC = -__CFSHR__(a1[3], 10);
  dword_1C020F00C = -__CFSHR__(a1[3], 11);
  dword_1C020F02C = -(a1[5] & 1);
  dword_1C020F03C = -__CFSHR__(a1[5], 2);
  dword_1C020F04C = -__CFSHR__(a1[5], 3);
  dword_1C020F06C = -__CFSHR__(a1[5], 7);
  v4 = WriteSettingValues(0LL, &off_1C020EFA0, 13LL);
  if ( v4 )
  {
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 8;
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 4;
    v5 = a1[4];
    if ( qword_1C0213A18 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      qword_1C0213A18 = a1[4];
      CDeviceAcceleration::ResetAccelerationCurves(qword_1C020B0C0);
    }
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 0x80;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x400;
    *(&qword_1C0213A18 + 1) ^= (*((_BYTE *)&qword_1C0213A18 + 4) ^ (unsigned __int8)a1[5]) & 1;
    *(&qword_1C0213A18 + 1) ^= (*((_BYTE *)&qword_1C0213A18 + 4) ^ (unsigned __int8)a1[5]) & 2;
    *(&qword_1C0213A18 + 1) ^= (a1[5] ^ *(&qword_1C0213A18 + 1)) & 4;
    *(&qword_1C0213A18 + 1) ^= (a1[5] ^ *(&qword_1C0213A18 + 1)) & 0x40;
  }
  UpdateTPCurrentActiveState();
  if ( v4 )
    ivBroadcastSettingsUpdateToAllContainers();
  return v4;
}
