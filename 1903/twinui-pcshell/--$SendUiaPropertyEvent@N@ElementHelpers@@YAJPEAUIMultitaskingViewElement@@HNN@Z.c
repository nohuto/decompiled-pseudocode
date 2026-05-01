/*
 * XREFs of ??$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z @ 0x18037C670
 * Callers:
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x18037D664 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x18037DAD8 (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ElementHelpers::SendUiaPropertyEvent<double>(__int64 a1, PROPERTYID a2, DOUBLE a3, DOUBLE a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT v8; // eax
  VARIANTARG pvarg; // [rsp+28h] [rbp-39h] BYREF
  VARIANTARG v11; // [rsp+40h] [rbp-21h] BYREF
  VARIANT newValue; // [rsp+58h] [rbp-9h] BYREF
  VARIANT oldValue; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  IRawElementProviderSimple *pProvider; // [rsp+D8h] [rbp+77h] BYREF

  if ( a3 == a4
    || !UiaClientsAreListening()
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1) )
  {
    return 0LL;
  }
  pProvider = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL))(
         a1,
         &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
         &pProvider);
  v7 = v6;
  if ( v6 >= 0 )
  {
    pvarg.dblVal = a4;
    pvarg.vt = 5;
    v11.vt = 5;
    v11.dblVal = a3;
    newValue = pvarg;
    oldValue = v11;
    v8 = UiaRaiseAutomationPropertyChangedEvent(pProvider, a2, &oldValue, &newValue);
    v7 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
        (const char *)(unsigned int)v8);
    VariantClear(&pvarg);
    VariantClear(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  return v7;
}
