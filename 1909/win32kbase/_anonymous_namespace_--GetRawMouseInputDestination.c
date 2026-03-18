/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C018F624
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C002FED0 (INPUTDEST_FROM_PWND.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 PtiFromInputDest; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _DWORD v13[34]; // [rsp+20h] [rbp-88h] BYREF

  memset(a1, 0, 0x78uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL, v2);
  v4 = PtiFromInputDest;
  if ( PtiFromInputDest && (unsigned int)HasHidTable(PtiFromInputDest) )
  {
    v5 = INPUTDEST_FROM_PWND(v13, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 416) + 824LL) + 64LL));
    v6 = *((_OWORD *)v5 + 1);
    *a1 = *(_OWORD *)v5;
    v7 = *((_OWORD *)v5 + 2);
    a1[1] = v6;
    v8 = *((_OWORD *)v5 + 3);
    a1[2] = v7;
    v9 = *((_OWORD *)v5 + 4);
    a1[3] = v8;
    v10 = *((_OWORD *)v5 + 5);
    a1[4] = v9;
    v11 = *((_OWORD *)v5 + 6);
    a1[5] = v10;
    *(_QWORD *)&v10 = *((_QWORD *)v5 + 14);
    a1[6] = v11;
    *((_QWORD *)a1 + 14) = v10;
  }
  return a1;
}
