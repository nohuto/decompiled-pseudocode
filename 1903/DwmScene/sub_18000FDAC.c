/*
 * XREFs of sub_18000FDAC @ 0x18000FDAC
 * Callers:
 *     sub_18000FECC @ 0x18000FECC (sub_18000FECC.c)
 *     sub_1800129B0 @ 0x1800129B0 (sub_1800129B0.c)
 *     sub_180012A54 @ 0x180012A54 (sub_180012A54.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z @ 0x180016DA0 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_0 @ 0x180016E08 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_0.c)
 *     sub_180073040 @ 0x180073040 (sub_180073040.c)
 *     sub_1800730B8 @ 0x1800730B8 (sub_1800730B8.c)
 *     sub_1800731F8 @ 0x1800731F8 (sub_1800731F8.c)
 *     sub_180073270 @ 0x180073270 (sub_180073270.c)
 *     sub_1800732E8 @ 0x1800732E8 (sub_1800732E8.c)
 *     sub_180073428 @ 0x180073428 (sub_180073428.c)
 *     sub_1800734A0 @ 0x1800734A0 (sub_1800734A0.c)
 *     sub_180073518 @ 0x180073518 (sub_180073518.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2 @ 0x180088DD4 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2.c)
 *     sub_18008DE50 @ 0x18008DE50 (sub_18008DE50.c)
 *     sub_180098080 @ 0x180098080 (sub_180098080.c)
 *     sub_18009C098 @ 0x18009C098 (sub_18009C098.c)
 *     sub_1800A73C8 @ 0x1800A73C8 (sub_1800A73C8.c)
 *     sub_1800AB95C @ 0x1800AB95C (sub_1800AB95C.c)
 *     sub_1800B7AC0 @ 0x1800B7AC0 (sub_1800B7AC0.c)
 *     sub_1800BC9AC @ 0x1800BC9AC (sub_1800BC9AC.c)
 *     sub_1800BCA50 @ 0x1800BCA50 (sub_1800BCA50.c)
 *     sub_1800BCC28 @ 0x1800BCC28 (sub_1800BCC28.c)
 *     sub_1800BCCB8 @ 0x1800BCCB8 (sub_1800BCCB8.c)
 *     sub_1800DB094 @ 0x1800DB094 (sub_1800DB094.c)
 *     sub_1800FCC3C @ 0x1800FCC3C (sub_1800FCC3C.c)
 *     sub_1800FF2D8 @ 0x1800FF2D8 (sub_1800FF2D8.c)
 *     sub_180101968 @ 0x180101968 (sub_180101968.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000FDAC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 16);
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
      *(_QWORD *)(a2 + 8) = a2;
      v5 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v4;
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
