/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801BDA8C
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180159830 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x180064294 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801BE0B8 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IImageSource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v8 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    v9 = CShape::CopyShape(a3, 0LL, (struct CShape **)this + 1);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x36u);
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
