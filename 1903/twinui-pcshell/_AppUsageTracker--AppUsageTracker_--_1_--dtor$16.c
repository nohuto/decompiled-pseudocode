/*
 * XREFs of _AppUsageTracker::AppUsageTracker_::_1_::dtor$16 @ 0x1800A60DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7A70 (--1-$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall AppUsageTracker::AppUsageTracker_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 168) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 168) &= ~8u;
    return Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(a2 + 48);
  }
  return result;
}
