/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FDCAC
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801A60B0 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180028BD0 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18002AD78 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801FE31C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        struct CShape **this,
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
    v9 = CShape::CopyShape(a3, 0LL, this + 1);
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
      CMILMatrix::SetToInverse((CMILMatrix *)((char *)this + 84), a4);
    }
  }
  return v8;
}
