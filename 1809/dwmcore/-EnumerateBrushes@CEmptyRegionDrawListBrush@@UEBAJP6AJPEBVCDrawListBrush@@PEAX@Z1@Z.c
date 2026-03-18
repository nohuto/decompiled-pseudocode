/*
 * XREFs of ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18022B860
 * Callers:
 *     <none>
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::EnumerateBrushes(
        CEmptyRegionDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  __int64 v3; // rax
  __m128i v7; // xmm1
  __int64 v8; // rax
  unsigned int v9; // xmm0_4
  int v10; // eax
  FastRegion::Internal::CRgnData *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-58h]
  _BYTE v18[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]
  __int64 v21; // [rsp+58h] [rbp-30h]
  int v22; // [rsp+60h] [rbp-28h]

  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *(_OWORD *)(v3 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v3 + 24) = *((_QWORD *)this + 3);
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 9),
      (struct FastRegion::CRegion::Iterator *)v18);
    while ( v20 < v19 )
    {
      *((float *)&v17 + 1) = (float)*(int *)v20;
      v7 = _mm_cvtsi32_si128(*(_DWORD *)(v20 + 8));
      *(float *)&v17 = (float)*(int *)(v21 + 8LL * v22);
      v8 = *((_QWORD *)this + 8);
      *(float *)&v9 = (float)*(int *)(v21 + 8LL * v22 + 4);
      *(_DWORD *)(v8 + 48) = 0;
      *(_BYTE *)(v8 + 52) = 1;
      *((_QWORD *)&v17 + 1) = __PAIR64__(_mm_cvtepi32_ps(v7).m128_u32[0], v9);
      *(_OWORD *)(v8 + 32) = v17;
      v10 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 8), a3);
      v12 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v10, 0x93u);
        return v12;
      }
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v18);
    }
  }
  v13 = *((_QWORD *)this + 7);
  *(_OWORD *)(v13 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 3);
  v14 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 7), a3);
  v12 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x99u);
  return v12;
}
