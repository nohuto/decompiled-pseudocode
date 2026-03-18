/*
 * XREFs of ?Initialize@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00A6140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionAmbientLightMarshaler::Initialize(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 72) = 1;
  result = 0LL;
  *((_DWORD *)this + 24) = 1065353216;
  *((_OWORD *)this + 5) = xmmword_1C01E2C00;
  return result;
}
