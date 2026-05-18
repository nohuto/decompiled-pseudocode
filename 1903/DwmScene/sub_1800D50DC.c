/*
 * XREFs of sub_1800D50DC @ 0x1800D50DC
 * Callers:
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 * Callees:
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 *     sub_1800D61B8 @ 0x1800D61B8 (sub_1800D61B8.c)
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D50DC(__int64 a1)
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v6[16]; // [rsp+28h] [rbp-10h] BYREF

  v1 = (_QWORD *)(a1 + 1064);
  sub_180069DF4((__int64 ***)(a1 + 1064), &v5, **(__int64 ***)(a1 + 1064), *(__int64 **)(a1 + 1064));
  j_j__o_free(*v1);
  v3 = *(volatile signed __int32 **)(a1 + 904);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  sub_1800D61B8(a1 + 880, v6, **(_QWORD **)(a1 + 880));
  j_j__o_free(*(_QWORD *)(a1 + 880));
  sub_1800E0E9C(a1 + 704);
  sub_1800E0E9C(a1 + 528);
  sub_1800E0E9C(a1 + 352);
  sub_1800E0E9C(a1 + 176);
  return sub_1800E0E9C(a1);
}
