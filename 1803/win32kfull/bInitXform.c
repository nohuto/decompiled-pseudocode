/*
 * XREFs of bInitXform @ 0x1C022A630
 * Callers:
 *     vtfdOpenFontContext @ 0x1C022A940 (vtfdOpenFontContext.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C007F260 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     bXformUnitVector @ 0x1C022AC30 (bXformUnitVector.c)
 */

__int64 __fastcall bInitXform(__int64 a1, XFORMOBJ *a2)
{
  float *v3; // rdx
  FLOATL eM12; // xmm1_4
  float *v5; // rax
  __int64 v6; // rcx
  FLOATL eM21; // xmm0_4
  FLOATL eM22; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  int v11; // ecx
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float *v17; // r14
  signed int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  float v23; // xmm1_4
  int v24; // eax
  int v26; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+34h] [rbp-2Ch]
  char v28; // [rsp+38h] [rbp-28h] BYREF
  XFORML pxform; // [rsp+40h] [rbp-20h] BYREF

  XFORMOBJ_iGetXform(a2, &pxform);
  v3 = (float *)(a1 + 16);
  eM12 = pxform.eM12;
  v5 = (float *)(a1 + 16);
  *(FLOATL *)(a1 + 16) = pxform.eM11;
  v6 = 4LL;
  eM21 = pxform.eM21;
  *(FLOATL *)(a1 + 20) = eM12;
  eM22 = pxform.eM22;
  *(FLOATL *)(a1 + 24) = eM21;
  *(FLOATL *)(a1 + 28) = eM22;
  do
  {
    *v5 = *v5 * 16.0;
    ++v5;
    --v6;
  }
  while ( v6 );
  v9 = *(float *)(a1 + 20);
  if ( v9 == 0.0 && *(float *)(a1 + 24) == 0.0 )
  {
    v10 = *v3;
    v11 = *(_DWORD *)(a1 + 120) | 4;
    *(_DWORD *)(a1 + 120) = v11;
    if ( v10 >= 0.0 )
    {
      v12 = 16;
      v13 = 32;
    }
    else
    {
      v11 |= 8u;
      *(_DWORD *)(a1 + 120) = v11;
      v12 = 128;
      v13 = 64;
    }
    if ( *(float *)(a1 + 28) < 0.0 )
      v12 = v13;
    *(_DWORD *)(a1 + 120) = v11 | v12;
  }
  if ( *(float *)(a1 + 28) == 0.0 && *v3 == 0.0 )
  {
    if ( *(float *)(a1 + 24) < 0.0 )
    {
      v14 = 2048;
      v15 = 1024;
    }
    else
    {
      v14 = 512;
      v15 = 256;
    }
    if ( v9 >= 0.0 )
      v14 = v15;
    *(_DWORD *)(a1 + 120) |= v14;
  }
  v16 = *(_DWORD *)(a1 + 120);
  v27 = 0;
  v17 = (float *)(a1 + 40);
  v26 = 1;
  bXformUnitVector(
    (unsigned int)&v26,
    (unsigned int)&pxform,
    a1 + 52,
    a1 + 44,
    (a1 + 64) & -(__int64)((v16 & 1) != 0),
    a1 + 40);
  *(_DWORD *)(a1 + 88) = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v18 = ((int)*v17 + 8) & 0xFFFFFFF0;
    *(_DWORD *)(a1 + 88) = v18;
    if ( v18 >= 24 )
    {
      *(_DWORD *)(a1 + 80) = (int)*(float *)(a1 + 52);
      *(_DWORD *)(a1 + 84) = (int)*(float *)(a1 + 56);
    }
    else
    {
      v19 = (*(_DWORD *)(a1 + 68) + 8) >> 4;
      v20 = (*(_DWORD *)(a1 + 76) + 8) >> 4;
      *(_DWORD *)(a1 + 88) = 16;
      *(_DWORD *)(a1 + 80) = v19;
      *(_DWORD *)(a1 + 84) = v20;
      if ( v19 == v20 || (v21 = v20, v19 == -v20) )
      {
        *(_DWORD *)(a1 + 84) = 0;
        v21 = 0;
      }
      *(_DWORD *)(a1 + 84) = 16 * v21;
      *(_DWORD *)(a1 + 80) = 16 * v19;
    }
  }
  v26 = 0;
  v27 = -1;
  bXformUnitVector((unsigned int)&v26, (unsigned int)&pxform, (unsigned int)&v28, a1 + 100, 0LL, a1 + 96);
  v22 = *(_QWORD *)(a1 + 8);
  v23 = *(float *)(a1 + 96);
  *(_DWORD *)(a1 + 32) = (int)(float)((float)*(__int16 *)(v22 + 60) * v23);
  v24 = *(__int16 *)(v22 + 62);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 36) = -(int)(float)((float)v24 * v23);
  if ( (*(_DWORD *)(a1 + 120) & 2) != 0 )
    *(_DWORD *)(a1 + 92) = (8
                          - (int)(float)((float)((float)(*(__int16 *)(v22 + 62) + 1 + *(__int16 *)(v22 + 60)) * *v17)
                                       * -0.5)) & 0xFFFFFFF0;
  return 1LL;
}
