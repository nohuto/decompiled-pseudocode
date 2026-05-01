/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_____lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___ @ 0x1802440D0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___ @ 0x180245EC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802484F4 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflect_ea_1802484F4.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_____lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2[1];
  a2[1] = 0LL;
  a1[3] = v4;
  v5 = a2[2];
  a2[2] = 0LL;
  a1[4] = v5;
  a1[5] = a2[3];
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 6));
  a1[6] = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  *a1 = off_180465B40;
  return a1;
}
