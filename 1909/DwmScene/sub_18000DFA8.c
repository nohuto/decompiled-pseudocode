/*
 * XREFs of sub_18000DFA8 @ 0x18000DFA8
 * Callers:
 *     sub_18000E468 @ 0x18000E468 (sub_18000E468.c)
 *     sub_180016FB8 @ 0x180016FB8 (sub_180016FB8.c)
 *     sub_1800170E4 @ 0x1800170E4 (sub_1800170E4.c)
 *     sub_18001715C @ 0x18001715C (sub_18001715C.c)
 *     sub_18001FDAC @ 0x18001FDAC (sub_18001FDAC.c)
 *     sub_1800277E4 @ 0x1800277E4 (sub_1800277E4.c)
 *     sub_18009500C @ 0x18009500C (sub_18009500C.c)
 *     sub_180095084 @ 0x180095084 (sub_180095084.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 *     sub_1800A2360 @ 0x1800A2360 (sub_1800A2360.c)
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800A2488 @ 0x1800A2488 (sub_1800A2488.c)
 *     sub_1800A26D8 @ 0x1800A26D8 (sub_1800A26D8.c)
 *     sub_1800A7580 @ 0x1800A7580 (sub_1800A7580.c)
 *     sub_1800F4828 @ 0x1800F4828 (sub_1800F4828.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000DFA8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 104);
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      *(_QWORD *)(a2 + 96) = a2;
      v5 = *(volatile signed __int32 **)(a2 + 104);
      *(_QWORD *)(a2 + 104) = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
