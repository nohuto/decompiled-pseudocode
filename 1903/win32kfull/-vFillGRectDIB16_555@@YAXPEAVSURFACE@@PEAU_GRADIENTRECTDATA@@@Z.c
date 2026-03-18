/*
 * XREFs of ?vFillGRectDIB16_555@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02C8C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_555(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // r11
  int v3; // edx
  __int64 v4; // r13
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  _WORD *v19; // r9
  unsigned __int64 v20; // rbp
  _WORD *v21; // r8
  unsigned __int64 v22; // rbp
  _WORD *v23; // r13
  int v24; // r14d
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  int v27; // r10d
  unsigned __int64 v28; // r8
  __int16 v29; // r9
  unsigned __int64 v30; // r8
  __int16 v31; // r9
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+8h] [rbp-B0h]
  __int64 v35; // [rsp+10h] [rbp-A8h]
  __int64 v36; // [rsp+18h] [rbp-A0h]
  __int64 v37; // [rsp+20h] [rbp-98h]
  __int64 v38; // [rsp+28h] [rbp-90h]
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+50h] [rbp-68h]
  __int64 v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h]
  __int64 v43; // [rsp+68h] [rbp-50h]
  int v44; // [rsp+C0h] [rbp+8h]
  int v46; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v47; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v35 = *((_QWORD *)v2 + 14);
  v36 = *((_QWORD *)v2 + 15);
  v37 = *((_QWORD *)v2 + 16);
  v10 = *((int *)v2 + 45);
  v38 = v9;
  v40 = v4;
  v41 = v5;
  v42 = *((_QWORD *)v2 + 12);
  v47 = v6;
  v33 = v7;
  v34 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v47 = v6;
    v33 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v34 = v8;
  }
  v11 = *((_DWORD *)v2 + 37);
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v12 = v11 + v3;
    v43 = *((int *)a1 + 22);
    v44 = v11 + v3;
    v13 = *((unsigned int *)v2 + 11);
    v39 = v13;
    do
    {
      v14 = *((int *)v2 + 44);
      v15 = v7;
      v16 = v6;
      v17 = v8;
      if ( (_DWORD)v14 )
      {
        v16 = v6 + v35 * v14;
        v15 = v7 + v36 * v14;
        v17 = v8 + v37 * v14;
      }
      v18 = *((int *)v2 + 8);
      v46 = v18 + *((_DWORD *)v2 + 36);
      v19 = (_WORD *)(v9 + 2 * v18);
      v20 = *((int *)v2 + 10);
      v21 = &v19[v20];
      v22 = (v20 * 2) >> 1;
      if ( v19 > v21 )
        v22 = 0LL;
      if ( v22 )
      {
        v23 = v19;
        v24 = v46;
        v25 = 0LL;
        do
        {
          ++v25;
          v26 = v24++ & 3;
          v27 = *(_DWORD *)(0x1C0000000LL + 16LL * (v12 & 3) + 3308592 + 4 * v26);
          v28 = HIDWORD(v16);
          v16 += v35;
          v29 = Saturation16_5[(unsigned __int64)(v27 + ((unsigned int)v28 >> 3)) >> 16];
          v30 = HIDWORD(v15);
          v15 += v36;
          v31 = Saturation16_5[(unsigned __int64)(v27 + ((unsigned int)v30 >> 3)) >> 16] | (unsigned __int16)(32 * v29);
          v32 = HIDWORD(v17);
          v17 += v37;
          *v23++ = Saturation16_5[(unsigned __int64)(v27 + ((unsigned int)v32 >> 3)) >> 16] | (unsigned __int16)(32 * v31);
        }
        while ( v25 < v22 );
        v2 = a2;
        v6 = v47;
        v7 = v33;
        v8 = v34;
        v9 = v38;
        v12 = v44;
        v13 = v39;
        v4 = v40;
        v5 = v41;
      }
      v8 += v42;
      v9 += v43;
      v6 += v4;
      v7 += v5;
      v47 = v6;
      ++v12;
      v33 = v7;
      --v13;
      v34 = v8;
      v39 = v13;
      v44 = v12;
      v38 = v9;
    }
    while ( v13 );
  }
}
