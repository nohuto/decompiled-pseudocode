/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____lambda_2d66124cdfcf65a08201bdfe6f61e828____::_1_::dtor$0 @ 0x18024E56F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800946AC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____lambda_2d66124cdfcf65a08201bdfe6f61e828____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
