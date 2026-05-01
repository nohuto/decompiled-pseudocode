/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770_____lambda_6c4b80bdf74632827428df2b58c2a770___ @ 0x1801CDC60
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___ @ 0x1801D0558 (Windows--Internal--ComTaskPool--QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801D3BA4 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTa_ea_1801D3BA4.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770_____lambda_6c4b80bdf74632827428df2b58c2a770___(
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
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 6));
  a1[6] = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  *a1 = off_1803DDCF0;
  return a1;
}
