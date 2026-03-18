/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FF39C
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801A7970 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800B0530 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800B0AF4 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801FFA0C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IImageSource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx

  v8 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    v9 = CShape::CopyShape(a3, 0LL, (struct CShape **)this + 1);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x33u, 0LL);
    }
    else
    {
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this, (__int64)a2);
      *((_OWORD *)this + 1) = *(_OWORD *)a4;
      *((_OWORD *)this + 2) = *((_OWORD *)a4 + 1);
      *((_OWORD *)this + 3) = *((_OWORD *)a4 + 2);
      *((_OWORD *)this + 4) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 20) = *((_DWORD *)a4 + 16);
      CMILMatrix::SetToInverse((__m128 *)((char *)this + 84), a4);
    }
  }
  return v8;
}
