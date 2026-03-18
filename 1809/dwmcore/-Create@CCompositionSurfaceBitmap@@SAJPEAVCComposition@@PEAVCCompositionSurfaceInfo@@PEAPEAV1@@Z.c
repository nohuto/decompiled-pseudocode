/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180191F60
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18016D730 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??2CSurfaceBrush@@SAPEAX_K@Z @ 0x180071DB0 (--2CSurfaceBrush@@SAPEAX_K@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800A08C0 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  CMILCOMBase *v6; // rax
  __int64 v7; // rcx
  CMILCOMBase *v8; // rbx
  unsigned int v9; // edi
  int updated; // eax
  __int64 v11; // rcx

  *a3 = 0LL;
  v6 = (CMILCOMBase *)CSurfaceBrush::operator new();
  v8 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = a1;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
    *((_QWORD *)v6 + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
    *((_QWORD *)v6 + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
    *((_QWORD *)v6 + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
    *((_QWORD *)v6 + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    CMILCOMBase::InternalAddRef(v8);
    updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(v8, a2);
    v9 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x24u);
      CGdiSpriteBitmap::Release(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x21u);
  }
  return v9;
}
