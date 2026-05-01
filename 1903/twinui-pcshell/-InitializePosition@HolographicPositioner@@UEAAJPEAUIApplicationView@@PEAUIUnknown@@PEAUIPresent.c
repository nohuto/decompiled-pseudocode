/*
 * XREFs of ?InitializePosition@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1802010B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008CFC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180201150 (-InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknow.c)
 */

__int64 __fastcall HolographicPositioner::InitializePosition(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    (__int64)a3);
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    v10);
  if ( v10[0] )
  {
    v7 = HolographicPositioner::InitializePositionWithShowCommand(
           (HolographicPositioner *)((char *)this + 8),
           a2,
           a3,
           0LL,
           0LL);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F1,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v8 = 0;
  }
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v10);
  return v8;
}
