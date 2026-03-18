/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180178BB8
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800317B0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180179534 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(
        CDirectFlipInfo *this,
        struct CDirtyRegion *a2,
        const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  FastRegion::Internal::CRgnData **v5; // r9
  __int64 v6; // rdx
  __int64 i; // rax
  int v8; // eax
  FastRegion::Internal::CRgnData *v9; // rcx
  _DWORD v11[4]; // [rsp+30h] [rbp-69h]
  _BYTE v12[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-51h]
  _DWORD *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+60h] [rbp-39h]
  __m128 v17[4]; // [rsp+70h] [rbp-29h] BYREF
  int v18; // [rsp+B0h] [rbp+17h]
  _DWORD v19[4]; // [rsp+C0h] [rbp+27h] BYREF
  float v20[4]; // [rsp+D0h] [rbp+37h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 17) == 2 || *((_DWORD *)this + 17) == 3 && CDirectFlipInfo::RenderingRealizationChanged(this))
    && *((_QWORD *)this + 6) )
  {
    v18 = 0;
    CMILMatrix::SetToInverse(v17, a3);
    FastRegion::Internal::CRgnData::BeginIterator(*v5, (struct FastRegion::CRegion::Iterator *)v12);
    while ( (unsigned __int64)v14 < v13 )
    {
      v11[1] = *v14;
      v11[3] = v14[2];
      v6 = 2 * v16;
      v11[0] = *(_DWORD *)(v15 + 4 * v6);
      v11[2] = *(_DWORD *)(v15 + 4 * v6 + 4);
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v19[i] = (float)(int)v11[i];
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v17, (__int64)v19, v20);
      v8 = CDirtyRegion::Add(a2, 0LL, 0LL, (__int64)v20);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v8, 0x247u);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v12);
    }
  }
  return v3;
}
