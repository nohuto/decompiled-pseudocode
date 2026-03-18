/*
 * XREFs of ?ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180208088
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180060130 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ContributeRegionToDirty(
        FastRegion::Internal::CRgnData **a1,
        const struct CMILMatrix *a2,
        struct CDirtyRegion *a3)
{
  FastRegion::Internal::CRgnData *v3; // rcx
  __int64 v6; // rdx
  __int64 i; // rax
  int v8; // eax
  FastRegion::Internal::CRgnData *v9; // rcx
  unsigned int v10; // ebx
  _DWORD v12[4]; // [rsp+20h] [rbp-29h]
  _BYTE v13[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-11h]
  _DWORD *v15; // [rsp+40h] [rbp-9h]
  __int64 v16; // [rsp+48h] [rbp-1h]
  int v17; // [rsp+50h] [rbp+7h]
  _DWORD v18[4]; // [rsp+60h] [rbp+17h] BYREF
  float v19[4]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v3 = *a1;
  if ( *(_DWORD *)v3 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(v3, (struct FastRegion::CRegion::Iterator *)v13);
    while ( (unsigned __int64)v15 < v14 )
    {
      v12[1] = *v15;
      v12[3] = v15[2];
      v6 = 2 * v17;
      v12[0] = *(_DWORD *)(v16 + 4 * v6);
      v12[2] = *(_DWORD *)(v16 + 4 * v6 + 4);
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v18[i] = (float)(int)v12[i];
      CMILMatrix::Transform2DBoundsHelper<0>(a2, (__int64)v18, v19);
      v8 = CDirtyRegion::Add(a3, 0LL, 0LL, (__int64)v19);
      v10 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A5,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)(unsigned int)v8);
        return v10;
      }
      FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v13);
    }
  }
  return 0LL;
}
