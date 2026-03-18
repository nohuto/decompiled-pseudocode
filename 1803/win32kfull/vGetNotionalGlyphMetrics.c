/*
 * XREFs of vGetNotionalGlyphMetrics @ 0x1C0221CE4
 * Callers:
 *     vFillGLYPHDATA @ 0x1C0221048 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0221838 (vFillGLYPHDATA_ErrRecover.c)
 *     vFillSingularGLYPHDATA @ 0x1C0221A20 (vFillSingularGLYPHDATA.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int16 __fastcall vGetNotionalGlyphMetrics(__int64 a1, unsigned int a2, _WORD *a3)
{
  unsigned int *v3; // r9
  __int64 v6; // r10
  __int64 v7; // rsi
  _WORD *v8; // r11
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int16 v11; // cx
  __int64 v12; // rax
  __int16 v13; // di
  __int16 v14; // r8
  __int16 v15; // r9
  __int16 v16; // r10
  __int16 v17; // ax
  __int16 v18; // r11
  __int16 v19; // r11
  __int16 result; // ax
  bool v21; // zf
  __int16 fixed; // ax
  __int16 v23; // r11
  __int16 v24; // r10

  v3 = *(unsigned int **)(a1 + 192);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  v7 = v6 + v3[8];
  v8 = (_WORD *)(v6 + v3[2]);
  v9 = v6 + v3[10];
  v10 = (unsigned __int16)__ROR2__(*(_WORD *)(v3[6] + v6 + 34), 8);
  v11 = __ROR2__(*(_WORD *)(v3[4] + v6 + 50), 8);
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_6;
    v12 = _byteswap_ulong(*(_DWORD *)(v9 + 4LL * a2));
  }
  else
  {
    v12 = 2 * (unsigned int)(unsigned __int16)__ROR2__(*(_WORD *)(v9 + 2LL * a2), 8);
  }
  v8 = (_WORD *)((char *)v8 + v12);
LABEL_6:
  v13 = -__ROR2__(v8[4], 8);
  v14 = -__ROR2__(v8[2], 8);
  v15 = __ROR2__(v8[1], 8);
  v16 = __ROR2__(v8[3], 8);
  *a3 = v15;
  a3[1] = v16;
  a3[2] = v13;
  a3[3] = v14;
  if ( a2 >= (unsigned int)v10 )
  {
    v17 = *(_WORD *)(v7 + 4LL * (unsigned int)(v10 - 1));
    v18 = *(_WORD *)(v7 + 2 * (a2 - (unsigned int)v10 + 2 * v10));
  }
  else
  {
    v17 = *(_WORD *)(v7 + 4LL * a2);
    v18 = *(_WORD *)(v7 + 4LL * a2 + 2);
  }
  v19 = __ROR2__(v18, 8);
  result = __ROR2__(v17, 8);
  v21 = (*(_DWORD *)(a1 + 40) & 0x4000) == 0;
  a3[4] = v19;
  a3[5] = result;
  a3[1] = v19 + v16 - v15;
  *a3 = v19;
  if ( !v21 )
  {
    fixed = FixMul((unsigned int)v14, 22272LL);
    a3[4] = v23 - fixed;
    result = FixMul((unsigned int)v13, 22272LL);
    a3[1] = v24 - result;
  }
  return result;
}
