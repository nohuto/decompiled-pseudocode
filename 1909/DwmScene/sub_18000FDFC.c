/*
 * XREFs of sub_18000FDFC @ 0x18000FDFC
 * Callers:
 *     sub_18000FF1C @ 0x18000FF1C (sub_18000FF1C.c)
 *     sub_180012A00 @ 0x180012A00 (sub_180012A00.c)
 *     sub_180012AA4 @ 0x180012AA4 (sub_180012AA4.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z @ 0x180016E10 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_0 @ 0x180016E78 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_0.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_1800731C8 @ 0x1800731C8 (sub_1800731C8.c)
 *     sub_180073308 @ 0x180073308 (sub_180073308.c)
 *     sub_180073380 @ 0x180073380 (sub_180073380.c)
 *     sub_1800733F8 @ 0x1800733F8 (sub_1800733F8.c)
 *     sub_180073538 @ 0x180073538 (sub_180073538.c)
 *     sub_1800735B0 @ 0x1800735B0 (sub_1800735B0.c)
 *     sub_180073628 @ 0x180073628 (sub_180073628.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2 @ 0x180088EE4 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2.c)
 *     sub_18008DF60 @ 0x18008DF60 (sub_18008DF60.c)
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 *     sub_18009C1A8 @ 0x18009C1A8 (sub_18009C1A8.c)
 *     sub_1800A74D8 @ 0x1800A74D8 (sub_1800A74D8.c)
 *     sub_1800ABA6C @ 0x1800ABA6C (sub_1800ABA6C.c)
 *     sub_1800B7BD0 @ 0x1800B7BD0 (sub_1800B7BD0.c)
 *     sub_1800BCABC @ 0x1800BCABC (sub_1800BCABC.c)
 *     sub_1800BCB60 @ 0x1800BCB60 (sub_1800BCB60.c)
 *     sub_1800BCD38 @ 0x1800BCD38 (sub_1800BCD38.c)
 *     sub_1800BCDC8 @ 0x1800BCDC8 (sub_1800BCDC8.c)
 *     sub_1800DB1A4 @ 0x1800DB1A4 (sub_1800DB1A4.c)
 *     sub_1800FCD4C @ 0x1800FCD4C (sub_1800FCD4C.c)
 *     sub_1800FF3E8 @ 0x1800FF3E8 (sub_1800FF3E8.c)
 *     sub_180101A78 @ 0x180101A78 (sub_180101A78.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000FDFC(__int64 a1, __int64 a2)
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
