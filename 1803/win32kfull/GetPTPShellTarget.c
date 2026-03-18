/*
 * XREFs of GetPTPShellTarget @ 0x1C01A14D0
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     GetPTPShellListener @ 0x1C01A14A4 (GetPTPShellListener.c)
 */

_OWORD *__fastcall GetPTPShellTarget(_OWORD *a1)
{
  __int64 PTPShellListener; // rax
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD *result; // rax
  _DWORD v14[46]; // [rsp+20h] [rbp-B8h] BYREF

  PTPShellListener = GetPTPShellListener();
  v3 = INPUTDEST_FROM_PWND(v14, PTPShellListener);
  v4 = v3[1];
  *a1 = *v3;
  v5 = v3[2];
  a1[1] = v4;
  v6 = v3[3];
  a1[2] = v5;
  v7 = v3[4];
  a1[3] = v6;
  v8 = v3[5];
  a1[4] = v7;
  v9 = v3[6];
  a1[5] = v8;
  v10 = v3[8];
  a1[6] = v9;
  a1[7] = v3[7];
  v11 = v3[9];
  a1[8] = v10;
  v12 = v3[10];
  result = a1;
  a1[9] = v11;
  a1[10] = v12;
  return result;
}
