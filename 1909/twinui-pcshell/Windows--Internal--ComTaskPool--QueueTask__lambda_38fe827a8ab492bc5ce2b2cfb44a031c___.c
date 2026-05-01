/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_38fe827a8ab492bc5ce2b2cfb44a031c___ @ 0x180067EC0
 * Callers:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180067DE4 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_38fe827a8ab492bc5ce2b2cfb44a031c___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  unsigned int v10; // ebx

  v4 = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v9[2] = 0LL;
    if ( v9 + 2 != a4 )
    {
      v9[2] = *a4;
      *a4 = 0LL;
    }
    v4 = v9;
    *v9 = off_1804496C8;
    v8 = v9;
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v10;
}
