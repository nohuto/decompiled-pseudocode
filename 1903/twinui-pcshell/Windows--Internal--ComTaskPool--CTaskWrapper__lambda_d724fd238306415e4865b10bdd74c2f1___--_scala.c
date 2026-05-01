/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d724fd238306415e4865b10bdd74c2f1___::_scalar_deleting_destructor_ @ 0x18006A400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d724fd238306415e4865b10bdd74c2f1___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  volatile signed __int64 *v4; // r8
  signed __int64 v5; // rax
  signed __int32 v6; // ecx
  signed __int64 v7; // rtt

  v4 = (volatile signed __int64 *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    v5 = *((_QWORD *)v4 + 25);
    while ( v5 >= 0 )
    {
      v6 = v5 - 1;
      v7 = v5;
      v5 = _InterlockedCompareExchange64(v4 + 25, v5 - 1, v5);
      if ( v7 == v5 )
        goto LABEL_5;
    }
    v6 = _InterlockedDecrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_5:
    if ( !v6 )
    {
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v4 + 536))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
