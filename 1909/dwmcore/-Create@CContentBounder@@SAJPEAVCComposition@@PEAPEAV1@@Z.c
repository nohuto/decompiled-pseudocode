/*
 * XREFs of ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024F30
 * Callers:
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180024BA0 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?Initialize@CDrawingContext@@EEAAJXZ @ 0x180024F00 (-Initialize@CDrawingContext@@EEAAJXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180081E30 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CContentBounder::Create(struct CComposition *a1, struct CContentBounder **a2)
{
  unsigned int v2; // ebx
  struct CContentBounder *v5; // rax
  unsigned int v6; // ecx

  v2 = 0;
  *a2 = 0LL;
  v5 = (struct CContentBounder *)operator new(0x18uLL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = a1;
    *a2 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x4Bu, 0LL);
  }
  return v2;
}
