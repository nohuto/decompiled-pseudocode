/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180004E34
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001ACF0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPoolHandler::FireCompletion(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IAsyncFireCompletion *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  bool v5; // r14
  struct Windows::Internal::IAsyncFireCompletion *v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  bool v9; // zf
  DWORD CurrentThreadId; // eax
  int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // eax
  Windows::Internal::ComTaskPoolHandler *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h]

  v15 = this;
  v2 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
    v15 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v16 = 0LL;
    v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      v7[3] = 1;
      if ( !v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v6 = v15;
      }
      *((_QWORD *)v7 + 2) = 0LL;
      if ( v7 + 4 != (_DWORD *)&v15 )
      {
        *((_QWORD *)v7 + 2) = a2;
        v6 = 0LL;
      }
      v8 = v7;
      *(_QWORD *)v7 = off_1800D3380;
    }
    CurrentThreadId = GetCurrentThreadId();
    v11 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v11 >= 0;
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  if ( !v5 )
  {
    v12 = *(_QWORD *)a2;
    ++*(_DWORD *)(v4 + 8);
    v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(v12 + 24))(a2);
    --*(_DWORD *)(v4 + 8);
    return v13;
  }
  return v2;
}
