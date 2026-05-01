/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x1801D6A0C
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1801D7000 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___ @ 0x1801D669C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___(
        __int64 a1,
        int *a2,
        unsigned int a3)
{
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  std::_Ref_count_base *v10; // rcx
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  std::_Ref_count_base *v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v15 = a1;
  v12 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  v13 = v5;
  v6 = (std::_Ref_count_base *)*((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0LL;
  v14 = v6;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___(
           (__int64)v7,
           (__int64)&v12);
  v9 = SHTaskPoolQueueTask(3LL, a3 != 0 ? 2 : 0, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v15);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v16);
  v10 = (std::_Ref_count_base *)*((_QWORD *)a2 + 2);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return v9;
}
