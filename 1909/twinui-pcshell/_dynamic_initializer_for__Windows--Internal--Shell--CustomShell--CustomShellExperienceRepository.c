/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180089000 (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008AC38 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__()
{
  __int64 v0; // rcx
  _QWORD v2[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v4[32]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v5; // [rsp+80h] [rbp-18h] BYREF

  v2[2] = -2LL;
  std::wstring::wstring(v3, L"Windows.Internal.Shell.ShellLauncher.ShellLauncherExperience");
  std::wstring::wstring(v4, L"Windows.Internal.AssignedAccess.AssignedAccessShellExperience");
  v2[0] = v3;
  v2[1] = &v5;
  std::vector<std::wstring>::vector<std::wstring>(v0, v2);
  `eh vector destructor iterator'(v3, 0x20uLL, 2uLL, std::wstring::~wstring);
  return atexit(dynamic_atexit_destructor_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__);
}
