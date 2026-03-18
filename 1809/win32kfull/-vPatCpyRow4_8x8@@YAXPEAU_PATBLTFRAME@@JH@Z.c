/*
 * XREFs of ?vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02A8E24
 * Callers:
 *     ?vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02B24F0 (-vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z @ 0x1C02AA1EC (-vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z.c)
 */

void __fastcall vPatCpyRow4_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int v3; // r9d
  int *v5; // r14
  __int64 v7; // rcx
  const unsigned int *v9; // rbp
  char v10; // r11
  char *v11; // r8
  char v12; // r10
  char *v13; // r9
  char v14; // al
  int v15; // edx
  __int64 v16; // rdi
  unsigned int v17; // edx
  unsigned int v18; // r10d
  unsigned int v19; // r15d
  int v20; // r11d
  int v21; // r9d
  unsigned int v22; // [rsp+50h] [rbp-68h]
  char v23; // [rsp+58h] [rbp-60h] BYREF
  char v24; // [rsp+5Ah] [rbp-5Eh] BYREF
  __int64 v25; // [rsp+78h] [rbp-40h] BYREF

  v3 = *((_DWORD *)a1 + 8);
  v5 = (int *)*((_QWORD *)a1 + 3);
  v7 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    v9 = (const unsigned int *)&v23;
    v10 = 4 * v3;
    v11 = &v24;
    v12 = 32 - 4 * v3;
    v13 = (char *)(v7 + 2);
    do
    {
      HIBYTE(v22) = *(v13 - 2);
      BYTE2(v22) = *(v13 - 1);
      v14 = *v13;
      v13 += 4;
      BYTE1(v22) = v14;
      LOBYTE(v22) = *(v13 - 3);
      v15 = (v22 >> v10) | (v22 << v12);
      v11[1] = v15;
      *v11 = BYTE1(v15);
      *(v11 - 1) = BYTE2(v15);
      *(v11 - 2) = HIBYTE(v15);
      v11 += 4;
    }
    while ( v11 - 2 < (char *)&v25 );
  }
  else
  {
    v9 = (const unsigned int *)v7;
  }
  v16 = *(_QWORD *)a1 + *((_DWORD *)a1 + 4) * a2;
  do
  {
    v17 = dword_1C02DECC8[*v5 & 7];
    v18 = ~v17;
    v19 = dword_1C02DECC8[v5[1] & 7];
    if ( !v19 )
      v19 = -1;
    v20 = (int)((v5[1] >> 1) - (((*v5 + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v20 == -1 )
      goto LABEL_21;
    if ( !v20 )
    {
      if ( v17 && v19 != -1 )
      {
        v21 = 8;
        goto LABEL_22;
      }
LABEL_21:
      v18 &= v19;
      v21 = 9;
      v17 = ~v18;
      goto LABEL_22;
    }
    if ( v20 + 1 <= 1 || v20 >= 10 )
    {
      if ( v17 )
        v21 = v19 == -1;
      else
        v21 = 3 - (v19 != -1);
    }
    else if ( v17 )
    {
      v21 = 5 - (v19 != -1);
    }
    else
    {
      v21 = 7 - (v19 != -1);
    }
LABEL_22:
    vPatternCopyLoopRow(
      a2,
      (unsigned int *)(v16 + (((__int64)*v5 >> 1) & 0xFFFFFFFFFFFFFFFCuLL)),
      a1,
      v21,
      v19,
      v18,
      ~v19,
      v17,
      v20,
      v9);
    v16 += *((int *)a1 + 4);
    v5 += 2;
    ++a2;
    --a3;
  }
  while ( a3 );
}
