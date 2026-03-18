/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C00E52E4
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C003CA00 (UpdateTPCurrentActiveState.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C003CF84 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ApiSetGetDefaultPTPConfiguration @ 0x1C0163CF8 (ApiSetGetDefaultPTPConfiguration.c)
 *     ApiSetWritePTPSettingValues @ 0x1C01655D0 (ApiSetWritePTPSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  __int64 DefaultPTPConfiguration; // rax
  _DWORD *v3; // r8
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edi
  struct CEResource *v7; // rdx
  int v8; // ecx

  DefaultPTPConfiguration = ApiSetGetDefaultPTPConfiguration();
  v3 = (_DWORD *)DefaultPTPConfiguration;
  if ( !a1 || *a1 )
    return 0LL;
  *(_DWORD *)(DefaultPTPConfiguration + 12) = dword_1C01CBD20;
  *(_DWORD *)(DefaultPTPConfiguration + 124) = qword_1C01CBD28;
  v4 = a1[2];
  if ( v4 <= 4 )
  {
    v3[3] = v4;
    dword_1C01CBD20 = a1[2];
  }
  v5 = v3[31];
  if ( (unsigned int)(a1[4] - 1) <= 0x13 )
    v5 = a1[4];
  v3[31] = v5;
  v3[7] = -__CFSHR__(a1[3], 3);
  v3[11] = -__CFSHR__(a1[3], 4);
  v3[15] = -__CFSHR__(a1[3], 8);
  v3[19] = -__CFSHR__(a1[3], 9);
  v3[23] = -__CFSHR__(a1[3], 10);
  v3[27] = -__CFSHR__(a1[3], 11);
  v3[35] = -(a1[5] & 1);
  v3[39] = -__CFSHR__(a1[5], 2);
  v3[43] = -__CFSHR__(a1[5], 3);
  v3[47] = -__CFSHR__(a1[5], 7);
  v3[51] = -__CFSHR__(a1[5], 8);
  v6 = ApiSetWritePTPSettingValues(v3);
  if ( v6 )
  {
    v7 = (struct CEResource *)(((unsigned __int8)dword_1C01CBD24 ^ (unsigned __int8)a1[3]) & 8 ^ (unsigned int)dword_1C01CBD24);
    dword_1C01CBD24 = (int)v7;
    dword_1C01CBD24 = (unsigned int)v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)a1[3]) & 4;
    v8 = a1[4];
    if ( (_DWORD)qword_1C01CBD28 != v8 && (unsigned int)(v8 - 1) <= 0x13 )
    {
      LODWORD(qword_1C01CBD28) = a1[4];
      CDeviceAcceleration::ResetAccelerationCurves(qword_1C01C30B0, v7);
    }
    dword_1C01CBD24 ^= (dword_1C01CBD24 ^ a1[3]) & 0x80;
    dword_1C01CBD24 ^= ((unsigned __int16)dword_1C01CBD24 ^ (unsigned __int16)a1[3]) & 0x100;
    dword_1C01CBD24 ^= ((unsigned __int16)dword_1C01CBD24 ^ (unsigned __int16)a1[3]) & 0x200;
    dword_1C01CBD24 ^= ((unsigned __int16)dword_1C01CBD24 ^ (unsigned __int16)a1[3]) & 0x400;
    HIDWORD(qword_1C01CBD28) ^= (BYTE4(qword_1C01CBD28) ^ (unsigned __int8)a1[5]) & 1;
    HIDWORD(qword_1C01CBD28) ^= (BYTE4(qword_1C01CBD28) ^ (unsigned __int8)a1[5]) & 2;
    HIDWORD(qword_1C01CBD28) ^= (a1[5] ^ HIDWORD(qword_1C01CBD28)) & 4;
    HIDWORD(qword_1C01CBD28) ^= (a1[5] ^ HIDWORD(qword_1C01CBD28)) & 0x40;
    HIDWORD(qword_1C01CBD28) ^= (a1[5] ^ HIDWORD(qword_1C01CBD28)) & 0x80;
  }
  UpdateTPCurrentActiveState();
  return v6;
}
