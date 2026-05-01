/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_47c4ee998602912f584be58de1a81d16__&___ptr64_ @ 0x18017736C
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18017938C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_47c4ee998602912f584be58de1a81d16______ptr64_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx

  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
    v7[2] = *a4;
    v7[3] = a4[1];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7 + 3);
    v6 = v7;
    *v7 = off_1803D6840;
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 1000LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v9;
}
