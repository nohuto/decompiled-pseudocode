/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180027A70
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180027050 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180063E40 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD),
        gsl::details **a3,
        __int64 *a4)
{
  __int64 v4; // rsi
  CDrawListBitmap *v5; // rbp
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD); // rcx
  gsl::details *v13; // rcx
  int v14; // r13d
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  float v25; // xmm0_4
  __int128 v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+84h] [rbp+Ch]
  gsl::details **v30; // [rsp+90h] [rbp+18h]
  __int64 *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = 4LL;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = (CDrawListBitmap *)(a1 + 24);
  v9 = 4LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v5);
    v5 = (CDrawListBitmap *)((char *)v5 + 24);
    --v9;
  }
  while ( v9 );
  v10 = a1 + 120;
  v11 = a1 + 120;
  do
  {
    *(_WORD *)v11 = 257;
    *(_BYTE *)(v11 + 2) = 1;
    v11 += 3LL;
    --v4;
  }
  while ( v4 );
  v12 = *(void (__fastcall ****)(_QWORD))(a1 + 16);
  if ( v12 != a2 )
  {
    if ( a2 )
    {
      (**a2)(a2);
      v12 = *(void (__fastcall ****)(_QWORD))(a1 + 16);
    }
    *(_QWORD *)(a1 + 16) = a2;
    if ( v12 )
      (*v12)[1](v12);
  }
  v13 = *a3;
  v14 = 0;
  if ( (__int64)*a3 > 0 )
  {
    v15 = 0LL;
    v16 = a1 + 132;
    v17 = a1 + 32;
    while ( v15 >= 0 && v15 < (__int64)v13 )
    {
      _mm_lfence();
      v18 = *((_QWORD *)v30[1] + v15);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 8LL))(v18, 2LL) )
      {
        v19 = *(_QWORD *)(v17 - 8);
        v20 = *(_QWORD *)(v18 + 56);
        if ( v19 != v20 )
        {
          if ( v20 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*(_QWORD *)(v18 + 56));
            v19 = *(_QWORD *)(v17 - 8);
          }
          *(_QWORD *)(v17 - 8) = v20;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v13 = *(gsl::details **)v17;
        v21 = *(_QWORD *)(v18 + 64);
        if ( *(_QWORD *)v17 != v21 )
        {
          if ( v21 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*(_QWORD *)(v18 + 64));
            v13 = *(gsl::details **)v17;
          }
          *(_QWORD *)v17 = v21;
          if ( v13 )
            (*(void (__fastcall **)(gsl::details *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        *(_BYTE *)(v17 + 8) = *(_BYTE *)(v18 + 72);
        *(_WORD *)v10 = *(_WORD *)(v18 + 80);
        *(_BYTE *)(v10 + 2) = *(_BYTE *)(v18 + 82);
        if ( v15 >= *v31 )
          break;
        *(_BYTE *)(v15 + a1 + 260) = *(_BYTE *)(v15 + v31[1]);
        if ( !*(_BYTE *)(v18 + 136) || *(_BYTE *)(v18 + 52) )
        {
          *(_OWORD *)v16 = 0uLL;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v18 + 64) + 40LL))(*(_QWORD *)(v18 + 64), &v28);
          v22 = v28;
          v23 = 0LL;
          *(_OWORD *)v16 = *(_OWORD *)(v18 + 120);
          v24 = 0LL;
          v23.m128_f32[0] = (float)v22;
          v24.m128_f32[0] = (float)v29;
          v25 = 1.0 / (float)v29;
          *(float *)(v16 + 24) = 1.0 / (float)v22;
          *(float *)(v16 + 28) = v25;
          *(_QWORD *)(v16 + 16) = _mm_unpacklo_ps(v23, v24).m128_u64[0];
        }
      }
      else
      {
        HIDWORD(v27) = *(_DWORD *)(v18 + 68);
        *(float *)&v27 = *((float *)&v27 + 3) * *(float *)(v18 + 56);
        *((float *)&v27 + 1) = *((float *)&v27 + 3) * *(float *)(v18 + 60);
        *((float *)&v27 + 2) = *((float *)&v27 + 3) * *(float *)(v18 + 64);
        *(_OWORD *)v16 = v27;
      }
      ++v14;
      ++v15;
      v10 += 3LL;
      v17 += 24LL;
      v16 += 32LL;
      v13 = *v30;
      if ( v14 >= (__int64)*v30 )
        return a1;
    }
    gsl::details::terminate(v13);
    JUMPOUT(0x180027D38LL);
  }
  return a1;
}
