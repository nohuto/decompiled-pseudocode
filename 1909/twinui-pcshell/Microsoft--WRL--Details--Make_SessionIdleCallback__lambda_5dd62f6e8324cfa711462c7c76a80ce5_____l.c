/*
 * XREFs of Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5__&_ @ 0x180432A34
 * Callers:
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x180432E98 (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180078F90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___ @ 0x180432AC4 (SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___--SessionIdleCallback__lambda_5dd.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5____(
        __int64 *a1,
        __int64 *a2)
{
  void *v4; // rbx
  __int64 v5; // rcx
  volatile int *v6; // rdx
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    v9[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v9[1] = a2[1];
    v7 = SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___(
           v4,
           v9);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
        *a1,
        v6);
    *a1 = v7;
  }
  return a1;
}
