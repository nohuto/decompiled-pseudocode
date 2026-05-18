/*
 * XREFs of sub_1800F0EB4 @ 0x1800F0EB4
 * Callers:
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_180099D70 @ 0x180099D70 (sub_180099D70.c)
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800AE8FC @ 0x1800AE8FC (sub_1800AE8FC.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800B0A34 @ 0x1800B0A34 (sub_1800B0A34.c)
 *     sub_1800B7D98 @ 0x1800B7D98 (sub_1800B7D98.c)
 *     sub_1800B88B0 @ 0x1800B88B0 (sub_1800B88B0.c)
 *     sub_1800F0AD8 @ 0x1800F0AD8 (sub_1800F0AD8.c)
 *     sub_1800F0FE4 @ 0x1800F0FE4 (sub_1800F0FE4.c)
 *     sub_1800FE640 @ 0x1800FE640 (sub_1800FE640.c)
 *     sub_1800FE9F0 @ 0x1800FE9F0 (sub_1800FE9F0.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 *     sub_180100F40 @ 0x180100F40 (sub_180100F40.c)
 *     sub_180101098 @ 0x180101098 (sub_180101098.c)
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 *     sub_1801012B0 @ 0x1801012B0 (sub_1801012B0.c)
 *     sub_180102120 @ 0x180102120 (sub_180102120.c)
 *     sub_1801041DC @ 0x1801041DC (sub_1801041DC.c)
 * Callees:
 *     sub_18008374C @ 0x18008374C (sub_18008374C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F0EB4(__int64 a1)
{
  __int64 v1; // r8
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rdi

  v1 = 0LL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        break;
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
      {
        v1 = *(_QWORD *)(a1 + 56);
        v2 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v5 = sub_18008374C(v1);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return v5;
}
