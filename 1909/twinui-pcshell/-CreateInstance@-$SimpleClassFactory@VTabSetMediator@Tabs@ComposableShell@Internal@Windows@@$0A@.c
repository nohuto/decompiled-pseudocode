/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180282DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180281E5C (--$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<Windows::Internal::ComposableShell::Tabs::TabSetMediator,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  Windows::Internal::ComposableShell::Tabs::TabSetMediator *v8; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v8 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabSetMediator,IUnknown,>(&v8);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(Windows::Internal::ComposableShell::Tabs::TabSetMediator *, __int64, _QWORD *))v8)(
             v8,
             a3,
             a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  }
  return (unsigned int)v6;
}
