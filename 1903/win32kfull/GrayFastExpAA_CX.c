/*
 * XREFs of GrayFastExpAA_CX @ 0x1C0267720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayFastExpAA_CX(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // r13
  unsigned __int16 v9; // r15
  unsigned __int8 *v10; // rsi
  unsigned __int16 v11; // bp
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  int v14; // ecx
  unsigned __int16 v15; // r10
  unsigned __int16 v16; // bx
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // r11
  int v20; // r11d
  int v21; // r8d
  _WORD *v22; // rdi
  _WORD *v23; // rdi
  _WORD *v24; // rdi
  unsigned int v25; // ecx
  int v26; // r8d
  int v27; // r11d
  _WORD *v28; // rdi
  _WORD *v29; // rdi
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r9d
  _WORD *v33; // rdi
  int v34; // edx
  unsigned __int16 v35; // [rsp+0h] [rbp-38h]
  unsigned __int16 v36; // [rsp+2h] [rbp-36h]
  unsigned __int16 v37; // [rsp+4h] [rbp-34h]
  unsigned __int16 v38; // [rsp+48h] [rbp+10h]

  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a1 + 80);
    v6 = *(unsigned __int16 **)(a1 + 88);
    v9 = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2 - 1)];
    v10 = (unsigned __int8 *)(v5 + a2 + 1);
    v11 = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2)];
    while ( 1 )
    {
      v12 = *v10;
      v13 = v11;
      v14 = *v6;
      v15 = v11;
      v16 = v11;
      v36 = v11;
      v35 = v11;
      ++v6;
      v17 = v9;
      v37 = v9;
      v18 = v9;
      v38 = v9;
      v19 = v9;
      ++v10;
      v9 = v11;
      v11 = GrayIdxWORD[v12];
      if ( v14 == 1 )
        break;
      switch ( v14 )
      {
        case 2:
          v34 = 3 * v15;
          *a3 = (v34 + (unsigned int)v18 + 2) >> 2;
          a3 = (_WORD *)((char *)a3 + a5);
          v31 = ((unsigned int)v11 + v34 + 2) >> 2;
          goto LABEL_16;
        case 3:
          v32 = 2 * v16;
          *a3 = (v19 + v16 + 2 * (v32 + (unsigned int)v19 + 2)) >> 3;
          v33 = (_WORD *)((char *)a3 + a5);
          *v33 = (v11 + v19 + 14 * v16 + 8) >> 4;
          a3 = (_WORD *)((char *)v33 + a5);
          v30 = v11 + v16 + 2 * (v32 + v11 + 2);
LABEL_11:
          v31 = v30 >> 3;
LABEL_16:
          *a3 = v31;
          goto LABEL_17;
        case 4:
          v26 = 4 * v36;
          v27 = 2 * v36;
          *a3 = (v37 + v36 + 2 * (v27 + (unsigned int)v37 + 2)) >> 3;
          v28 = (_WORD *)((char *)a3 + a5);
          *v28 = (v37 + v26 + 8 + v11 + 2 * ((unsigned int)v37 + v26)) >> 4;
          v29 = (_WORD *)((char *)v28 + a5);
          *v29 = (v26 + v11 + 8 + v37 + 2 * (v26 + (unsigned int)v11)) >> 4;
          a3 = (_WORD *)((char *)v29 + a5);
          v30 = v11 + v36 + 2 * (v11 + v27 + 2);
          goto LABEL_11;
        case 5:
          v20 = 19 * v35;
          v21 = 25 * v35;
          *a3 = (v20 + 13 * (unsigned int)v38 + 16) >> 5;
          v22 = (_WORD *)((char *)a3 + a5);
          *v22 = (v11 + v21 + 2 * (v38 + 2 * ((unsigned int)v38 + 4))) >> 5;
          v23 = (_WORD *)((char *)v22 + a5);
          *v23 = (v38 + v11 + 2 * (v38 + v11 + 13 * (unsigned int)v35 + 8)) >> 5;
          v24 = (_WORD *)((char *)v23 + a5);
          *v24 = (v38 + 6 * (unsigned int)v11 + v21 + 16) >> 5;
          a3 = (_WORD *)((char *)v24 + a5);
          v25 = 13 * v11 + v20 + 16;
          goto LABEL_15;
      }
      a3 = (_WORD *)((char *)a3 + (unsigned int)(a5 * (v14 - 1)));
LABEL_17:
      a3 = (_WORD *)((char *)a3 + a5);
      if ( a3 == a4 )
        return;
    }
    v25 = v11 + v17 + 2 * (v13 + 2 * (v11 + v13 + v17 + 4 * (v13 + 1)));
LABEL_15:
    v31 = v25 >> 5;
    goto LABEL_16;
  }
}
