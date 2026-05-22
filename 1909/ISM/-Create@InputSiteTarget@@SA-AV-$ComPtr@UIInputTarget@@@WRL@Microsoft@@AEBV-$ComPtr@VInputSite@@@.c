/*
 * XREFs of ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x1800C7EA4
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C3874 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005633C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputSiteTarget@@QEAA@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1800C7DB8 (--0InputSiteTarget@@QEAA@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 */

_QWORD *__fastcall InputSiteTarget::Create(_QWORD *a1, _QWORD *a2)
{
  void *v4; // rax
  const char *v5; // r9
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4
    || (v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))InputSiteTarget::InputSiteTarget((__int64)v4, a2),
        (v7 = v6) == 0LL) )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      15LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputsitetarget.cpp",
      v5);
    JUMPOUT(0x1800C7F4CLL);
  }
  *a1 = 0LL;
  v8 = (**v6)(v6, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a1);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      18LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputsitetarget.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v7)[2])(v7);
  return a1;
}
