/*
 * XREFs of ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801EAE90
 * Callers:
 *     ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EB854 (-GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     cosf_0 @ 0x1800F0193 (cosf_0.c)
 *     sinf_0 @ 0x1800F01CF (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1801B81DC (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1801BA920 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 */

__int64 __fastcall CParticleEmitterVisual::CreateParticlesPrimitive(
        CParticleEmitterVisual *this,
        struct CDrawListPrimitive *a2,
        struct CDrawListPrimitive **a3)
{
  PrimitiveStorage::CInlineStorageBase **v3; // r15
  struct CDrawListPrimitive *v4; // rsi
  float v6; // xmm2_4
  float v7; // xmm0_4
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // rax
  float v18; // xmm0_4
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rbx
  float v22; // xmm6_4
  float v23; // xmm0_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm2_4
  float v26; // xmm0_4
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  signed int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  int v35; // [rsp+30h] [rbp-71h]
  __int128 v36; // [rsp+58h] [rbp-49h]
  __int128 v37; // [rsp+68h] [rbp-39h] BYREF
  __m128 v38; // [rsp+78h] [rbp-29h]
  struct _D3DCOLORVALUE v39; // [rsp+88h] [rbp-19h] BYREF
  struct _D3DCOLORVALUE v40; // [rsp+98h] [rbp-9h] BYREF
  __int64 v43; // [rsp+120h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  if ( !*((_BYTE *)this + 6282) )
  {
    v6 = *((float *)a2 + 20) - *((float *)a2 + 18);
    v7 = *((float *)a2 + 21) - *((float *)a2 + 19);
    *((_BYTE *)this + 6282) = 1;
    *((float *)this + 1534) = 1.0 / v6;
    *((float *)this + 1535) = 1.0 / v7;
    *((float *)this + 1536) = v6;
    *((float *)this + 1537) = v7;
  }
  v8 = *((_DWORD *)this + 1553);
  if ( v8 >= (unsigned int)((__int64)(*((_QWORD *)this + 90) - *((_QWORD *)this + 89)) >> 3) )
    v8 = (__int64)(*((_QWORD *)this + 90) - *((_QWORD *)this + 89)) >> 3;
  if ( v8 )
  {
    v9 = 0;
    v10 = 0LL;
    v43 = 0LL;
    v11 = 0LL;
    HIDWORD(v36) = 1065353216;
    v12 = 0LL;
    do
    {
      *(struct _D3DCOLORVALUE *)&v39.r = (struct _D3DCOLORVALUE)0LL;
      v38.m128_u64[0] = 0x3F8000003F800000LL;
      v38.m128_u64[1] = 0x3F8000003F800000LL;
      *(struct _D3DCOLORVALUE *)&v40.r = (struct _D3DCOLORVALUE)_mm_max_ps(
                                                                  _mm_min_ps(
                                                                    *(__m128 *)(*((_QWORD *)this + 86) + 16LL * v9),
                                                                    v38),
                                                                  (__m128)0LL);
      *(_DWORD *)(v12 + *((_QWORD *)this + 129) + 32) = ColorDWFromStraightColorF(&v40);
      v13 = *((_QWORD *)this + 89);
      v14 = *((_QWORD *)this + 92);
      v15 = *((float *)this + 1534) * *(float *)(v11 + v13);
      v16 = *(float *)(v11 + v13 + 4) * *((float *)this + 1535);
      v17 = *((_QWORD *)this + 129);
      v18 = v16 * *(float *)(v11 + v14 + 4);
      *(float *)(v12 + v17 + 36) = v15 * *(float *)(v11 + v14);
      *(float *)(v12 + v17 + 40) = v18;
      v19 = *((_QWORD *)this + 71);
      *(_QWORD *)&v36 = *(_QWORD *)(v19 + v20);
      DWORD2(v36) = *(_DWORD *)(v19 + v20 + 8);
      *(_OWORD *)(v12 + *((_QWORD *)this + 129)) = v36;
      v21 = *((_QWORD *)this + 74);
      v22 = *(float *)(v21 + v10 + 12) * 0.5;
      v23 = sinf_0(v22);
      *(float *)&v24 = v23 * *(float *)(v21 + v10);
      *(float *)&v25 = v23 * *(float *)(v21 + v10 + 4);
      *((float *)&v37 + 2) = v23 * *(float *)(v21 + v10 + 8);
      *(_QWORD *)&v37 = __PAIR64__(v25, v24);
      v26 = cosf_0(v22);
      v12 += 48LL;
      v27 = *((_QWORD *)this + 129);
      v11 += 8LL;
      *((float *)&v37 + 3) = v26;
      ++v9;
      v43 += 12LL;
      v10 += 16LL;
      *(_OWORD *)(v12 + v27 - 32) = v37;
    }
    while ( v9 < v8 );
    v4 = a2;
    v3 = a3;
  }
  v28 = *((_QWORD *)this + 129);
  *(_QWORD *)&v39.r = v8;
  *(_QWORD *)&v39.b = v28;
  if ( !v28 && v8
    || (v29 = *((_QWORD *)v4 + 7),
        v30 = *((unsigned int *)v4 + 5),
        *(struct _D3DCOLORVALUE *)&v40.r = *(struct _D3DCOLORVALUE *)&v39.r,
        *(_QWORD *)&v39.r = v30,
        (*(_QWORD *)&v39.b = v29) == 0LL)
    && v30 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)&v37 = *((_QWORD *)v4 + 4);
  DWORD2(v37) = 8 * *((_DWORD *)v4 + 4) + 16;
  HIDWORD(v37) = *((_DWORD *)v4 + 2);
  v31 = CDrawListPrimitive::CreateInstanced((__int64)&v37, (__int64)a2, &v39, (int *)&v40, (__int64)v4 + 88, v35, v3);
  v33 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x182u, 0LL);
  return v33;
}
