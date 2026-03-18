/*
 * XREFs of ?vPatCpyRect4_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C0294AD0
 * Callers:
 *     ?vBrushPath4_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C029FE10 (-vBrushPath4_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJ11@Z @ 0x1C0295F40 (-vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJ11@Z.c)
 */

void __fastcall vPatCpyRect4_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int v2; // r8d
  struct _RECTL *v4; // rsi
  int v6; // r14d
  __int64 v7; // r9
  unsigned int *v8; // rdi
  unsigned int *v9; // rbp
  char v10; // r11
  char v11; // r10
  char *v12; // r8
  char *v13; // r9
  char v14; // al
  int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // r11d
  unsigned int v18; // r15d
  int v19; // r13d
  int v20; // r9d
  unsigned int v21; // [rsp+70h] [rbp-58h]
  char v22; // [rsp+78h] [rbp-50h] BYREF
  char v23; // [rsp+7Ah] [rbp-4Eh] BYREF
  __int64 v24; // [rsp+98h] [rbp-30h] BYREF

  v2 = *((_DWORD *)a1 + 8);
  v4 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v6 = *((_DWORD *)a1 + 4);
  v7 = *((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v8 = (unsigned int *)&v22;
    v10 = 4 * v2;
    v9 = (unsigned int *)&v24;
    v11 = 32 - 4 * v2;
    v12 = &v23;
    v13 = (char *)(v7 + 2);
    do
    {
      HIBYTE(v21) = *(v13 - 2);
      BYTE2(v21) = *(v13 - 1);
      v14 = *v13;
      v13 += 4;
      BYTE1(v21) = v14;
      LOBYTE(v21) = *(v13 - 3);
      v15 = (v21 >> v10) | (v21 << v11);
      v12[1] = v15;
      *v12 = BYTE1(v15);
      *(v12 - 1) = BYTE2(v15);
      *(v12 - 2) = HIBYTE(v15);
      v12 += 4;
    }
    while ( v12 - 2 < (char *)&v24 );
  }
  else
  {
    v8 = (unsigned int *)*((_QWORD *)a1 + 1);
    v9 = (unsigned int *)(v7 + 32);
  }
  do
  {
    v16 = dword_1C02EC3B8[v4->left & 7];
    v17 = ~v16;
    v18 = dword_1C02EC3B8[v4->right & 7];
    if ( !v18 )
      v18 = -1;
    v19 = (int)((v4->right >> 1) - (((v4->left + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v19 == -1 )
      goto LABEL_19;
    if ( !v19 )
    {
      if ( v16 && v18 != -1 )
      {
        v20 = 8;
        goto LABEL_20;
      }
LABEL_19:
      v17 &= v18;
      v20 = 9;
      v16 = ~v17;
      goto LABEL_20;
    }
    if ( (unsigned int)(v19 - 1) > 8 )
    {
      if ( v16 )
        v20 = v18 == -1;
      else
        v20 = 3 - (v18 != -1);
    }
    else if ( v16 )
    {
      v20 = 5 - (v18 != -1);
    }
    else
    {
      v20 = 7 - (v18 != -1);
    }
LABEL_20:
    vPatternCopyLoop(
      v4,
      (unsigned int *)(*(_QWORD *)a1 + (((__int64)v4->left >> 1) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + *((_DWORD *)a1 + 4) * v4->top),
      a1,
      v20,
      v18,
      v17,
      ~v18,
      v16,
      v19,
      v6,
      8 * v6,
      v8,
      v9);
    ++v4;
    --a2;
  }
  while ( a2 );
}
