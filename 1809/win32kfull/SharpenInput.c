/*
 * XREFs of SharpenInput @ 0x1C0139130
 * Callers:
 *     ExpandDIB_CY_ExpCX @ 0x1C024C0F0 (ExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SharpenInput(
        __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r11
  unsigned __int8 *v11; // r8
  unsigned __int8 *v12; // r10
  _BYTE *v13; // rdx
  unsigned __int8 *v14; // r9
  unsigned __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  char v19; // cl
  unsigned __int64 result; // rax

  v8 = a2;
  v9 = a6 + a2;
  v10 = a6 + a4;
  if ( (a1 & 0x200) != 0 )
  {
    v8 = a4;
    v9 = a6 + a4;
  }
  else
  {
    *(_WORD *)(a4 - 3) = *(_WORD *)a4;
    *(_BYTE *)(a4 - 1) = *(_BYTE *)(a4 + 2);
    *(_WORD *)v10 = *(_WORD *)(v10 - 3);
    *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 - 1);
    if ( a4 < v10 )
    {
      v11 = (unsigned __int8 *)(a4 + 3);
      v12 = (unsigned __int8 *)(a3 + 2);
      v13 = (_BYTE *)(a2 + 2);
      v14 = (unsigned __int8 *)(a5 + 2);
      v15 = a4 - v8;
      do
      {
        v16 = (12 * (unsigned __int8)v13[v15 - 2] - *(v12 - 2) - *(v14 - 2) - *(v11 - 6) - *v11) >> 3;
        if ( (v16 & 0xFF00) != 0 )
          LOBYTE(v16) = ~HIBYTE(v16);
        *(v13 - 2) = v16;
        v17 = (12 * *(v11 - 2) - *(v12 - 1) - *(v14 - 1) - *(v11 - 5) - v11[1]) >> 3;
        if ( (v17 & 0xFF00) != 0 )
          LOBYTE(v17) = ~HIBYTE(v17);
        *(v13 - 1) = v17;
        v18 = (12 * *(v11 - 1) - *(v11 - 4) - v11[2] - *v12 - *v14) >> 3;
        if ( (v18 & 0xFF00) != 0 )
          LOBYTE(v18) = ~HIBYTE(v18);
        *v13 = v18;
        v13 += 3;
        v11 += 3;
        v14 += 3;
        v12 += 3;
      }
      while ( (unsigned __int64)&v13[v15 - 2] < v10 );
    }
  }
  *(_WORD *)(v8 - 3) = *(_WORD *)v8;
  *(_BYTE *)(v8 - 1) = *(_BYTE *)(v8 + 2);
  *(_WORD *)(v8 - 6) = *(_WORD *)(v8 - 3);
  *(_BYTE *)(v8 - 4) = *(_BYTE *)(v8 - 1);
  v19 = *(_BYTE *)(v8 - 4);
  *(_WORD *)(v8 - 9) = *(_WORD *)(v8 - 6);
  result = v8;
  *(_BYTE *)(v8 - 7) = v19;
  *(_WORD *)(v9 + 3) = *(_WORD *)(v9 - 3);
  *(_BYTE *)(v9 + 5) = *(_BYTE *)(v9 - 1);
  *(_WORD *)v9 = *(_WORD *)(v9 + 3);
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 + 5);
  return result;
}
