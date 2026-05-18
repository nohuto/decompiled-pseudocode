/*
 * XREFs of sub_18010BB94 @ 0x18010BB94
 * Callers:
 *     sub_1800E22F8 @ 0x1800E22F8 (sub_1800E22F8.c)
 *     sub_1800E23C0 @ 0x1800E23C0 (sub_1800E23C0.c)
 *     sub_1800E2478 @ 0x1800E2478 (sub_1800E2478.c)
 *     sub_1800E27A4 @ 0x1800E27A4 (sub_1800E27A4.c)
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 *     sub_1800E2A70 @ 0x1800E2A70 (sub_1800E2A70.c)
 *     sub_1800E2B28 @ 0x1800E2B28 (sub_1800E2B28.c)
 *     sub_1800E2B5C @ 0x1800E2B5C (sub_1800E2B5C.c)
 *     sub_180131218 @ 0x180131218 (sub_180131218.c)
 * Callees:
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010BB94(__int64 a1)
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
  return sub_1800113D8((__int64 *)a1);
}
