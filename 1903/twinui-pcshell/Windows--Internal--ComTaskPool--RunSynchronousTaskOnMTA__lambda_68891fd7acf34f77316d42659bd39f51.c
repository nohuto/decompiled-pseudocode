/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68891fd7acf34f77316d42659bd39f51___ @ 0x180034148
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180035490 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x1802A7364 (-PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68891fd7acf34f77316d42659bd39f51___(
        unsigned int a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  int v10; // ebx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v15, (APTTYPEQUALIFIER *)&v12) < 0 || !v15 || v15 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v14 = 0;
  v6 = 0LL;
  v13 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6 = v9;
    v9[2] = *a3;
    v8 = v9;
    *v9 = off_180426D88;
    v9[3] = &v14;
  }
  v10 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v6, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  if ( v10 >= 0 )
    return v14;
  return (unsigned int)v10;
}
