/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___ @ 0x18010BD14
 * Callers:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019580 (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // ebx

  v3 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v3 = v6;
    v6[2] = *a2;
    v5 = v6;
    *v6 = off_180432F70;
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v3, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return v8;
}
