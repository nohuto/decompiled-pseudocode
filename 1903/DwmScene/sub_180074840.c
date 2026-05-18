/*
 * XREFs of sub_180074840 @ 0x180074840
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_1800793E0 @ 0x1800793E0 (sub_1800793E0.c)
 *     sub_1800796C4 @ 0x1800796C4 (sub_1800796C4.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_18007A4A0 @ 0x18007A4A0 (sub_18007A4A0.c)
 *     sub_18007AEFC @ 0x18007AEFC (sub_18007AEFC.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800C2660 @ 0x1800C2660 (sub_1800C2660.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 *     ?dtor$1@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z@4HA_0 @ 0x18012DE12 (-dtor$1@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012DE12.c)
 *     sub_18012DEDE @ 0x18012DEDE (sub_18012DEDE.c)
 *     sub_18012DF02 @ 0x18012DF02 (sub_18012DF02.c)
 *     sub_18012DF32 @ 0x18012DF32 (sub_18012DF32.c)
 *     unknown_libname_55 @ 0x18012DF62 (unknown_libname_55.c)
 *     sub_18012DFAA @ 0x18012DFAA (sub_18012DFAA.c)
 *     sub_18012DFDA @ 0x18012DFDA (sub_18012DFDA.c)
 *     sub_18012E00A @ 0x18012E00A (sub_18012E00A.c)
 *     sub_18012E03A @ 0x18012E03A (sub_18012E03A.c)
 *     unknown_libname_150 @ 0x18012E160 (unknown_libname_150.c)
 *     sub_18012E208 @ 0x18012E208 (sub_18012E208.c)
 *     sub_18012E22C @ 0x18012E22C (sub_18012E22C.c)
 *     sub_18012E244 @ 0x18012E244 (sub_18012E244.c)
 *     sub_18012E25C @ 0x18012E25C (sub_18012E25C.c)
 *     sub_18012E274 @ 0x18012E274 (sub_18012E274.c)
 *     unknown_libname_152 @ 0x18012E298 (unknown_libname_152.c)
 *     sub_18012FEAB @ 0x18012FEAB (sub_18012FEAB.c)
 *     sub_18012FEF3 @ 0x18012FEF3 (sub_18012FEF3.c)
 *     sub_18012FF47 @ 0x18012FF47 (sub_18012FF47.c)
 *     sub_180130777 @ 0x180130777 (sub_180130777.c)
 *     sub_1801332FD @ 0x1801332FD (sub_1801332FD.c)
 * Callees:
 *     sub_1800E9A44 @ 0x1800E9A44 (sub_1800E9A44.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180074840(__int64 *a1)
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
          sub_1800E9A44(v4, a1[2]);
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
