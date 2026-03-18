/*
 * XREFs of GetPTPShellTarget @ 0x1C0203050
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     GetPTPShellListener @ 0x1C0203024 (GetPTPShellListener.c)
 */

__int64 __fastcall GetPTPShellTarget(__int64 a1)
{
  __int64 PTPShellListener; // rax
  _DWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 result; // rax
  _DWORD v11[34]; // [rsp+20h] [rbp-88h] BYREF

  PTPShellListener = GetPTPShellListener();
  v3 = INPUTDEST_FROM_PWND(v11, PTPShellListener);
  v4 = *((_OWORD *)v3 + 1);
  *(_OWORD *)a1 = *(_OWORD *)v3;
  v5 = *((_OWORD *)v3 + 2);
  *(_OWORD *)(a1 + 16) = v4;
  v6 = *((_OWORD *)v3 + 3);
  *(_OWORD *)(a1 + 32) = v5;
  v7 = *((_OWORD *)v3 + 4);
  *(_OWORD *)(a1 + 48) = v6;
  v8 = *((_OWORD *)v3 + 5);
  *(_OWORD *)(a1 + 64) = v7;
  v9 = *((_OWORD *)v3 + 6);
  *(_OWORD *)(a1 + 80) = v8;
  *(_QWORD *)&v8 = *((_QWORD *)v3 + 14);
  result = a1;
  *(_OWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 112) = v8;
  return result;
}
