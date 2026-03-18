/*
 * XREFs of ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01AEA30
 * Callers:
 *     ?SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01B0190 (-SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01BEF70 (-SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01BF5D0 (-SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01BFEB0 (-SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01C0460 (-SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01C06D0 (-SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01C07F0 (-SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01C0940 (-SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplication.c)
 *     ?SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01C0C40 (-SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ecx

  if ( (a3 & 0xC0000000) == 0x80000000 && (v6 = a3 & 0x3FFFFFFF, (unsigned int)v6 < *((_DWORD *)this + 12)) )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = 0;
    *(_DWORD *)(v7 + 4 * v6) = a4;
    *((_DWORD *)this + 20) = 0;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
