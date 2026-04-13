/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___::_scalar_deleting_destructor_ @ 0x18001C280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
