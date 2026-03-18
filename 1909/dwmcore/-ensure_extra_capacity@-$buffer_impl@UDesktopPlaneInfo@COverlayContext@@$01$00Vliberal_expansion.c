/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180186418
 * Callers:
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x1801869A8 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18018148C (--$uninitialized_copy@V-$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = (const char *)a1[2];
  v4 = a1[1];
  result = (unsigned __int64)&v3[((unsigned __int128)((__int64)&v3[-v4] * (__int128)(__int64)0x8888888888888889uLL) >> 64)
                               - v4] >> 63;
  if ( (__int64)&v3[-v4] / 120 < a2 )
  {
    v6 = (v4 - *a1) / 120;
    if ( v6 + a2 < v6 )
      std::_Xoverflow_error(v3);
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)&v3[-*a1],
           (__int64)&v3[-*a1] / 120,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 0x78uLL));
    v9 = a1[1];
    v10 = *a1;
    *(_QWORD *)&v14 = v8;
    *((_QWORD *)&v14 + 1) = v6;
    v11 = (__int64)v8;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    std::uninitialized_copy<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
      (__int64)&v14,
      v10,
      v9,
      &v16);
    v12 = (void *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    a1[1] = *a1 + 120 * v6;
    result = *a1 + 120 * v7;
    a1[2] = result;
  }
  return result;
}
