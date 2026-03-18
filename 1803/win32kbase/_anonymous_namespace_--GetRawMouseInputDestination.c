/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01348E4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0061D64 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 PtiFromInputDest; // rax
  __int64 v3; // rdi
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _DWORD v15[46]; // [rsp+20h] [rbp-B8h] BYREF

  memset(a1, 0, 0xB0uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
  v3 = PtiFromInputDest;
  if ( PtiFromInputDest && (unsigned int)HasHidTable(PtiFromInputDest) )
  {
    v4 = INPUTDEST_FROM_PWND(v15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 416) + 824LL) + 64LL));
    v5 = v4[1];
    *a1 = *v4;
    v6 = v4[2];
    a1[1] = v5;
    v7 = v4[3];
    a1[2] = v6;
    v8 = v4[4];
    a1[3] = v7;
    v9 = v4[5];
    a1[4] = v8;
    v10 = v4[6];
    a1[5] = v9;
    v11 = v4[8];
    a1[6] = v10;
    a1[7] = v4[7];
    v12 = v4[9];
    a1[8] = v11;
    v13 = v4[10];
    a1[9] = v12;
    a1[10] = v13;
  }
  return a1;
}
