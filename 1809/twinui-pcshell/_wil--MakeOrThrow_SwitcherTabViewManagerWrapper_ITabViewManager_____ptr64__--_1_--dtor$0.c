/*
 * XREFs of _wil::MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager_____ptr64__::_1_::dtor$0 @ 0x180266EEB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18026AE74 (--1-$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::~ComPtr<SwitcherTabViewManagerWrapper>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
