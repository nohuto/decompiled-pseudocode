/*
 * XREFs of sub_18010BA84 @ 0x18010BA84
 * Callers:
 *     sub_1800E21E8 @ 0x1800E21E8 (sub_1800E21E8.c)
 *     sub_1800E22B0 @ 0x1800E22B0 (sub_1800E22B0.c)
 *     sub_1800E2368 @ 0x1800E2368 (sub_1800E2368.c)
 *     sub_1800E2694 @ 0x1800E2694 (sub_1800E2694.c)
 *     sub_1800E275C @ 0x1800E275C (sub_1800E275C.c)
 *     sub_1800E2960 @ 0x1800E2960 (sub_1800E2960.c)
 *     sub_1800E2A18 @ 0x1800E2A18 (sub_1800E2A18.c)
 *     sub_1800E2A4C @ 0x1800E2A4C (sub_1800E2A4C.c)
 *     sub_180131108 @ 0x180131108 (sub_180131108.c)
 * Callees:
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010BA84(__int64 a1)
{
  volatile signed __int32 *v2; // rbx

  Mtx_destroy_in_situ((_Mtx_t)(a1 + 48));
  v2 = *(volatile signed __int32 **)(a1 + 40);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return sub_180011388((__int64 *)a1);
}
