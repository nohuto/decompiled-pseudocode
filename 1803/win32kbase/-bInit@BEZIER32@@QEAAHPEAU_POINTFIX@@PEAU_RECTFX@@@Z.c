/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C00604A0
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C001B64C (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vSteadyState@HFDBASIS32@@QEAAXJ@Z @ 0x1C0060734 (-vSteadyState@HFDBASIS32@@QEAAXJ@Z.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0060768 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C00C6B50 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v4; // r15
  int v7; // edi
  __m128i v8; // xmm3
  __int32 v9; // r11d
  __m128i v10; // xmm2
  int v11; // edx
  unsigned __int32 v12; // r9d
  unsigned __int32 v13; // ebx
  int v14; // eax
  int v15; // r8d
  int v16; // ebp
  int v17; // r12d
  int v18; // r13d
  HFDBASIS32 *v19; // r10
  int v20; // edx
  _DWORD *v21; // r9
  int v22; // r8d
  int v23; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // r11d
  int v27; // ecx
  int v28; // eax
  HFDBASIS32 *v29; // r9
  _DWORD *v30; // r10
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  __int64 result; // rax
  _DWORD *v35; // r9
  int v36; // edx
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edx

  *(_DWORD *)this = 1;
  v4 = (struct _RECTFX *)((char *)this + 36);
  v7 = 0;
  vBoundBox(a2, (struct _RECTFX *)((char *)this + 36));
  v8 = *(__m128i *)&a2[2].x;
  v9 = v8.m128i_i32[0] - v4->xLeft;
  v10 = *(__m128i *)&a2->x;
  v11 = *(_OWORD *)&a2->x - v4->xLeft;
  v12 = _mm_srli_si128(*(__m128i *)&a2->x, 8).m128i_u32[0] - v4->xLeft;
  v13 = _mm_srli_si128(v8, 8).m128i_u32[0] - v4->xLeft;
  v14 = *((_DWORD *)this + 10);
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4)) - v14;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v14;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v14;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 12)) - v14;
  if ( ((v11 | v12 | v9 | v13 | v15 | v18 | v17 | v16) & 0xFFFFC000) != 0 )
    return 0LL;
  v19 = (BEZIER32 *)((char *)this + 4);
  *((_DWORD *)this + 1) = v11 << 10;
  *((_DWORD *)this + 2) = (v13 - v11) << 10;
  *((_DWORD *)this + 3) = 6144 * (v13 + v12 - 2 * v9);
  v20 = v11 - 2 * v12;
  v21 = (_DWORD *)((char *)this + 20);
  *((_DWORD *)this + 4) = 6144 * (v9 + v20);
  *((_DWORD *)this + 5) = v15 << 10;
  *((_DWORD *)this + 6) = (v16 - v15) << 10;
  *((_DWORD *)this + 7) = 6144 * (v16 + v18 - 2 * v17);
  *((_DWORD *)this + 8) = 6144 * (v17 + v15 - 2 * v18);
  if ( !a3 || bIntersect(v4, a3) )
  {
    while ( 1 )
    {
      v22 = *((_DWORD *)v19 + 3);
      v23 = 65472 << v7;
      v24 = abs32(*((_DWORD *)v19 + 2));
      v25 = -v22;
      if ( v22 >= 0 )
        v25 = *((_DWORD *)v19 + 3);
      if ( v24 <= v25 )
      {
        v24 = *((_DWORD *)v19 + 3);
        if ( v22 < 0 )
          v24 = -*((_DWORD *)v19 + 3);
      }
      if ( v24 <= v23 )
      {
        v26 = v21[3];
        v27 = -v26;
        v28 = abs32(v21[2]);
        if ( v26 >= 0 )
          v27 = v21[3];
        if ( v28 <= v27 )
        {
          v28 = v21[3];
          if ( v26 < 0 )
            v28 = -v21[3];
        }
        if ( v28 <= v23 )
          break;
      }
      v39 = *((_DWORD *)v19 + 1);
      v40 = (*((_DWORD *)v19 + 2) + v22) >> 1;
      v7 += 2;
      *((_DWORD *)v19 + 2) = v40;
      *((_DWORD *)v19 + 1) = (v39 - (v40 >> v7)) >> 1;
      v41 = v21[1];
      v42 = (v21[2] + v21[3]) >> 1;
      v21[2] = v42;
      v21[1] = (v41 - (v42 >> v7)) >> 1;
      *(_DWORD *)this *= 2;
    }
  }
  HFDBASIS32::vSteadyState(v19, v7);
  HFDBASIS32::vSteadyState(v29, v7);
  v31 = v30[2];
  v32 = v30[1];
  *v30 += v32;
  v30[1] = v31 + v32;
  v33 = v31 - v30[3];
  v30[3] = v31;
  v30[2] = v31 + v33;
  result = 1LL;
  v36 = v35[2];
  v37 = v35[1];
  *v35 += v37;
  v35[1] = v36 + v37;
  v38 = v36 - v35[3];
  v35[3] = v36;
  v35[2] = v36 + v38;
  --*(_DWORD *)this;
  return result;
}
