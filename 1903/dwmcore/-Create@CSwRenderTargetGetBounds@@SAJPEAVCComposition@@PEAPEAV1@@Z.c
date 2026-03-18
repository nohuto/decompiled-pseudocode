/*
 * XREFs of ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800D3F98
 * Callers:
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180048610 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800D4090 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Create(struct CComposition *a1, struct CSwRenderTargetGetBounds **a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rbx
  unsigned int v8; // edi
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF

  v4 = (char *)operator new(0x48uLL);
  v6 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 8) = 1;
    *((_DWORD *)v4 + 12) = 0;
    *(_QWORD *)v4 = &CSwRenderTargetGetBounds::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 2) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
    *((_QWORD *)v4 + 3) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
    *((_QWORD *)v4 + 5) = a1;
    v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    *(_OWORD *)(v4 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)&v10 = v6;
  if ( v6 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v6);
    if ( (*((_DWORD *)v6 + 8))++ == -1 )
      *((_DWORD *)v6 + 8) = 1;
    v8 = 0;
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    *(_QWORD *)&v10 = 0LL;
    *(_OWORD *)(v6 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    *a2 = (struct CSwRenderTargetGetBounds *)v6;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x2Fu, 0LL);
  }
  ReleaseInterface<CSwRenderTargetGetBounds>(&v10);
  return v8;
}
