/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ea27fc5d667820da3627d864690b6295___ @ 0x180065F38
 * Callers:
 *     ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180065E8C (-SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ea27fc5d667820da3627d864690b6295___(
        unsigned int a1,
        unsigned int a2,
        __int128 *a3)
{
  unsigned int v5; // esi
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbp
  _DWORD *v9; // rbx
  __int128 v10; // xmm0
  int v11; // ebx
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v16, (APTTYPEQUALIFIER *)&v13) < 0 || !v16 || v16 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v15 = 0;
  v6 = 0LL;
  v14 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    v7[3] = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v10 = *a3;
    v6 = v9;
    *(_QWORD *)v9 = off_18042A498;
    v8 = v9;
    *((_QWORD *)v9 + 4) = &v15;
    *((_OWORD *)v9 + 1) = v10;
  }
  v11 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v6, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 >= 0 )
    return v15;
  return (unsigned int)v11;
}
