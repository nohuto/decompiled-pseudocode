/*
 * XREFs of sub_18003F1BC @ 0x18003F1BC
 * Callers:
 *     sub_18003F2C0 @ 0x18003F2C0 (sub_18003F2C0.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003F1BC(__int64 a1)
{
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v8; // [rsp+28h] [rbp-10h] BYREF

  v2 = (_QWORD *)(a1 + 552);
  sub_180026530((__int64 ***)(a1 + 552), &v8, **(__int64 ***)(a1 + 552), *(__int64 **)(a1 + 552));
  j_j__o_free(*v2);
  v3 = *(volatile signed __int32 **)(a1 + 544);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = *(_QWORD *)(a1 + 528);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 528) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 520);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 512);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return sub_1800672C8(a1);
}
