/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__&_ @ 0x1803C0414
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803C3540 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx

  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
    v8 = *a4;
    v7[2] = *a4;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 68));
    v6 = v7;
    *v7 = off_1804629C8;
  }
  CurrentThreadId = GetCurrentThreadId();
  v10 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 50LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v10;
}
