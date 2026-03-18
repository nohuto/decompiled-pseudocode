/*
 * XREFs of ?vFillGRectDIB8@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C01229A8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB8(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rbx
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // r13
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // rbp
  int v7; // r15d
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r10d
  unsigned int v22; // r11d
  __int64 v23; // rbp
  _BYTE *v24; // rbx
  __int64 v25; // rsi
  char v26; // r8
  int v27; // r11d
  unsigned __int64 v28; // r8
  int v29; // r9d
  unsigned __int64 v30; // r8
  unsigned __int8 *v31; // [rsp+20h] [rbp-C8h]
  int v32; // [rsp+28h] [rbp-C0h]
  int v33; // [rsp+2Ch] [rbp-BCh]
  __int64 v34; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v35; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+40h] [rbp-A8h]
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-90h]
  __int64 v40; // [rsp+60h] [rbp-88h]
  __int64 v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  __int64 v43; // [rsp+78h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+90h] [rbp-58h]
  int v45; // [rsp+F0h] [rbp+8h]
  int v47; // [rsp+100h] [rbp+18h]
  int v48; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = (unsigned __int8 *)&gDitherMatrix16x16Default;
  v4 = DefaultSaturationTable;
  v5 = (unsigned __int8 *)&HalftoneSaturationTable;
  v33 = *((_DWORD *)a1 + 22);
  v6 = (unsigned __int8 *)&gDitherMatrix16x16Halftone;
  v31 = (unsigned __int8 *)&gDitherMatrix16x16Default;
  v7 = *((_DWORD *)a2 + 9);
  v8 = *((_QWORD *)a2 + 20);
  v47 = v7 + *((_DWORD *)a2 + 11);
  v45 = v7;
  v34 = *((_QWORD *)a1 + 10) + v33 * v7;
  v38 = *((_QWORD *)a2 + 14);
  v39 = *((_QWORD *)a2 + 15);
  v40 = *((_QWORD *)a2 + 16);
  v41 = *((_QWORD *)a2 + 10);
  v42 = *((_QWORD *)a2 + 11);
  v43 = *((_QWORD *)a2 + 12);
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 56) + 24LL) & 0x100000) == 0 )
  {
    v5 = DefaultSaturationTable;
    v6 = (unsigned __int8 *)&gDitherMatrix16x16Default;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v9 = *(_DWORD *)(v8 + 76);
    if ( (v9 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(v8 + 56);
      if ( (struct PALETTE *)v10 == ppalDefault )
      {
        v11 = &unk_1C0321DD4;
      }
      else
      {
        v31 = v6;
        v3 = v6;
        v4 = v5;
        if ( (v9 & 0x1000) != 0 )
          v12 = *(_QWORD *)(v10 + 80);
        else
          v12 = *(_QWORD *)(v10 + 72);
        v11 = (_BYTE *)(v12 + 4);
      }
    }
    else
    {
      v11 = vTranslateIdentity;
      v31 = v6;
      v3 = v6;
      v4 = v5;
    }
    v13 = *((int *)v2 + 45);
    v14 = *((_QWORD *)v2 + 6);
    v15 = *((_QWORD *)v2 + 7);
    v16 = *((_QWORD *)v2 + 8);
    v35 = v14;
    v36 = v15;
    v37 = v16;
    if ( (_DWORD)v13 )
    {
      v14 += v41 * v13;
      v15 += v42 * v13;
      v35 = v14;
      v36 = v15;
      v16 += v43 * v13;
      v37 = v16;
    }
    v32 = *((_DWORD *)v2 + 36);
    v48 = *((_DWORD *)v2 + 37);
    while ( v7 < v47 )
    {
      v17 = *((int *)v2 + 44);
      v18 = v14;
      v19 = v15;
      v20 = v16;
      if ( (_DWORD)v17 )
      {
        v18 = v14 + v38 * v17;
        v19 = v15 + v39 * v17;
        v20 = v16 + v40 * v17;
      }
      v21 = *((_DWORD *)v2 + 8);
      v22 = *((_DWORD *)v2 + 10);
      if ( v21 < (int)(v22 + v21) )
      {
        v23 = v22;
        v24 = (_BYTE *)(v34 + *((int *)v2 + 8));
        v25 = v21 + v32;
        do
        {
          v26 = v25++;
          v27 = v3[16 * (((_BYTE)v7 + (_BYTE)v48) & 0xF) + (v26 & 0xF)];
          v28 = HIWORD(v18);
          v18 += v38;
          v29 = (unsigned __int8)v28;
          v30 = HIWORD(v19);
          v19 += v39;
          BYTE6(v30) = BYTE6(v20);
          v20 += v40;
          *v24++ = v11[Xlate555[((unsigned __int64)v4[v27 + BYTE6(v30)] >> 3) | (4
                                                                               * (v4[v27 + (unsigned __int8)v30] & 0xF8 | (32 * (v4[v27 + v29] & 0xF8u))))]];
          --v23;
        }
        while ( v23 );
        v2 = a2;
        v14 = v35;
        v15 = v36;
        v16 = v37;
        v7 = v45;
        v3 = v31;
      }
      v14 += v41;
      v15 += v42;
      v16 += v43;
      v34 += v33;
      ++v7;
      v35 = v14;
      v45 = v7;
      v36 = v15;
      v37 = v16;
    }
  }
}
