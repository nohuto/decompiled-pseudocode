/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$37 @ 0x180226D3A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E6C (--1-$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_37(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 0x10;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~0x10u;
    return Microsoft::WRL::ComPtr<WindowingEnvironmentSettings>::~ComPtr<WindowingEnvironmentSettings>((__int64 *)(a2 + 144));
  }
  return result;
}
