/*
 * XREFs of sub_180087414 @ 0x180087414
 * Callers:
 *     sub_18000F7B8 @ 0x18000F7B8 (sub_18000F7B8.c)
 *     sub_180010D4C @ 0x180010D4C (sub_180010D4C.c)
 *     sub_180010DE0 @ 0x180010DE0 (sub_180010DE0.c)
 *     sub_180012230 @ 0x180012230 (sub_180012230.c)
 *     sub_180012430 @ 0x180012430 (sub_180012430.c)
 *     sub_18006E930 @ 0x18006E930 (sub_18006E930.c)
 *     sub_180081484 @ 0x180081484 (sub_180081484.c)
 *     sub_1800823D8 @ 0x1800823D8 (sub_1800823D8.c)
 *     sub_180082530 @ 0x180082530 (sub_180082530.c)
 *     sub_1800836F4 @ 0x1800836F4 (sub_1800836F4.c)
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 *     sub_180084E28 @ 0x180084E28 (sub_180084E28.c)
 *     sub_180084E84 @ 0x180084E84 (sub_180084E84.c)
 *     sub_180085098 @ 0x180085098 (sub_180085098.c)
 *     sub_1800859FC @ 0x1800859FC (sub_1800859FC.c)
 *     GsDriverEntry @ 0x180085AAC (GsDriverEntry.c)
 *     sub_180085AE4 @ 0x180085AE4 (sub_180085AE4.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 *     sub_18008633C @ 0x18008633C (sub_18008633C.c)
 *     sub_1800863AC @ 0x1800863AC (sub_1800863AC.c)
 *     sub_1800864E0 @ 0x1800864E0 (sub_1800864E0.c)
 *     sub_1800865C4 @ 0x1800865C4 (sub_1800865C4.c)
 *     sub_180086838 @ 0x180086838 (sub_180086838.c)
 *     sub_180086A20 @ 0x180086A20 (sub_180086A20.c)
 *     sub_18008706C @ 0x18008706C (sub_18008706C.c)
 *     sub_18008719C @ 0x18008719C (sub_18008719C.c)
 *     sub_180087224 @ 0x180087224 (sub_180087224.c)
 *     sub_18008DF04 @ 0x18008DF04 (sub_18008DF04.c)
 *     sub_1800983BC @ 0x1800983BC (sub_1800983BC.c)
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 *     sub_18009C14C @ 0x18009C14C (sub_18009C14C.c)
 *     sub_1800B8D84 @ 0x1800B8D84 (sub_1800B8D84.c)
 *     sub_1800B8F84 @ 0x1800B8F84 (sub_1800B8F84.c)
 *     sub_1800B9180 @ 0x1800B9180 (sub_1800B9180.c)
 *     sub_1800B937C @ 0x1800B937C (sub_1800B937C.c)
 *     sub_1800B9578 @ 0x1800B9578 (sub_1800B9578.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 *     sub_1800DA384 @ 0x1800DA384 (sub_1800DA384.c)
 *     sub_1801026A0 @ 0x1801026A0 (sub_1801026A0.c)
 *     sub_1801029B0 @ 0x1801029B0 (sub_1801029B0.c)
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180087414(__int64 a1)
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
    sub_1800634AC(v2 + 16, v1);
  if ( *((_QWORD *)&v2 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v4 + 1))(*((_QWORD *)&v4 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 8LL))(*((_QWORD *)&v4 + 1));
  }
}
