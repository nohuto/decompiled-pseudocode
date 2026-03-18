/*
 * XREFs of InitializeTouchPadSysParams @ 0x1C0128CF0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00AC5D4 (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitializeTouchPadSysParams()
{
  int *v0; // rcx
  __int64 v1; // rdi
  _DWORD *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  __int128 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h]
  const wchar_t *v12; // [rsp+30h] [rbp-29h]
  __int64 v13; // [rsp+38h] [rbp-21h]
  const wchar_t *v14; // [rsp+40h] [rbp-19h]
  __int64 v15; // [rsp+48h] [rbp-11h]
  const wchar_t *v16; // [rsp+50h] [rbp-9h]
  int v17; // [rsp+58h] [rbp-1h]
  int v18; // [rsp+5Ch] [rbp+3h]
  const wchar_t *v19; // [rsp+60h] [rbp+7h]
  int v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]
  _BYTE v22[48]; // [rsp+70h] [rbp+17h] BYREF

  v0 = (int *)&gAapDefaults;
  v1 = 8LL;
  gTouchPadParameters[5] |= 8u;
  gTouchPadParameters[5] |= 1u;
  gTouchPadParameters[2] = 2;
  gTouchPadParameters[3] |= 0x200u;
  gTouchPadParameters[3] |= 0x400u;
  gTouchPadParameters[5] |= 4u;
  gTouchPadParameters[5] |= 2u;
  gTouchPadParameters[5] |= 0x40u;
  gTouchPadParameters[5] &= ~0x80u;
  gTouchPadParameters[4] = 10;
  v2 = (_DWORD *)gAapState;
  do
  {
    v3 = *v0;
    v0 += 4;
    *v2++ = v3;
  }
  while ( v0 != (int *)&gModeMonitor );
  gTPThresholds[0] = 300;
  gTPThresholds[1] = 300;
  gTPThresholds[2] = 300;
  gTPThresholds[3] = 450;
  gTPThresholds[4] = 500;
  gTPThresholds[5] = 20;
  gTPThresholds[6] = 500;
  gTPThresholds[7] = 500;
  gTPThresholds[8] = 500;
  gTPThresholds[9] = 500;
  gTPThresholds[10] = 750;
  gTPThresholds[11] = 25;
  gTPThresholds[12] = 50;
  gTPThresholds[15] = 20;
  gTPThresholds[20] = 215;
  gTPThresholds[21] = 1000;
  gTPThresholds[23] = 500;
  gTPThresholds[73] = 50;
  gTPThresholds[13] = 90000;
  gTPThresholds[14] = 90000;
  gTPThresholds[16] = 1000000;
  gTPThresholds[17] = 250;
  gTPThresholds[18] = 50;
  gTPThresholds[19] = 200;
  gTPThresholds[22] = 100;
  gTPThresholds[24] = 300;
  gTPThresholds[25] = 300;
  gTPThresholds[26] = 300;
  gTPThresholds[27] = 300;
  gTPThresholds[29] = 50;
  gTPThresholds[30] = 50;
  gTPThresholds[31] = 50;
  gTPThresholds[32] = 50;
  gTPThresholds[33] = 200;
  gTPThresholds[68] = 100;
  gTPThresholds[69] = 100;
  gTPThresholds[70] = 100;
  gTPThresholds[34] = 270;
  gTPThresholds[35] = 270;
  gTPThresholds[36] = 270;
  *(_QWORD *)&gTPThresholds[37] = 270LL;
  gTPThresholds[39] = 70;
  gTPThresholds[40] = 120;
  gTPThresholds[48] = 300;
  gTPThresholds[49] = 300;
  gTPThresholds[50] = 300;
  gTPThresholds[51] = 540;
  gTPThresholds[52] = 270;
  gTPThresholds[53] = 810;
  gTPThresholds[54] = 300;
  gTPThresholds[55] = 1000;
  gTPThresholds[56] = 1000;
  gTPThresholds[28] = 1022;
  gTPThresholds[59] = 1000;
  gTPThresholds[60] = 300;
  gTPThresholds[61] = 22500;
  gTPThresholds[62] = 10000;
  gTPThresholds[63] = 33;
  gTPThresholds[65] = 776;
  gTPThresholds[66] = 100;
  gTPThresholds[67] = 200;
  gTPThresholds[47] = 25000000;
  gTPThresholds[71] = 100;
  gTPThresholds[72] = 1000;
  v10 = L"RightClickZoneHeight";
  v12 = L"RightClickZoneWidth";
  v11 = 0LL;
  v13 = 0LL;
  v15 = 0x6400000064LL;
  v14 = L"SuperCurtainTop";
  v16 = L"SuperCurtainLeft";
  v17 = 100;
  v19 = L"SuperCurtainRight";
  v18 = 100;
  v20 = 100;
  v21 = 100;
  memset(v22, 0, sizeof(v22));
  v5 = (__int128 *)&v10;
  do
  {
    GetLocalMachineRegistryDWORDValues(v4, L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", v5++);
    --v1;
  }
  while ( v1 );
  gTPThresholds[57] = HIDWORD(v11);
  gTPThresholds[58] = HIDWORD(v13);
  gTPThresholds[41] = HIDWORD(v15);
  gTPThresholds[42] = v18;
  gTPThresholds[43] = v21;
  gTPThresholds[44] = 250;
  gTPThresholds[45] = 10;
  gTPThresholds[46] = 40;
  gTPThresholds[45] *= 10000 * gTPThresholds[45];
  gTPThresholds[46] *= 10000 * gTPThresholds[46];
  return CPTPProcessor::EnvironmentChanged(*(_QWORD *)gTPThresholds, v6, v7, v8, v10, v11, v12, v13, v14, v15);
}
