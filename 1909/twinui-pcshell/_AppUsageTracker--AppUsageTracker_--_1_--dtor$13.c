/*
 * XREFs of _AppUsageTracker::AppUsageTracker_::_1_::dtor$13 @ 0x1800B49DD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B63B0 (--1-$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall AppUsageTracker::AppUsageTracker_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 168) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 168) &= ~2u;
    return Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(a2 + 152);
  }
  return result;
}
