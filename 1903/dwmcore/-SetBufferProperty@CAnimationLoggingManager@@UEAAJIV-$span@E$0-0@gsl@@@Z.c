/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManager@@UEAAJIV?$span@E$0?0@gsl@@@Z @ 0x1801C0F60
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004599C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800459EC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180045A30 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::SetBufferProperty(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a2 == 3 )
  {
    v4 = std::wstring::wstring(v5);
    std::wstring::operator=((_OWORD *)(a1 + 152), (__int64)v4);
    std::wstring::_Tidy_deallocate(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
