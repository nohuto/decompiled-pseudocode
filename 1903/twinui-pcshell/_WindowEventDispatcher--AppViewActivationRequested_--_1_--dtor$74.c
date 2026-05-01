/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$74 @ 0x1800C4C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180279F5C (--1-$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_74(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 84) & 0x200;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 84) &= ~0x200u;
    return Microsoft::WRL::ComPtr<WindowWrapper>::~ComPtr<WindowWrapper>(a2 + 384);
  }
  return result;
}
