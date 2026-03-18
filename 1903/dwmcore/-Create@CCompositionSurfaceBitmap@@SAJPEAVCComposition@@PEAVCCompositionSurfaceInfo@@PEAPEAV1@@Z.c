/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801C7FD0
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18024EB1C (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002A43C (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CTranslateTransform@@KAPEAX_K@Z @ 0x1800D0494 (--2CTranslateTransform@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // edi
  CMILCOMBase *v7; // rax
  __int64 v8; // rcx
  CMILCOMBase *v9; // rbx

  v3 = 0;
  *a3 = 0LL;
  v7 = (CMILCOMBase *)CTranslateTransform::operator new();
  v9 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 2) = a1;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_DWORD *)v7 + 8) = 0;
    *(_QWORD *)v7 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
    *((_QWORD *)v7 + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
    *((_QWORD *)v7 + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
    *((_QWORD *)v7 + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
    *((_QWORD *)v7 + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
    *((_QWORD *)v7 + 18) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    CMILCOMBase::InternalAddRef(v9);
    CCompositionSurfaceBitmap::UpdateSurfaceInfo(v9, a2);
    *a3 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x1Eu, 0LL);
  }
  return v3;
}
