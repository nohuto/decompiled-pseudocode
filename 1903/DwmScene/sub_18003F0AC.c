/*
 * XREFs of sub_18003F0AC @ 0x18003F0AC
 * Callers:
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003F0AC(__int64 a1)
{
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v8; // [rsp+28h] [rbp-10h] BYREF

  v2 = (_QWORD *)(a1 + 552);
  sub_180026420((__int64 ***)(a1 + 552), &v8, **(__int64 ***)(a1 + 552), *(__int64 **)(a1 + 552));
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
  return sub_1800671B8(a1);
}
