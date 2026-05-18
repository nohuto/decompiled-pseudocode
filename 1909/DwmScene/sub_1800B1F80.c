/*
 * XREFs of sub_1800B1F80 @ 0x1800B1F80
 * Callers:
 *     sub_1800B1CAC @ 0x1800B1CAC (sub_1800B1CAC.c)
 * Callees:
 *     sub_180018D98 @ 0x180018D98 (sub_180018D98.c)
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_1800AEE44 @ 0x1800AEE44 (sub_1800AEE44.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B1F80(__int64 a1)
{
  __int64 v3; // r8
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  signed __int32 v6; // eax
  _OWORD *v7; // rdx
  _OWORD v8[4]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v9[4]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v10[4]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v11[4]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v12[4]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v13[4]; // [rsp+188h] [rbp+80h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 1) == 0 || sub_1800AEE44(a1, 1) )
    return 0;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) )
      {
        v3 = *(_QWORD *)(a1 + 56);
        v4 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  if ( v3 )
  {
    sub_180084480(v3, v12);
    sub_180018D98(v12, (__int64)v13);
    v8[0] = v12[0];
    v8[1] = v12[1];
    v8[2] = v12[2];
    v8[3] = v12[3];
    sub_180081DBC((_OWORD *)(a1 + 804), v8);
    v9[0] = v13[0];
    v9[1] = v13[1];
    v9[2] = v13[2];
    v9[3] = v13[3];
    v7 = v9;
  }
  else
  {
    v10[0] = xmmword_18025EFE0;
    v10[1] = xmmword_18025EFF0;
    v10[2] = xmmword_18025F000;
    v10[3] = xmmword_18025F010;
    sub_180081DBC((_OWORD *)(a1 + 804), v10);
    v11[0] = xmmword_18025EFE0;
    v11[1] = xmmword_18025EFF0;
    v11[2] = xmmword_18025F000;
    v11[3] = xmmword_18025F010;
    v7 = v11;
  }
  sub_180081DBC((_OWORD *)(a1 + 612), v7);
  *(_DWORD *)(a1 + 544) &= ~1u;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return 1;
}
