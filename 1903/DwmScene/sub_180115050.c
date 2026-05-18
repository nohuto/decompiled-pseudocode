/*
 * XREFs of sub_180115050 @ 0x180115050
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
 *     sub_1800C2660 @ 0x1800C2660 (sub_1800C2660.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 *     unknown_libname_51 @ 0x18012DDFA (unknown_libname_51.c)
 *     sub_18012DEC6 @ 0x18012DEC6 (sub_18012DEC6.c)
 *     unknown_libname_54 @ 0x18012DEEA (unknown_libname_54.c)
 *     sub_18012DF0E @ 0x18012DF0E (sub_18012DF0E.c)
 *     sub_18012DF92 @ 0x18012DF92 (sub_18012DF92.c)
 *     sub_18012DFC2 @ 0x18012DFC2 (sub_18012DFC2.c)
 *     sub_18012DFE6 @ 0x18012DFE6 (sub_18012DFE6.c)
 *     sub_18012E016 @ 0x18012E016 (sub_18012E016.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_4 @ 0x18012E046 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012E046.c)
 *     sub_18012E154 @ 0x18012E154 (sub_18012E154.c)
 *     sub_18012E268 @ 0x18012E268 (sub_18012E268.c)
 *     sub_18012E280 @ 0x18012E280 (sub_18012E280.c)
 *     sub_18013076B @ 0x18013076B (sub_18013076B.c)
 * Callees:
 *     sub_180115168 @ 0x180115168 (sub_180115168.c)
 *     sub_1801151FC @ 0x1801151FC (sub_1801151FC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180115050(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_1801151FC(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_180115168(
               *(_QWORD *)a1,
               2,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40));
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return result;
}
