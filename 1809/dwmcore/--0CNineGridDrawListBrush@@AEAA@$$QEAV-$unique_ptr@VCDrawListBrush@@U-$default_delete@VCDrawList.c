/*
 * XREFs of ??0CNineGridDrawListBrush@@AEAA@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_N@Z @ 0x18000E1BC
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridDrawListBrush::CNineGridDrawListBrush(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _DWORD *a4,
        char a5)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = _xmm;
  *(_QWORD *)a1 = &CNineGridDrawListBrush::`vftable';
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 24) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v6 = *a2;
  *a2 = 0LL;
  v7 = (_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 56) = v6;
  *(_DWORD *)(a1 + 64) = *a3;
  *(_DWORD *)(a1 + 68) = a3[1];
  *(_DWORD *)(a1 + 72) = a3[2];
  *(_DWORD *)(a1 + 76) = a3[3];
  LODWORD(v6) = *a4;
  *(_QWORD *)(a1 + 112) = a1 + 280;
  *(_DWORD *)(a1 + 80) = v6;
  *(_DWORD *)(a1 + 84) = a4[1];
  *(_DWORD *)(a1 + 88) = a4[2];
  *(_DWORD *)(a1 + 92) = a4[3];
  *(_QWORD *)(a1 + 96) = a1 + 120;
  *(_QWORD *)(a1 + 104) = a1 + 120;
  v8 = a1 + 304;
  *v7 = v8;
  result = a1;
  v7[1] = v8;
  v7[2] = v7 + 23;
  *(_QWORD *)(a1 + 464) = a1 + 488;
  *(_QWORD *)(a1 + 472) = a1 + 488;
  *(_QWORD *)(a1 + 480) = a1 + 536;
  *(_BYTE *)(a1 + 552) = a5;
  *(_BYTE *)(a1 + 553) = 0;
  return result;
}
