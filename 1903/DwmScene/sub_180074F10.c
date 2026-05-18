/*
 * XREFs of sub_180074F10 @ 0x180074F10
 * Callers:
 *     sub_18007DF90 @ 0x18007DF90 (sub_18007DF90.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180074F10(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 144);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  sub_180011388((__int64 *)(a1 + 24));
  return sub_180011388((__int64 *)a1);
}
