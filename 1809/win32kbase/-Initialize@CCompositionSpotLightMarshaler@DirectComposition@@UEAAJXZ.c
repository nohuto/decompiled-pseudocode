/*
 * XREFs of ?Initialize@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0089BC0
 * Callers:
 *     ?InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0182C60 (-InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::Initialize(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_QWORD *)this + 10) = 1065353216LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1120403456;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_DWORD *)this + 31) = -1082130432;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  result = 0LL;
  *(_OWORD *)((char *)this + 136) = xmmword_1C019D208;
  *((_BYTE *)this + 72) = 1;
  *((_DWORD *)this + 32) = 1057360530;
  *((_DWORD *)this + 33) = 1070141403;
  *(_OWORD *)((char *)this + 152) = xmmword_1C019D208;
  return result;
}
