/*
 * XREFs of _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$40 @ 0x1800E5AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D844 (--1-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor_40(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 288) & 0x10;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 288) &= ~0x10u;
    return Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(a2 + 56);
  }
  return result;
}
