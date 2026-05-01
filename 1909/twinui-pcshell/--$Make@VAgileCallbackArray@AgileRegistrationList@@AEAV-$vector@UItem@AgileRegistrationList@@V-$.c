/*
 * XREFs of ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18008EBE8
 * Callers:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180032690 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005C530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18008F19C (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<AgileRegistrationList::AgileCallbackArray,std::vector<AgileRegistrationList::Item> &>(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = AgileRegistrationList::AgileCallbackArray::AgileCallbackArray(v4, a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v5);
    *a1 = v6;
  }
  return a1;
}
