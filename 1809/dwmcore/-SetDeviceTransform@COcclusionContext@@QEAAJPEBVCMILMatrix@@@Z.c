/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180045FF0
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180014770 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  unsigned int v2; // ebp
  char v3; // si
  const struct CMILMatrix *v4; // rdi
  const struct CMILMatrix *v6; // rdx
  unsigned int v8; // ecx
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  __int128 v14; // xmm1
  _OWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = 0;
  v4 = a2;
  if ( a2 && !CMILMatrix::IsIdentity<0>((__int64)a2) )
  {
    v16 = 0;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v15, v6) )
    {
      if ( !*((_BYTE *)this + 816) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 820, v4) )
        v3 = 1;
      *(_OWORD *)((char *)this + 820) = *(_OWORD *)v4;
      *(_OWORD *)((char *)this + 836) = *((_OWORD *)v4 + 1);
      *(_OWORD *)((char *)this + 852) = *((_OWORD *)v4 + 2);
      v9 = v15[0];
      *(_OWORD *)((char *)this + 868) = *((_OWORD *)v4 + 3);
      v10 = *((_DWORD *)v4 + 16);
      v11 = v15[1];
      *(_OWORD *)((char *)this + 888) = v9;
      *((_DWORD *)this + 221) = v10;
      v12 = v15[2];
      v13 = v16;
      *(_OWORD *)((char *)this + 904) = v11;
      *((_BYTE *)this + 816) = 1;
      v14 = v15[3];
      *(_OWORD *)((char *)this + 920) = v12;
      *(_OWORD *)((char *)this + 936) = v14;
      *((_DWORD *)this + 238) = v13;
    }
    else
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003304441, 0x90u);
    }
  }
  else
  {
    if ( *((_BYTE *)this + 816) )
    {
      *((_BYTE *)this + 816) = 0;
      v3 = 1;
    }
    v4 = 0LL;
    *(_OWORD *)((char *)this + 820) = _xmm;
    *((_WORD *)this + 442) = 32085;
    *(_OWORD *)((char *)this + 836) = _xmm;
    *(_OWORD *)((char *)this + 852) = _xmm;
    *(_OWORD *)((char *)this + 868) = _xmm;
    *((_WORD *)this + 476) = 32085;
    *(_OWORD *)((char *)this + 888) = _xmm;
    *(_OWORD *)((char *)this + 904) = _xmm;
    *(_OWORD *)((char *)this + 920) = _xmm;
    *(_OWORD *)((char *)this + 936) = _xmm;
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, const struct CMILMatrix *))(**((_QWORD **)this + 49) + 24LL))(
      *((_QWORD *)this + 49),
      v4);
  return v2;
}
