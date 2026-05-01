/*
 * XREFs of ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x1802BABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18028D5CC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4Reporti.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0aaa16954d5ba34290bb28413c16e784___ @ 0x1802B45C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_0aaa16954d5ba34290bb28413c16e784___.c)
 *     ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1802B4CE4 (--$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802B7E78 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::ViewDestroyed(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  char *v8; // [rsp+28h] [rbp-18h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ViewWrapperBase *StringRawBuffer; // [rsp+60h] [rbp+20h] BYREF
  PCWSTR v12; // [rsp+68h] [rbp+28h] BYREF

  StringRawBuffer = (ViewWrapperBase *)WindowsGetStringRawBuffer(*((HSTRING *)this + 19), 0LL);
  v12 = WindowsGetStringRawBuffer(*((HSTRING *)this + 18), 0LL);
  ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
    (int *)this + 35,
    &v12,
    (LPCWSTR *)&StringRawBuffer);
  (*(void (__fastcall **)(ViewWrapperBase *, _QWORD, __int64))(*(_QWORD *)this + 816LL))(this, 0LL, 1LL);
  (*(void (__fastcall **)(ViewWrapperBase *, __int64, __int64))(*(_QWORD *)this + 816LL))(this, 1LL, 1LL);
  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockExclusive(v2);
  StringRawBuffer = (ViewWrapperBase *)v2;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 184LL))((char *)this - 8);
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this - 8, v5, 1);
  wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsageToService(v3, v5, v4);
  StringRawBuffer = (ViewWrapperBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&StringRawBuffer);
  v8 = (char *)this - 8;
  v9 = (__int64)this - 8;
  StringRawBuffer = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&StringRawBuffer);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_0aaa16954d5ba34290bb28413c16e784___(v6, &v8);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
