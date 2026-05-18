/*
 * XREFs of sub_180087340 @ 0x180087340
 * Callers:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_180012784 @ 0x180012784 (sub_180012784.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 *     sub_180016070 @ 0x180016070 (sub_180016070.c)
 *     sub_18006B1D8 @ 0x18006B1D8 (sub_18006B1D8.c)
 *     sub_18006ED90 @ 0x18006ED90 (sub_18006ED90.c)
 *     sub_1800823A0 @ 0x1800823A0 (sub_1800823A0.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_1800835E8 @ 0x1800835E8 (sub_1800835E8.c)
 *     sub_180083688 @ 0x180083688 (sub_180083688.c)
 *     sub_1800836F4 @ 0x1800836F4 (sub_1800836F4.c)
 *     sub_180083914 @ 0x180083914 (sub_180083914.c)
 *     sub_180083A94 @ 0x180083A94 (sub_180083A94.c)
 *     sub_180083C40 @ 0x180083C40 (sub_180083C40.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180084008 @ 0x180084008 (sub_180084008.c)
 *     sub_1800841D4 @ 0x1800841D4 (sub_1800841D4.c)
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_18008457C @ 0x18008457C (sub_18008457C.c)
 *     sub_180084624 @ 0x180084624 (sub_180084624.c)
 *     sub_180084E84 @ 0x180084E84 (sub_180084E84.c)
 *     sub_1800851D4 @ 0x1800851D4 (sub_1800851D4.c)
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 *     sub_1800865C4 @ 0x1800865C4 (sub_1800865C4.c)
 *     sub_180086838 @ 0x180086838 (sub_180086838.c)
 *     sub_180086C24 @ 0x180086C24 (sub_180086C24.c)
 *     sub_180086D28 @ 0x180086D28 (sub_180086D28.c)
 *     sub_180086E2C @ 0x180086E2C (sub_180086E2C.c)
 *     sub_18008706C @ 0x18008706C (sub_18008706C.c)
 *     sub_18008719C @ 0x18008719C (sub_18008719C.c)
 *     sub_180088238 @ 0x180088238 (sub_180088238.c)
 *     sub_1800882B0 @ 0x1800882B0 (sub_1800882B0.c)
 *     sub_18008B6F8 @ 0x18008B6F8 (sub_18008B6F8.c)
 *     sub_18008BCF0 @ 0x18008BCF0 (sub_18008BCF0.c)
 *     sub_18008C220 @ 0x18008C220 (sub_18008C220.c)
 *     sub_18008CA5C @ 0x18008CA5C (sub_18008CA5C.c)
 *     sub_18008CEF4 @ 0x18008CEF4 (sub_18008CEF4.c)
 *     sub_1800BAAC8 @ 0x1800BAAC8 (sub_1800BAAC8.c)
 *     sub_1800BAC1C @ 0x1800BAC1C (sub_1800BAC1C.c)
 *     sub_1800BAD70 @ 0x1800BAD70 (sub_1800BAD70.c)
 *     sub_1800BAEC4 @ 0x1800BAEC4 (sub_1800BAEC4.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800DA580 @ 0x1800DA580 (sub_1800DA580.c)
 *     sub_1800E2CD0 @ 0x1800E2CD0 (sub_1800E2CD0.c)
 *     sub_1800F1050 @ 0x1800F1050 (sub_1800F1050.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 *     sub_1801029B0 @ 0x1801029B0 (sub_1801029B0.c)
 *     sub_180108078 @ 0x180108078 (sub_180108078.c)
 *     sub_18010D080 @ 0x18010D080 (sub_18010D080.c)
 * Callees:
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180087340(__int64 a1)
{
  __int64 v1; // rdx
  __int128 v2; // rcx
  signed __int32 v3; // eax
  __int128 v4; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v1 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), v3 + 1, v3) )
      {
        v2 = *(_OWORD *)(a1 + 72);
        *((_QWORD *)&v4 + 1) = *((_QWORD *)&v2 + 1);
        goto LABEL_3;
      }
    }
  }
  v2 = 0LL;
LABEL_3:
  if ( (_QWORD)v2 )
    sub_180063430(v2 + 16);
  if ( *((_QWORD *)&v2 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v4 + 1))(*((_QWORD *)&v4 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 8LL))(*((_QWORD *)&v4 + 1));
  }
}
