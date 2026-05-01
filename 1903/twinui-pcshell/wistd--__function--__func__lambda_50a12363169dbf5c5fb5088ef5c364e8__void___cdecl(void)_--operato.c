/*
 * XREFs of wistd::__function::__func__lambda_50a12363169dbf5c5fb5088ef5c364e8__void___cdecl(void)_::operator() @ 0x180179940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18017AF58 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_50a12363169dbf5c5fb5088ef5c364e8__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::WeakRef *)(a1 + 16),
    &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20,
    &v6);
  v3 = CControlCenterExperienceManager::PostTargetedMessage(*(_QWORD *)(a1 + 8), 0LL, v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DF,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
