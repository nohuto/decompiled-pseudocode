/*
 * XREFs of sub_18000DF58 @ 0x18000DF58
 * Callers:
 *     sub_18000E418 @ 0x18000E418 (sub_18000E418.c)
 *     sub_180016F48 @ 0x180016F48 (sub_180016F48.c)
 *     sub_180017074 @ 0x180017074 (sub_180017074.c)
 *     sub_1800170EC @ 0x1800170EC (sub_1800170EC.c)
 *     sub_18001FC9C @ 0x18001FC9C (sub_18001FC9C.c)
 *     sub_1800276D4 @ 0x1800276D4 (sub_1800276D4.c)
 *     sub_180094EFC @ 0x180094EFC (sub_180094EFC.c)
 *     sub_180094F74 @ 0x180094F74 (sub_180094F74.c)
 *     sub_1800A21BC @ 0x1800A21BC (sub_1800A21BC.c)
 *     sub_1800A2250 @ 0x1800A2250 (sub_1800A2250.c)
 *     sub_1800A22E4 @ 0x1800A22E4 (sub_1800A22E4.c)
 *     sub_1800A2378 @ 0x1800A2378 (sub_1800A2378.c)
 *     sub_1800A25C8 @ 0x1800A25C8 (sub_1800A25C8.c)
 *     sub_1800A7470 @ 0x1800A7470 (sub_1800A7470.c)
 *     sub_1800F4718 @ 0x1800F4718 (sub_1800F4718.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000DF58(__int64 a1, __int64 a2)
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
