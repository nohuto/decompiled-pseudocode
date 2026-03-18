/*
 * XREFs of ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF630
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BF920 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::EnumerateBrushes(
        CEmptyRegionDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  __int64 v4; // rax
  __m128i v8; // xmm1
  __int64 v9; // rax
  unsigned int v10; // xmm0_4
  signed int v11; // eax
  FastRegion::Internal::CRgnData *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  signed int v15; // eax
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-58h]
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]
  unsigned __int64 v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+60h] [rbp-28h]

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 3);
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 11),
      (struct FastRegion::CRegion::Iterator *)v19);
    while ( v21 < v20 )
    {
      *((float *)&v18 + 1) = (float)*(int *)v21;
      v8 = _mm_cvtsi32_si128(*(_DWORD *)(v21 + 8));
      *(float *)&v18 = (float)*(int *)(v22 + 8LL * v23);
      v9 = *((_QWORD *)this + 10);
      *(float *)&v10 = (float)*(int *)(v22 + 8LL * v23 + 4);
      *(_DWORD *)(v9 + 48) = 0;
      *(_BYTE *)(v9 + 52) = 1;
      *((_QWORD *)&v18 + 1) = __PAIR64__(_mm_cvtepi32_ps(v8).m128_u32[0], v10);
      *(_OWORD *)(v9 + 32) = v18;
      v11 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 10), a4);
      v13 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, v11, 0x92u, 0LL);
        return v13;
      }
      FastRegion::Internal::CRgnData::StepIterator(v12, (struct FastRegion::CRegion::Iterator *)v19);
    }
  }
  v14 = *((_QWORD *)this + 9);
  *(_OWORD *)(v14 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 3);
  v15 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
  v13 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x98u, 0LL);
  return v13;
}
