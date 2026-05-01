/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::CreateAppUsageTracker_::_1_::dtor$2 @ 0x1800B4C39
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B4A40 (--1-$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::CreateAppUsageTracker_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~2u;
    return Microsoft::WRL::ComPtr<AppUsageTracker>::~ComPtr<AppUsageTracker>((__int64 *)(a2 + 48));
  }
  return result;
}
