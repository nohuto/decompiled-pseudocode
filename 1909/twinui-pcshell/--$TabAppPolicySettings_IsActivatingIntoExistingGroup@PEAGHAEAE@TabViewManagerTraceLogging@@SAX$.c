/*
 * XREFs of ??$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAG$$QEAHAEAE@Z @ 0x180264190
 * Callers:
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180264A60 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x180076450 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180251374 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabAppPolicySettings_IsActivatingIntoExistingGroup_@TabViewManagerTraceLogging@@QEAAXPEBGH_N@Z @ 0x180264EE4 (-TabAppPolicySettings_IsActivatingIntoExistingGroup_@TabViewManagerTraceLogging@@QEAAXPEBGH_N@Z.c)
 */

void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup<unsigned short *,int,unsigned char &>(
        const unsigned __int16 **a1,
        int *a2,
        _BYTE *a3)
{
  TabViewManagerTraceLogging *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_1805C22D0;
        qword_1805C22D0 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v8);
      }
    }
    TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup_(v6, *a1, *a2, *a3 != 0);
  }
}
