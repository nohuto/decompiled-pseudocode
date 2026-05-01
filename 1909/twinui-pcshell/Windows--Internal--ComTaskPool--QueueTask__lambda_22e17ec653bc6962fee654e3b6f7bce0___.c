/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_22e17ec653bc6962fee654e3b6f7bce0___ @ 0x180027CCC
 * Callers:
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180027BC0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_22e17ec653bc6962fee654e3b6f7bce0___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rsi
  unsigned int v12; // ebx

  v4 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9[2] = 0LL;
    if ( v9 + 2 != a4 )
    {
      v9[2] = *a4;
      *a4 = 0LL;
    }
    v9[3] = a4[1];
    v10 = a4[2];
    v11 = a4 + 3;
    v9[4] = v10;
    v9[5] = 0LL;
    if ( v9 + 5 != v11 )
    {
      v9[5] = *v11;
      *v11 = 0LL;
    }
    v4 = v9;
    *v9 = off_180446650;
    v8 = v9;
  }
  v12 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v12;
}
