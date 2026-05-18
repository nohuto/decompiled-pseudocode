/*
 * XREFs of sub_180074950 @ 0x180074950
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A28C @ 0x18007A28C (sub_18007A28C.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 *     sub_1800AF04C @ 0x1800AF04C (sub_1800AF04C.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 *     ?dtor$1@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z@4HA_0 @ 0x18012DF22 (-dtor$1@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012DF22.c)
 *     sub_18012DFEE @ 0x18012DFEE (sub_18012DFEE.c)
 *     sub_18012E012 @ 0x18012E012 (sub_18012E012.c)
 *     sub_18012E042 @ 0x18012E042 (sub_18012E042.c)
 *     unknown_libname_55 @ 0x18012E072 (unknown_libname_55.c)
 *     sub_18012E0BA @ 0x18012E0BA (sub_18012E0BA.c)
 *     sub_18012E0EA @ 0x18012E0EA (sub_18012E0EA.c)
 *     sub_18012E11A @ 0x18012E11A (sub_18012E11A.c)
 *     sub_18012E14A @ 0x18012E14A (sub_18012E14A.c)
 *     unknown_libname_150 @ 0x18012E270 (unknown_libname_150.c)
 *     sub_18012E318 @ 0x18012E318 (sub_18012E318.c)
 *     sub_18012E33C @ 0x18012E33C (sub_18012E33C.c)
 *     sub_18012E354 @ 0x18012E354 (sub_18012E354.c)
 *     sub_18012E36C @ 0x18012E36C (sub_18012E36C.c)
 *     sub_18012E384 @ 0x18012E384 (sub_18012E384.c)
 *     unknown_libname_152 @ 0x18012E3A8 (unknown_libname_152.c)
 *     sub_18012FFBB @ 0x18012FFBB (sub_18012FFBB.c)
 *     sub_180130003 @ 0x180130003 (sub_180130003.c)
 *     sub_180130057 @ 0x180130057 (sub_180130057.c)
 *     sub_180130887 @ 0x180130887 (sub_180130887.c)
 *     sub_18013340D @ 0x18013340D (sub_18013340D.c)
 * Callees:
 *     sub_1800E9B54 @ 0x1800E9B54 (sub_1800E9B54.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180074950(__int64 *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *a1;
        v5 = (volatile signed __int32 *)a1[1];
        if ( *a1 )
          sub_1800E9B54(v4, a1[2]);
        if ( v5 )
        {
          if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
            if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
          }
        }
        break;
      }
    }
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
