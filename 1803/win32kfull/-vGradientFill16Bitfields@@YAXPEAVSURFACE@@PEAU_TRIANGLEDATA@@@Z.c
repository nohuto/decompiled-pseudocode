/*
 * XREFs of ?vGradientFill16Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02A2120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  struct SURFACE *v3; // r10
  __int64 v4; // rdx
  int v5; // r12d
  int v6; // r13d
  __int64 v7; // r15
  char *v8; // rcx
  int v9; // eax
  int v10; // r8d
  int v11; // r11d
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // edx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rbp
  _WORD *v20; // r13
  int v21; // r14d
  int v22; // ecx
  __int16 v23; // ax
  int v24; // [rsp+20h] [rbp-A8h]
  int v25; // [rsp+24h] [rbp-A4h]
  char *v26; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  unsigned __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  int v38; // [rsp+E0h] [rbp+18h]
  int v39; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((int *)a1 + 22);
  v5 = *((_DWORD *)v2 + 28);
  v6 = *((_DWORD *)v2 + 3);
  v38 = v5;
  v24 = *((_DWORD *)v2 + 32);
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v5;
  v8 = (char *)v2 + 168;
  v34 = *((_QWORD *)v2 + 20);
  v28 = *((_QWORD *)v2 + 2);
  v29 = *((_QWORD *)v2 + 3);
  v30 = *((_QWORD *)v2 + 4);
  v32 = v7;
  if ( v6 >= *((_DWORD *)v2 + 29) )
    v6 = *((_DWORD *)v2 + 29);
  v26 = (char *)v2 + 168;
  v25 = v6;
  if ( v5 < v6 )
  {
    v9 = v5 + *((_DWORD *)v2 + 33);
    v35 = v4;
    v39 = v9;
    do
    {
      v10 = *((_DWORD *)v8 + 1);
      v11 = *(_DWORD *)v8;
      v12 = *(_DWORD *)v8;
      v13 = *(_DWORD *)v2;
      v14 = *((_QWORD *)v8 + 1);
      v15 = *((_QWORD *)v8 + 2);
      v16 = *((_QWORD *)v8 + 3);
      v33 = 2 * (v9 & 3u);
      if ( v10 >= *((_DWORD *)v2 + 2) )
        v10 = *((_DWORD *)v2 + 2);
      if ( v11 <= v13 )
        v12 = *(_DWORD *)v2;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v7 + v12) && v12 < v10 )
      {
        v17 = v13 - v11;
        v27 = v7 + 2LL * v12;
        v18 = v7 + 2LL * v10;
        if ( v17 > 0 )
        {
          v14 += v28 * v17;
          v15 += v29 * v17;
          v16 += v30 * v17;
          v8 = v26;
        }
        v31 = 0LL;
        v19 = (v18 - v27 + 1) >> 1;
        if ( v27 > v18 )
          v19 = 0LL;
        if ( v19 )
        {
          v20 = (_WORD *)(v7 + 2LL * v12);
          v21 = v12 + v24;
          do
          {
            v22 = *((_DWORD *)&(&gulDither32)[v33] + (v21 & 3));
            v23 = XEPALOBJ::ulDispatchGFPEFunction(
                    v34,
                    *(unsigned int *)(*(_QWORD *)v34 + 100LL),
                    8
                  * (Saturation16_5[(unsigned __int64)(unsigned int)(v22 + (HIDWORD(v14) >> 11)) >> 16] | ((Saturation16_5[(unsigned __int64)(unsigned int)(v22 + (HIDWORD(v15) >> 11)) >> 16] | (Saturation16_5[(unsigned __int64)(unsigned int)(v22 + (HIDWORD(v16) >> 11)) >> 16] << 8)) << 8)));
            v16 += v30;
            v14 += v28;
            *v20 = v23;
            v15 += v29;
            ++v20;
            ++v21;
            ++v31;
          }
          while ( v31 < v19 );
          v2 = a2;
          v7 = v32;
          v5 = v38;
          v6 = v25;
          v8 = v26;
          v3 = a1;
        }
      }
      v8 += 40;
      v7 += v35;
      LOBYTE(v9) = v39 + 1;
      ++v5;
      v32 = v7;
      v26 = v8;
      v38 = v5;
      ++v39;
    }
    while ( v5 < v6 );
  }
}
