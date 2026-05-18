/*
 * XREFs of sub_1800D51EC @ 0x1800D51EC
 * Callers:
 *     sub_1800D5FB0 @ 0x1800D5FB0 (sub_1800D5FB0.c)
 * Callees:
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     sub_1800D62C8 @ 0x1800D62C8 (sub_1800D62C8.c)
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D51EC(__int64 a1)
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v6[16]; // [rsp+28h] [rbp-10h] BYREF

  v1 = (_QWORD *)(a1 + 1064);
  sub_180069F04((__int64 ***)(a1 + 1064), &v5, **(__int64 ***)(a1 + 1064), *(__int64 **)(a1 + 1064));
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
  sub_1800D62C8(a1 + 880, v6, **(_QWORD **)(a1 + 880));
  j_j__o_free(*(_QWORD *)(a1 + 880));
  sub_1800E0FAC(a1 + 704);
  sub_1800E0FAC(a1 + 528);
  sub_1800E0FAC(a1 + 352);
  sub_1800E0FAC(a1 + 176);
  return sub_1800E0FAC(a1);
}
