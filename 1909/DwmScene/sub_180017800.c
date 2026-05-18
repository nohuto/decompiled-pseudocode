/*
 * XREFs of sub_180017800 @ 0x180017800
 * Callers:
 *     sub_180015244 @ 0x180015244 (sub_180015244.c)
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 *     sub_1800155E4 @ 0x1800155E4 (sub_1800155E4.c)
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_180128212 @ 0x180128212 (sub_180128212.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA @ 0x18012821E (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA.c)
 *     sub_18012D136 @ 0x18012D136 (sub_18012D136.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017800(_QWORD *a1)
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
        JUMPOUT(0x1800178A9LL);
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
