/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::_scalar_deleting_destructor_ @ 0x1802E0C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 4);
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
