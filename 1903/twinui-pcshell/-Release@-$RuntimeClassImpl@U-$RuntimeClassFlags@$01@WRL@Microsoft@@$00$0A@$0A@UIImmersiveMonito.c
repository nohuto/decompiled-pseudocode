/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180121960
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180378864 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5__&_ @ 0x1804133B0 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____l.c)
 *     Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____::_ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____ @ 0x1804134C4 (Microsoft--WRL--ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____--_ComPt.c)
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x180413818 (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 3);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
