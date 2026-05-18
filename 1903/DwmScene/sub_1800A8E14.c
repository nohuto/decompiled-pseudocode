/*
 * XREFs of sub_1800A8E14 @ 0x1800A8E14
 * Callers:
 *     sub_1800A9974 @ 0x1800A9974 (sub_1800A9974.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 * Callees:
 *     sub_1800A3FCC @ 0x1800A3FCC (sub_1800A3FCC.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A8E14(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h]

  v4 = (__int64 *)sub_1800A9304(a1, &v9);
  v5 = (unsigned int)sub_1800A3FCC(*v4, a2);
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v7, v5) )
    LODWORD(v5) = -1;
  return (unsigned int)v5;
}
