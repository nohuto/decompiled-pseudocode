/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f__&_ @ 0x18005C3D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___::Run @ 0x18005C300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___--Run.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f____(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  PVOID Ptr; // rsi
  __int64 v5; // r14
  unsigned int v6; // r15d
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  PVOID v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v13 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v5 = *a2;
  v14 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (unsigned int)v2[15].Ptr;
  v7 = 0LL;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  v10 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 3) = 1;
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v10[2] = 0LL;
    if ( v10 + 2 != &v13 )
    {
      v10[2] = Ptr;
      Ptr = 0LL;
    }
    v10[3] = 0LL;
    if ( v10 + 3 != &v14 )
    {
      v10[3] = v5;
      v5 = 0LL;
    }
    v7 = v10;
    *v10 = off_180449148;
    v9 = v10;
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v11;
}
