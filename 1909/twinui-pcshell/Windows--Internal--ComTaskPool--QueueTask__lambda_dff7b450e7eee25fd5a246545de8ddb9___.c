/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___ @ 0x18012AFE8
 * Callers:
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x18013F400 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  unsigned int v9; // ebx

  v4 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v4 = v8;
    *v8 = off_18044B560;
    v7 = v8;
  }
  v9 = SHTaskPoolQueueTask(3LL, a2, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v9;
}
