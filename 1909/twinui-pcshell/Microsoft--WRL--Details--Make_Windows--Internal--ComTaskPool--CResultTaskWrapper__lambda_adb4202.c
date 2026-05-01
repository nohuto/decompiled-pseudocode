/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b____long_&__lambda_adb4202210a1cd7d97551f2a3dbe735b___ @ 0x180070A38
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b___ @ 0x180070980 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b____long____lambda_adb4202210a1cd7d97551f2a3dbe735b___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v6; // rax
  volatile int *v7; // rdx
  _OWORD *v8; // rbx

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8[1] = *(_OWORD *)a3;
    *((_QWORD *)v8 + 4) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)v8 = off_18044A9B0;
    *((_QWORD *)v8 + 5) = a2;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v7);
    *a1 = (__int64)v8;
  }
  return a1;
}
