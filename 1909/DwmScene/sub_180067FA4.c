/*
 * XREFs of sub_180067FA4 @ 0x180067FA4
 * Callers:
 *     sub_180069120 @ 0x180069120 (sub_180069120.c)
 *     sub_1800DCBD0 @ 0x1800DCBD0 (sub_1800DCBD0.c)
 * Callees:
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     sub_18009ECD8 @ 0x18009ECD8 (sub_18009ECD8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067FA4(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  sub_18009EC74(a1, &v6, a2);
  if ( v6 )
  {
    v2 = sub_18009ECD8(v6);
    v3 = v7;
    if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    return v2;
  }
  else
  {
    v5 = v7;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
    return 0LL;
  }
}
