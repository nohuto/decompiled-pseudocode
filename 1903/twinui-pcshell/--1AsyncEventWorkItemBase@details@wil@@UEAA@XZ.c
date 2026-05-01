/*
 * XREFs of ??1AsyncEventWorkItemBase@details@wil@@UEAA@XZ @ 0x1801FE860
 * Callers:
 *     ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@UEAA@XZ @ 0x1800A16B0 (--1AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::AsyncEventWorkItemBase::~AsyncEventWorkItemBase(
        wil::details::AsyncEventWorkItemBase *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // r8

  *(_QWORD *)this = &wil::details::AsyncEventWorkItemBase::`vftable';
  v1 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v1 )
    (**v1)(v1, 1LL);
}
