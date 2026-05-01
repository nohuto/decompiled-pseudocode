/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027528
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180026940 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x180028570 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 * Callees:
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027694 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027954 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@@Z @ 0x1801AF9C4 (--$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4Hol.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int IsPropertySetContextHolographic; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v14 = 0LL;
  v12[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         v12) >= 0 )
  {
    v6 = v12[0];
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v14) >= 0
      && ((*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 328LL))(v14, 0LL)
       || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 328LL))(v14, 5LL)) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      return 0;
    }
  }
  v8 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v13 = 6;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v13) >= 0
    && (unsigned int)(v13 - 1) <= 3 )
  {
    LODWORD(v14) = 1;
  }
  else
  {
    IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(this, a3);
    if ( IsPropertySetContextHolographic == 2 )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      if ( IsPropertySetContextHolographic == 1 || !HolographicPositioner::_IsPropertySetHeuristicHolographic(this, a3) )
        return 0;
      LODWORD(v14) = 2;
    }
  }
  HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason>(&v14);
  return 1;
}
