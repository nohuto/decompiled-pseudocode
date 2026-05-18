/*
 * XREFs of sub_180115160 @ 0x180115160
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
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 *     unknown_libname_51 @ 0x18012DF0A (unknown_libname_51.c)
 *     sub_18012DFD6 @ 0x18012DFD6 (sub_18012DFD6.c)
 *     unknown_libname_54 @ 0x18012DFFA (unknown_libname_54.c)
 *     sub_18012E01E @ 0x18012E01E (sub_18012E01E.c)
 *     sub_18012E0A2 @ 0x18012E0A2 (sub_18012E0A2.c)
 *     sub_18012E0D2 @ 0x18012E0D2 (sub_18012E0D2.c)
 *     sub_18012E0F6 @ 0x18012E0F6 (sub_18012E0F6.c)
 *     sub_18012E126 @ 0x18012E126 (sub_18012E126.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_4 @ 0x18012E156 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012E156.c)
 *     sub_18012E264 @ 0x18012E264 (sub_18012E264.c)
 *     sub_18012E378 @ 0x18012E378 (sub_18012E378.c)
 *     sub_18012E390 @ 0x18012E390 (sub_18012E390.c)
 *     sub_18013087B @ 0x18013087B (sub_18013087B.c)
 * Callees:
 *     sub_180115278 @ 0x180115278 (sub_180115278.c)
 *     sub_18011530C @ 0x18011530C (sub_18011530C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180115160(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18011530C(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_180115278(
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
