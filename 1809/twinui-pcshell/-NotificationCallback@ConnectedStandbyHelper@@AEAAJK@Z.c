/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18023BB0C
 * Callers:
 *     _lambda_f2dcd8ae08335fe0e2886b29354d7ff7_::_lambda_invoker_cdecl_ @ 0x18023B5C0 (_lambda_f2dcd8ae08335fe0e2886b29354d7ff7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20___::CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20_____lambda_a4746a4e0492827f06ef7c88b1531c20___ @ 0x18023B5CC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20___--CTaskW.c)
 */

__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this, int a2)
{
  __int64 v2; // r9
  signed __int32 v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  std::_Ref_count_base *v7; // rsi
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD pExceptionObject[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
LABEL_2:
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( !v3 )
      goto LABEL_2;
  }
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) );
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v5 = *(_QWORD *)this;
  v13[0] = this;
  if ( v4 )
    _InterlockedIncrement(v4 + 2);
  v6 = *((_DWORD *)this + 4);
  v15 = a2;
  v7 = (std::_Ref_count_base *)v4;
  v13[1] = v5;
  v14 = (std::_Ref_count_base *)v4;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20___::CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20_____lambda_a4746a4e0492827f06ef7c88b1531c20___(
            (__int64)v8,
            (__int64)v13);
    v7 = v14;
    v9 = v10;
  }
  SHTaskPoolQueueTask(3LL, 2LL, v6, 0LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return 0LL;
}
