/*
 * XREFs of sub_180018480 @ 0x180018480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_180016484 @ 0x180016484 (sub_180016484.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180018480(__int64 a1, __int64 *a2)
{
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+38h] [rbp-20h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v10 = 0LL;
  v11 = 0LL;
  sub_180015C64(*(_QWORD **)(a1 + 56), &v10, 1u);
  v9 = 0LL;
  v3 = sub_180016484(&v9, &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v9;
    v5 = 0LL;
    v9 = 0LL;
    *a2 = v6;
    v4 = 0;
  }
  else
  {
    sub_18000C338(retaddr, 355, (__int64)"SpectreRenderer.cpp", v3);
    v5 = v9;
  }
  if ( v5 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return v4;
}
