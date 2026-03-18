/*
 * XREFs of bCreatePath @ 0x1C0229A3C
 * Callers:
 *     vtfdQueryFontData @ 0x1C022A290 (vtfdQueryFontData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall bCreatePath(char *a1, char *a2, __int64 a3, PATHOBJ *a4, int a5)
{
  __int64 v5; // r13
  char *v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  float v11; // xmm6_4
  int v12; // r9d
  float v13; // xmm8_4
  int v14; // r10d
  float v15; // xmm9_4
  float v16; // xmm7_4
  int v17; // r11d
  __int64 v18; // rbx
  int v19; // esi
  int v20; // r14d
  int v21; // eax
  __int64 v22; // r8
  char v23; // al
  char *v24; // rdi
  __int64 v25; // rdx
  int v26; // eax
  int *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __m128i v30; // xmm0
  int v31; // ecx
  int v32; // eax
  __int64 v33; // r11
  int v34; // r10d
  unsigned __int64 v35; // rdx
  float v36; // xmm3_4
  float v37; // xmm0_4
  int v38; // r9d
  int v39; // r8d
  __int64 v40; // rcx
  FIX *p_y; // rax
  int v42; // eax
  char *v43; // rdi
  int v44; // eax
  char *v45; // rdi
  unsigned int v47; // [rsp+28h] [rbp-B1h]
  int v48; // [rsp+28h] [rbp-B1h]
  int v49; // [rsp+28h] [rbp-B1h]
  int v50; // [rsp+2Ch] [rbp-ADh]
  int v51; // [rsp+30h] [rbp-A9h]
  int v53; // [rsp+40h] [rbp-99h]
  int v54; // [rsp+44h] [rbp-95h]
  int v55; // [rsp+48h] [rbp-91h]
  __int64 v56; // [rsp+50h] [rbp-89h]
  __int64 v57; // [rsp+60h] [rbp-79h]
  int v58; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v59[9]; // [rsp+6Ch] [rbp-6Dh]
  POINTFIX ptfx; // [rsp+90h] [rbp-49h] BYREF
  POINTFIX pptfx; // [rsp+98h] [rbp-41h] BYREF

  LODWORD(v5) = 0;
  v8 = a1;
  v9 = 1;
  v47 = 1;
  if ( a1 == a2 )
    return v9;
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(float *)(a3 + 16);
  v12 = *(_DWORD *)(a3 + 120) & 2;
  v13 = *(float *)(a3 + 20);
  v14 = *(_DWORD *)(a3 + 120) & 4;
  v15 = *(float *)(a3 + 24);
  v16 = *(float *)(a3 + 28);
  v17 = *(__int16 *)(v10 + 62);
  v18 = *(_QWORD *)(a3 + 80);
  v53 = *(_DWORD *)(a3 + 120) & 1;
  v50 = (__int16)v17;
  v54 = v12;
  v55 = v14;
  switch ( *(_DWORD *)(a3 + 120) & 0xFF0 )
  {
    case 16:
      v20 = a5 - 16;
      goto LABEL_20;
    case 32:
      v20 = a5 - 16;
      v19 = *(_DWORD *)(a3 + 32) - 16;
      break;
    case 64:
      v20 = -16;
      v19 = *(_DWORD *)(a3 + 32) - 16;
      break;
    case 128:
      v20 = -16;
LABEL_20:
      v19 = -16 - *(_DWORD *)(a3 + 36);
      break;
    case 256:
      v20 = -16 - *(_DWORD *)(a3 + 36);
      goto LABEL_15;
    case 512:
      v19 = -16;
      v20 = -16 - *(_DWORD *)(a3 + 36);
      break;
    case 1024:
      v20 = *(_DWORD *)(a3 + 32) - 16;
LABEL_15:
      v19 = a5 - 16;
      break;
    case 2048:
      v19 = -16;
      v20 = *(_DWORD *)(a3 + 32) - 16;
      break;
    default:
      v20 = *(__int16 *)(v10 + 62);
      v19 = v20;
      break;
  }
  v21 = *(__int16 *)(v10 + 60);
  v58 = 0;
  v59[0] = -v21;
  if ( v8 <= a2 )
  {
    while ( 1 )
    {
      v22 = (unsigned int)v5;
      if ( v8 == a2 )
        break;
      v23 = *v8;
      if ( *v8 == (char)0x80 )
        break;
      if ( (unsigned int)v5 >= 5 )
        goto LABEL_32;
      v24 = v8 + 1;
      v25 = (unsigned int)v5;
      if ( (_DWORD)v5 )
      {
        v59[2 * (unsigned int)v5 - 1] = v59[2 * (unsigned int)(v5 - 1) - 1] + v23;
        if ( v24 == a2 )
          return 0LL;
        v26 = v59[2 * (unsigned int)(v5 - 1)] + *v24;
      }
      else
      {
        v59[2 * (unsigned int)v5 - 1] = v23;
        if ( v24 == a2 )
          return 0LL;
        v26 = *v24;
      }
      LODWORD(v5) = v5 + 1;
      v59[2 * v25] = v26;
      v8 = v24 + 1;
LABEL_63:
      if ( v8 > a2 )
        return v47;
      v12 = v54;
      v14 = v55;
      v17 = v50;
    }
    if ( (unsigned int)v5 > 1 )
    {
LABEL_32:
      v5 = (unsigned int)(v5 - 1);
      v57 = (unsigned int)v5;
      v51 = v59[2 * v5 - 1];
      if ( v12 )
      {
        v27 = &v58;
        v28 = v22;
        do
        {
          *v27 += (v17 - v27[1]) >> 1;
          v27 += 2;
          --v28;
        }
        while ( v28 );
      }
      v56 = v22;
      if ( v14 )
      {
        v29 = 0LL;
        do
        {
          v30 = _mm_cvtsi32_si128(v59[v29 - 1]);
          v29 += 2LL;
          v31 = (int)(float)(_mm_cvtepi32_ps(v30).m128_f32[0] * v11);
          v32 = (int)(float)((float)*(int *)((char *)&v57 + v29 * 4 + 4) * v16);
          if ( v32 > v19 )
            v32 = v19;
          v59[v29 + 8] = v32;
          if ( v31 > v20 )
            v31 = v20;
          v59[v29 + 7] = v31;
          --v22;
        }
        while ( v22 );
      }
      else
      {
        v33 = v22;
        v34 = *(_DWORD *)(a3 + 120) & 0xFF0;
        v35 = 0LL;
        do
        {
          v36 = (float)v59[v35 / 4 - 1];
          v37 = (float)(int)v59[v35 / 4];
          v38 = (int)(float)(v36 * v11) + (int)(float)(v37 * v15);
          *(FIX *)((char *)&ptfx.x + v35) = v38;
          v39 = (int)(float)(v36 * v13) + (int)(float)(v37 * v16);
          *(FIX *)((char *)&ptfx.y + v35) = v39;
          if ( v34 )
          {
            if ( v39 > v19 )
              v39 = v19;
            *(FIX *)((char *)&ptfx.y + v35) = v39;
            if ( v38 > v20 )
              v38 = v20;
            *(FIX *)((char *)&ptfx.x + v35) = v38;
          }
          v35 += 8LL;
          --v33;
        }
        while ( v33 );
      }
      v48 = PATHOBJ_bMoveTo(a4, ptfx) & v47;
      v47 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v48;
      if ( v53 )
      {
        v40 = v56;
        p_y = &ptfx.y;
        do
        {
          *(p_y - 1) += v18;
          *p_y += HIDWORD(v18);
          p_y += 2;
          --v40;
        }
        while ( v40 );
        v49 = PATHOBJ_bMoveTo(a4, ptfx) & v47;
        v47 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v49;
      }
      if ( v8 != a2 && *v8 != (char)0x80 )
      {
        v58 = v51;
        v42 = v59[2 * v57];
LABEL_62:
        LODWORD(v5) = 1;
        v59[0] = v42;
        goto LABEL_63;
      }
      v59[2 * v5 - 1] = v51;
    }
    v43 = v8 + 1;
    if ( v43 == a2 )
      return 0LL;
    v44 = *v43;
    v45 = v43 + 1;
    v58 = v59[2 * (unsigned int)v5 - 1] + v44;
    if ( v45 == a2 )
      return 0LL;
    v42 = v59[2 * (unsigned int)v5] + *v45;
    v8 = v45 + 1;
    goto LABEL_62;
  }
  return v9;
}
