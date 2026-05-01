/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___ @ 0x1801C1924
 * Callers:
 *     ?InstallAppFromStore@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801C6BFC (-InstallAppFromStore@CortanaStoreAppHelper@@YAJV-$ComPtr@UIOneSettingsPayload@OneSettings@Flight.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  _DWORD *v5; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rsi
  _DWORD *v9; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ebx

  v5 = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v5 = v9;
    v9[4] = *a4;
    v8 = v9;
    *(_QWORD *)v9 = off_18043D818;
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, a2, v5, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  return v11;
}
