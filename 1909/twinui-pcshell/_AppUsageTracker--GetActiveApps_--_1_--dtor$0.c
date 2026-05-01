/*
 * XREFs of _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x1800B4E62
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180085288 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 */

__int64 __fastcall AppUsageTracker::GetActiveApps_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::vector<std::wstring>::~vector<std::wstring>();
  }
  return result;
}
