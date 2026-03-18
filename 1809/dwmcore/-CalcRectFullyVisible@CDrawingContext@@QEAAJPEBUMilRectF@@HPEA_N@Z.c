/*
 * XREFs of ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x180161F34
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180176CDC (-ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CDrawingContext::CalcRectFullyVisible(
        CDrawingContext *this,
        const struct MilRectF *a2,
        int a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // edi
  char *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rax
  CMILMatrix *TopByReference; // rax
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v18[4]; // [rsp+40h] [rbp-79h] BYREF
  int v19; // [rsp+44h] [rbp-75h] BYREF
  __int128 v20; // [rsp+48h] [rbp-71h] BYREF
  float v21[4]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-51h] BYREF
  char v23; // [rsp+78h] [rbp-41h] BYREF
  char v24[16]; // [rsp+90h] [rbp-29h] BYREF
  char v25; // [rsp+A0h] [rbp-19h] BYREF
  char v26; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0;
  v9 = 0;
  if ( *((_BYTE *)this + 6347) && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)this + 280) )
  {
    v18[0] = 0;
    v19 = 0;
    `vector constructor iterator'(
      v24,
      16LL,
      4LL,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v22[0] = v24;
    v10 = &v26;
    v22[1] = &v25;
    v11 = 2LL;
    v12 = &v23;
    do
    {
      *(_QWORD *)v12 = v10;
      v10 += 16;
      v12 += 8;
      --v11;
    }
    while ( v11 );
    v20 = *(_OWORD *)a2;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, (__int64)&v20, v21);
    v15 = COcclusionContext::ComputeVisibleRegion(
            *((_QWORD *)this + 784),
            (unsigned int)v21,
            a3,
            v14,
            (__int64)v18,
            (__int64)v22,
            (__int64)&v19);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xF1Eu);
      return v9;
    }
    v4 = v18[0] == 0;
  }
  *a4 = v4;
  return v9;
}
