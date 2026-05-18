/*
 * XREFs of sub_180017790 @ 0x180017790
 * Callers:
 *     sub_1800151D4 @ 0x1800151D4 (sub_1800151D4.c)
 *     sub_180015380 @ 0x180015380 (sub_180015380.c)
 *     sub_180015574 @ 0x180015574 (sub_180015574.c)
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_180128102 @ 0x180128102 (sub_180128102.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA @ 0x18012810E (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA.c)
 *     sub_18012D026 @ 0x18012D026 (sub_18012D026.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017790(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = (volatile signed __int32 *)a1[10];
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = a1[6];
  if ( v4 )
  {
    v5 = (a1[8] - v4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x180017839LL);
      }
      v4 = v6;
    }
    result = j_j__o_free(v4);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return result;
}
