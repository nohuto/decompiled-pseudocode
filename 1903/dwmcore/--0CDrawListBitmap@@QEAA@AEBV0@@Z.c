/*
 * XREFs of ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180072A1C
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180072E40 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180205F24 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x180258690 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, const struct CDrawListBitmap *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 1);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  return this;
}
