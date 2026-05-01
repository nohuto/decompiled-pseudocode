/*
 * XREFs of ?CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z @ 0x1800BAB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1800BB648 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::CancelTerminateApp(Win32AppStateManager *this, unsigned __int16 *a2)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-30h] BYREF

  std::wstring::wstring((__int64)v3, a2);
  Win32AppStateManager::RemoveAppFromTerminationTarget(this, v3, 0LL);
  std::wstring::_Tidy_deallocate(v3);
}
