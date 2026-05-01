/*
 * XREFs of ?CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FFA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HolographicPositioner_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180200F18 (-HolographicPositioner_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180201F58 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis@@@w.c)
 */

__int64 __fastcall HolographicPositionerFactory::CreateInstance(
        HolographicPositionerFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositionerfactory.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis>::ReportUsageToService(this);
    return HolographicPositioner_CreateInstance(a3, a4);
  }
}
