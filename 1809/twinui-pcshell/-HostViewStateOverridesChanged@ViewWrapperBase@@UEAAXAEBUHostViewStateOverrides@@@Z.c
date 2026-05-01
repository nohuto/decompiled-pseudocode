/*
 * XREFs of ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x180242450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$HostViewStateOverridesChanged@AEAIAEBW4State@HostViewStateOverrides@@AEBW4VIEW_PRESENTATION_MODE@@@ViewManagerInteropTraceLogging@@SAXAEAIAEBW4State@HostViewStateOverrides@@AEBW4VIEW_PRESENTATION_MODE@@@Z @ 0x18023E5F8 (--$HostViewStateOverridesChanged@AEAIAEBW4State@HostViewStateOverrides@@AEBW4VIEW_PRESENTATION_M.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180242D60 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180242D9C (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x180247090 (-s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA-AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewSt.c)
 */

void __fastcall ViewWrapperBase::HostViewStateOverridesChanged(
        ViewWrapperBase *this,
        const struct HostViewStateOverrides *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // al
  char v8; // bl
  _BYTE v9[48]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v10[48]; // [rsp+50h] [rbp-58h] BYREF

  ViewManagerInteropTraceLogging::HostViewStateOverridesChanged<unsigned int &,enum HostViewStateOverrides::State const &,enum VIEW_PRESENTATION_MODE const &>(
    (int *)this + 35,
    (int *)a2,
    (int *)a2 + 1);
  ViewWrapperBase::s_ComputeAggregatedViewData(v4, v10, (char *)this + 212, (char *)this + 256);
  ViewWrapperBase::s_ComputeAggregatedViewData(v5, v9, v6, a2);
  v7 = (*(__int64 (__fastcall **)(char *, _BYTE *, _BYTE *))(*((_QWORD *)this - 1) + 128LL))((char *)this - 8, v10, v9);
  *((_QWORD *)this + 32) = *(_QWORD *)a2;
  v8 = v7;
  ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
    (ViewWrapperBase *)((char *)this - 8),
    (const struct APPLICATION_VIEW_DATA *)v10,
    (const struct APPLICATION_VIEW_DATA *)v9);
  if ( v8 )
  {
    if ( *((_BYTE *)this + 508) )
      ViewWrapperBase::PushDesiredBoundsToView(
        (ViewWrapperBase *)((char *)this - 8),
        (const struct APPLICATION_VIEW_DATA *)v9);
  }
}
