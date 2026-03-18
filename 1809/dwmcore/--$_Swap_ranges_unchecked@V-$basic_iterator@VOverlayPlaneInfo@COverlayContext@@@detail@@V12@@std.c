/*
 * XREFs of ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800D54DC
 * Callers:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1800D53D8 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x1801681F0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180168710 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801687A4 (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Swap_ranges_unchecked<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>,detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v10; // r9
  _BYTE v11[256]; // [rsp+20h] [rbp-138h] BYREF

  v4 = *a4;
  while ( *a2 != *a3 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v11, *a2);
    COverlayContext::OverlayPlaneInfo::operator=(v10, v4);
    COverlayContext::OverlayPlaneInfo::operator=(v4, v11);
    COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v11);
    *a2 += 256LL;
    *a4 += 256LL;
    v4 = *a4;
  }
  *a1 = v4;
  return a1;
}
