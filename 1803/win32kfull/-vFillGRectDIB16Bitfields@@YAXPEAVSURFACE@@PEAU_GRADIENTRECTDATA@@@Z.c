/*
 * XREFs of ?vFillGRectDIB16Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A0160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rbp
  int v3; // edx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  _WORD *v19; // rdx
  unsigned __int64 v20; // rcx
  _WORD *v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  _WORD *v24; // r13
  char v25; // al
  int v26; // ecx
  __int16 v27; // ax
  bool v28; // zf
  __int64 v29; // [rsp+20h] [rbp-C8h]
  __int64 v30; // [rsp+28h] [rbp-C0h]
  __int64 v31; // [rsp+30h] [rbp-B8h]
  __int64 v32; // [rsp+38h] [rbp-B0h]
  __int64 v33; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+48h] [rbp-A0h]
  __int64 v35; // [rsp+50h] [rbp-98h]
  __int64 v36; // [rsp+58h] [rbp-90h]
  __int64 v37; // [rsp+70h] [rbp-78h]
  __int64 v38; // [rsp+78h] [rbp-70h]
  __int64 v39; // [rsp+80h] [rbp-68h]
  __int64 v40; // [rsp+88h] [rbp-60h]
  __int64 v41; // [rsp+90h] [rbp-58h]
  __int64 v42; // [rsp+98h] [rbp-50h]
  int v43; // [rsp+F0h] [rbp+8h]
  int v45; // [rsp+100h] [rbp+18h]
  __int64 v46; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v46 = *((_QWORD *)v2 + 14);
  v29 = *((_QWORD *)v2 + 15);
  v33 = *((_QWORD *)v2 + 16);
  v38 = *((_QWORD *)v2 + 21);
  v10 = *((int *)v2 + 45);
  v35 = v9;
  v39 = v4;
  v40 = v5;
  v41 = *((_QWORD *)v2 + 12);
  v30 = v6;
  v31 = v7;
  v32 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v30 = v6;
    v31 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v32 = v8;
  }
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v11 = v3 + *((_DWORD *)v2 + 37);
    v42 = *((int *)a1 + 22);
    v12 = *((_QWORD *)v2 + 14);
    v36 = *((unsigned int *)v2 + 11);
    v13 = *((_QWORD *)v2 + 15);
    v45 = v11;
    do
    {
      v14 = v6;
      v15 = v7;
      v37 = 2 * (v11 & 3u);
      v16 = v8;
      v17 = *((int *)v2 + 44);
      if ( (_DWORD)v17 )
      {
        v14 = v6 + v12 * v17;
        v15 = v7 + v13 * v17;
        v16 = v8 + v33 * v17;
      }
      v18 = *((int *)v2 + 8);
      v34 = 0LL;
      v43 = v18 + *((_DWORD *)v2 + 36);
      v19 = (_WORD *)(v9 + 2 * v18);
      v20 = *((int *)v2 + 10);
      v21 = &v19[v20];
      v22 = (v20 * 2) >> 1;
      if ( v19 > v21 )
        v22 = 0LL;
      if ( v22 )
      {
        v23 = v22;
        v24 = v19;
        v25 = v43;
        do
        {
          v26 = *((_DWORD *)&(&gulDither32)[v37] + (v25 & 3));
          v27 = XEPALOBJ::ulDispatchGFPEFunction(
                  v38,
                  *(unsigned int *)(*(_QWORD *)v38 + 100LL),
                  8
                * (Saturation16_5[(unsigned __int64)(unsigned int)(v26 + (HIDWORD(v14) >> 3)) >> 16] | ((Saturation16_5[(unsigned __int64)(unsigned int)(v26 + (HIDWORD(v15) >> 3)) >> 16] | (Saturation16_5[(unsigned __int64)(unsigned int)(v26 + (HIDWORD(v16) >> 3)) >> 16] << 8)) << 8)));
          v14 += v46;
          *v24++ = v27;
          v25 = v43 + 1;
          ++v34;
          v15 += v29;
          ++v43;
          v16 += v33;
        }
        while ( v34 < v23 );
        v2 = a2;
        v6 = v30;
        v7 = v31;
        v8 = v32;
        v9 = v35;
        v4 = v39;
        v5 = v40;
        v12 = v46;
        v13 = v29;
      }
      v6 += v4;
      v8 += v41;
      LOBYTE(v11) = v45 + 1;
      v9 += v42;
      v7 += v5;
      v28 = v36-- == 1;
      v30 = v6;
      v31 = v7;
      v32 = v8;
      ++v45;
      v35 = v9;
    }
    while ( !v28 );
  }
}
