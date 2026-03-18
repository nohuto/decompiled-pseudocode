/*
 * XREFs of ?clear@?$list@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x180031028
 * Callers:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x18003084C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x180030DA8 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD **__fastcall std::list<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD **result; // rax
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  result = *(_QWORD ***)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v2 + 3);
      result = (_QWORD **)std::_Deallocate<16,0>(v2, 32LL);
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return result;
}
