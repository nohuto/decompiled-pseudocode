/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VControlCenterExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18014D170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014C9E0 (--$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<ControlCenterExperienceManagerFactory,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v8 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<ControlCenterExperienceManagerFactory,IUnknown,>(&v8);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v8)(v8, a3, a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  }
  return (unsigned int)v6;
}
