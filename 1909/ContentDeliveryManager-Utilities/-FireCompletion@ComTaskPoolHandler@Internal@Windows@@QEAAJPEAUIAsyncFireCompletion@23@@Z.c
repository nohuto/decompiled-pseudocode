/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180004E20
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001B230 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPoolHandler::FireCompletion(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IAsyncFireCompletion *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  bool v5; // di
  struct Windows::Internal::IAsyncFireCompletion *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // r15
  bool v10; // zf
  DWORD CurrentThreadId; // eax
  int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // eax
  Windows::Internal::ComTaskPoolHandler *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  v16 = this;
  v2 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
    v16 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v17 = 0LL;
    v7 = 0LL;
    v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      v8[3] = 1;
      if ( !v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v6 = v16;
      }
      *((_QWORD *)v8 + 2) = 0LL;
      if ( v8 + 4 != (_DWORD *)&v16 )
      {
        *((_QWORD *)v8 + 2) = a2;
        v6 = 0LL;
      }
      v7 = v8;
      *(_QWORD *)v8 = off_1800D7748;
      v9 = v8;
    }
    CurrentThreadId = GetCurrentThreadId();
    v12 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v7, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    v5 = v12 >= 0;
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  if ( !v5 )
  {
    v13 = *(_QWORD *)a2;
    ++*(_DWORD *)(v4 + 8);
    v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(v13 + 24))(a2);
    --*(_DWORD *)(v4 + 8);
    return v14;
  }
  return v2;
}
