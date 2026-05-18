/*
 * XREFs of sub_1800F97D0 @ 0x1800F97D0
 * Callers:
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 *     ?do_while@details@Concurrency@@YA?AV?$task@_N@2@V?$function@$$A6A?AV?$task@_N@Concurrency@@XZ@std@@@Z @ 0x1800DE270 (-do_while@details@Concurrency@@YA-AV-$task@_N@2@V-$function@$$A6A-AV-$task@_N@Concurrency@@XZ@st.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 *     sub_18012FE9F @ 0x18012FE9F (sub_18012FE9F.c)
 *     sub_18012FEDB @ 0x18012FEDB (sub_18012FEDB.c)
 *     sub_18012FF2F @ 0x18012FF2F (sub_18012FF2F.c)
 *     sub_180130F4C @ 0x180130F4C (sub_180130F4C.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_7 @ 0x180130F58 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180130F58.c)
 *     sub_1801332F1 @ 0x1801332F1 (sub_1801332F1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800F97D0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  void (__fastcall ***v4)(_QWORD); // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *(void (__fastcall ****)(_QWORD))a1;
        v5 = *(volatile signed __int32 **)(a1 + 8);
        if ( *(_QWORD *)a1 )
          (**v4)(v4);
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
  v6 = *(volatile signed __int32 **)(a1 + 8);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
