/*
 * XREFs of ?OnDisconnected@MagnifierClientProxy@@MEAAJXZ @ 0x180028C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierClientProxy::OnDisconnected(MagnifierClientProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 7) + 56LL);
  if ( v2 )
    (*(void (__fastcall **)(__int64, MagnifierClientProxy *))(*(_QWORD *)v2 + 8LL))(v2, this);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (**(void (__fastcall ***)(__int64))(v3 + 16))(v3 + 16);
  }
  return 0LL;
}
