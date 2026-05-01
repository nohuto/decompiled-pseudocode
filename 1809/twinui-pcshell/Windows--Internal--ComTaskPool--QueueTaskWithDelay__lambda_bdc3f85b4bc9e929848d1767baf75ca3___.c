/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x180205908
 * Callers:
 *     ?ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180206620 (-ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ebx

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v8[2] = *a4;
    v9 = a4[1];
    a4[1] = 0LL;
    v7 = v8;
    v8[3] = v9;
    v8[4] = a4[2];
    *v8 = off_1803DF9E0;
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 1000LL, v7, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v11;
}
