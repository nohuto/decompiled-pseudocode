/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x18009002C
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001461C (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180096F30 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180028BD0 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  unsigned int v2; // ebp
  char v3; // si
  const struct CMILMatrix *v4; // rdi
  const struct CMILMatrix *v6; // rdx
  __int64 v8; // rcx
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
      if ( !*((_BYTE *)this + 824) || !CMILMatrix::IsEqualTo<0>((float *)this + 207, (float *)v4) )
        v3 = 1;
      *(_OWORD *)((char *)this + 828) = *(_OWORD *)v4;
      *(_OWORD *)((char *)this + 844) = *((_OWORD *)v4 + 1);
      *(_OWORD *)((char *)this + 860) = *((_OWORD *)v4 + 2);
      v9 = v15[0];
      *(_OWORD *)((char *)this + 876) = *((_OWORD *)v4 + 3);
      v10 = *((_DWORD *)v4 + 16);
      v11 = v15[1];
      *((_OWORD *)this + 56) = v9;
      *((_DWORD *)this + 223) = v10;
      v12 = v15[2];
      v13 = v16;
      *((_OWORD *)this + 57) = v11;
      *((_BYTE *)this + 824) = 1;
      v14 = v15[3];
      *((_OWORD *)this + 58) = v12;
      *((_OWORD *)this + 59) = v14;
      *((_DWORD *)this + 240) = v13;
    }
    else
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980007, 0x8Eu, 0LL);
    }
  }
  else
  {
    if ( *((_BYTE *)this + 824) )
    {
      *((_BYTE *)this + 824) = 0;
      v3 = 1;
    }
    v4 = 0LL;
    *(_OWORD *)((char *)this + 828) = _xmm;
    *((_WORD *)this + 446) = 32085;
    *(_OWORD *)((char *)this + 844) = _xmm;
    *(_OWORD *)((char *)this + 860) = _xmm;
    *(_OWORD *)((char *)this + 876) = _xmm;
    *((_WORD *)this + 480) = 32085;
    *((_OWORD *)this + 56) = _xmm;
    *((_OWORD *)this + 57) = _xmm;
    *((_OWORD *)this + 58) = _xmm;
    *((_OWORD *)this + 59) = _xmm;
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, const struct CMILMatrix *))(**((_QWORD **)this + 50) + 24LL))(
      *((_QWORD *)this + 50),
      v4);
  return v2;
}
