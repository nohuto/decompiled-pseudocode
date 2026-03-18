/*
 * XREFs of ColorSpaceTransformCombine @ 0x1C005235C
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D386C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall ColorSpaceTransformCombine(char *Src, int *a2, _DWORD *a3)
{
  int v6; // eax
  bool v8; // zf
  int v9; // r10d
  unsigned int v10; // ebp
  _DWORD *v11; // rdi
  __int64 v12; // r13
  float *v13; // r9
  int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  unsigned int v18; // r15d
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4

  if ( !Src || !a3 )
    return 3221225485LL;
  v6 = *a2;
  if ( *a2 == 1 )
  {
    if ( *((_QWORD *)a2 + 1) || *((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  else
  {
    if ( v6 == 2 )
    {
      v8 = *((_QWORD *)a2 + 1) == 1536LL;
    }
    else
    {
      if ( v6 != 3 )
        return 3223192391LL;
      v8 = *((_QWORD *)a2 + 1) == 12324LL;
    }
    if ( !v8 || !*((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  memmove(a3, Src, 0x30uLL);
  a3[12] = *((_DWORD *)Src + 12);
  if ( *a2 == 1 )
  {
    memmove(a3 + 13, Src + 52, 0xC000uLL);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = a3 + 14;
    v12 = 4096LL;
    do
    {
      v13 = (float *)*((_QWORD *)a2 + 2);
      v14 = 4095 - v9;
      if ( *a2 == 2 )
      {
        if ( v9 )
        {
          v15 = v10 + 1;
          v16 = ((v14 * *((unsigned __int16 *)v13 + v10) + v9 * (unsigned int)*((unsigned __int16 *)v13 + v15))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v17 = (v16
               + (((unsigned __int64)(v14 * *((unsigned __int16 *)v13 + v10)
                                    + v9 * (unsigned int)*((unsigned __int16 *)v13 + v15))
                 - v16) >> 1)) >> 15;
          v18 = (v14 * *((unsigned __int16 *)v13 + v10 + 256) + v9
                                                              * (unsigned int)*((unsigned __int16 *)v13 + v15 + 256))
              / 0xFFF0;
          v19 = (v14 * *((unsigned __int16 *)v13 + v10 + 512) + v9
                                                              * (unsigned int)*((unsigned __int16 *)v13 + v15 + 512))
              / 0xFFF0;
        }
        else
        {
          LODWORD(v17) = *((unsigned __int16 *)v13 + v10) >> 4;
          v18 = *((unsigned __int16 *)v13 + v10 + 256) >> 4;
          v19 = *((unsigned __int16 *)v13 + v10 + 512) >> 4;
        }
        v20 = v9 + 255;
        v21 = v10 + 1;
        v9 -= 3840;
        if ( v20 < 0xFFF )
        {
          v21 = v10;
          v9 = v20;
        }
        v10 = v21;
      }
      else
      {
        if ( v9 )
        {
          v22 = v10 + 1;
          v23 = (float)((float)((float)v9 * v13[3 * v22 + 6]) + (float)((float)v14 * v13[3 * v10 + 6])) / 4095.0;
          v24 = (float)((float)((float)v9 * v13[3 * v22 + 7]) + (float)((float)v14 * v13[3 * v10 + 7])) / 4095.0;
          v25 = (float)((float)((float)v9 * v13[3 * v22 + 8]) + (float)((float)v14 * v13[3 * v10 + 8])) / 4095.0;
        }
        else
        {
          v23 = v13[3 * v10 + 6];
          v24 = v13[3 * v10 + 7];
          v25 = v13[3 * v10 + 8];
        }
        v26 = (float)(v23 * *v13) + v13[3];
        v27 = (float)(v24 * v13[1]) + v13[4];
        v28 = (float)(v25 * v13[2]) + v13[5];
        if ( v26 >= 0.0 )
          v29 = fminf(1.0, v26);
        else
          v29 = 0.0;
        LODWORD(v17) = (int)(float)(v29 * 4095.0);
        if ( v27 >= 0.0 )
          v30 = fminf(1.0, v27);
        else
          v30 = 0.0;
        v18 = (int)(float)(v30 * 4095.0);
        if ( v28 >= 0.0 )
          v31 = fminf(1.0, v28);
        else
          v31 = 0.0;
        v9 += 1024;
        v19 = (int)(float)(v31 * 4095.0);
        if ( (unsigned int)v9 >= 0xFFF )
        {
          v9 -= 4095;
          ++v10;
        }
      }
      *(v11 - 1) = *(_DWORD *)&Src[12 * (unsigned int)v17 + 52];
      *v11 = *(_DWORD *)&Src[12 * v18 + 56];
      v11[1] = *(_DWORD *)&Src[12 * v19 + 60];
      v11 += 3;
      --v12;
    }
    while ( v12 );
  }
  return 0LL;
}
