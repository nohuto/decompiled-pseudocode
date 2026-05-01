/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x1802F1058
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802F4390 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rax
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ebx

  v0 = 0LL;
  v1 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = 0LL;
  v3 = v1;
  if ( v1 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v1);
    v0 = v3;
    *v3 = off_18042E8B8;
    v2 = v3;
  }
  CurrentThreadId = GetCurrentThreadId();
  v5 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v0, 0LL);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v0 + 16LL))(v0);
  return v5;
}
