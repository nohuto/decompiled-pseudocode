/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x18019411C
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18006E5A0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085B28 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800B0530 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180194BF4 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(
        CDirectFlipInfo *this,
        struct CDirtyRegion *a2,
        const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  FastRegion::Internal::CRgnData **v7; // r9
  __int64 v8; // rdx
  __int64 i; // rax
  signed int v10; // eax
  FastRegion::Internal::CRgnData *v11; // rcx
  _DWORD v13[4]; // [rsp+30h] [rbp-79h]
  _BYTE v14[8]; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-61h]
  _DWORD *v16; // [rsp+50h] [rbp-59h]
  __int64 v17; // [rsp+58h] [rbp-51h]
  int v18; // [rsp+60h] [rbp-49h]
  __m128 v19[4]; // [rsp+70h] [rbp-39h] BYREF
  int v20; // [rsp+B0h] [rbp+7h]
  _DWORD v21[4]; // [rsp+C0h] [rbp+17h] BYREF
  struct D2D_RECT_F v22; // [rsp+D0h] [rbp+27h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 17) == 3 || *((_DWORD *)this + 17) == 4 && CDirectFlipInfo::RenderingRealizationChanged(this))
    && *((_QWORD *)this + 6) )
  {
    v20 = 0;
    CMILMatrix::SetToInverse(v19, a3);
    FastRegion::Internal::CRgnData::BeginIterator(*v7, (struct FastRegion::CRegion::Iterator *)v14);
    while ( (unsigned __int64)v16 < v15 )
    {
      v13[1] = *v16;
      v13[3] = v16[2];
      v8 = 2 * v18;
      v13[0] = *(_DWORD *)(v17 + 4 * v8);
      v13[2] = *(_DWORD *)(v17 + 4 * v8 + 4);
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v21[i] = (float)(int)v13[i];
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v19, (__int64)v21, &v22.left);
      v10 = CDirtyRegion::Add(a2, 0LL, 0, &v22);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v10, 0x296u, 0LL);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v14);
    }
  }
  return v3;
}
