/*
 * XREFs of _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&___ptr64__::_1_::dtor$0 @ 0x180096121
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x180123224 (--1-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
