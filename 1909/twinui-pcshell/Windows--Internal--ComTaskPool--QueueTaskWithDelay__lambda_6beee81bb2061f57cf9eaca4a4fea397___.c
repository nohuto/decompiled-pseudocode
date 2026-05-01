/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___ @ 0x1801E0944
 * Callers:
 *     ?InstallAppFromStore@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801E5C1C (-InstallAppFromStore@CortanaStoreAppHelper@@YAJV-$ComPtr@UIOneSettingsPayload@OneSettings@Flight.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  _DWORD *v4; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  _DWORD *v8; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx

  v4 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v4 = v8;
    v8[4] = *a4;
    v7 = v8;
    *(_QWORD *)v8 = off_18045DA78;
  }
  CurrentThreadId = GetCurrentThreadId();
  v10 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
