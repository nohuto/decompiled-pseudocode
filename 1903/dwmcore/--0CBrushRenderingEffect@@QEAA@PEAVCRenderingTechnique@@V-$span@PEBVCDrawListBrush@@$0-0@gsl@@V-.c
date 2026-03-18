/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073910
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800736B0 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEAUSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x180073AA0 (-ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEAUSurfaceSampler.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800C0FD0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int64 *a4)
{
  CDrawListBitmap *v4; // rbp
  __int64 *v5; // r15
  __int64 v7; // rdi
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // esi
  unsigned __int64 v14; // rdi
  _OWORD *v15; // r12
  __int64 v16; // r13
  __int128 v18; // [rsp+20h] [rbp-48h]

  *(_DWORD *)(a1 + 8) = 0;
  v4 = (CDrawListBitmap *)(a1 + 24);
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  v5 = a3;
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = 4LL;
  v9 = 4LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v4);
    v4 = (CDrawListBitmap *)((char *)v4 + 24);
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
    --v7;
  }
  while ( v7 );
  v12 = *(_QWORD **)(a1 + 16);
  if ( v12 != a2 )
  {
    if ( a2 )
    {
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
      v12 = *(_QWORD **)(a1 + 16);
    }
    *(_QWORD *)(a1 + 16) = a2;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
  }
  v13 = 0;
  if ( *v5 > 0 )
  {
    v14 = 0LL;
    v15 = (_OWORD *)(a1 + 132);
    do
    {
      if ( v14 >= *v5 )
      {
LABEL_19:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v16 = *(_QWORD *)(v5[1] + 8 * v14);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, 2LL) )
      {
        CDrawListBitmap::operator=(a1 + 24 * (v13 + 1LL), v16 + 56);
        *(_WORD *)v10 = *(_WORD *)(v16 + 80);
        *(_BYTE *)(v10 + 2) = *(_BYTE *)(v16 + 82);
        if ( v14 >= *a4 )
          goto LABEL_19;
        *(_BYTE *)(v14 + a1 + 260) = *(_BYTE *)(v14 + a4[1]);
        CBrushRenderingEffect::ComputeSurfaceClampData(
          (const struct CSurfaceDrawListBrush *)v16,
          (struct CRenderingTechnique::SurfaceSamplerData *)(32LL * v13 + a1 + 132));
      }
      else
      {
        HIDWORD(v18) = *(_DWORD *)(v16 + 68);
        *(float *)&v18 = *((float *)&v18 + 3) * *(float *)(v16 + 56);
        *((float *)&v18 + 1) = *((float *)&v18 + 3) * *(float *)(v16 + 60);
        *((float *)&v18 + 2) = *((float *)&v18 + 3) * *(float *)(v16 + 64);
        *v15 = v18;
      }
      v5 = a3;
      ++v13;
      ++v14;
      v10 += 3LL;
      v15 += 2;
    }
    while ( v13 < *a3 );
  }
  return a1;
}
