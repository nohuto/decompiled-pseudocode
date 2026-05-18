/*
 * XREFs of sub_180087524 @ 0x180087524
 * Callers:
 *     sub_18000F808 @ 0x18000F808 (sub_18000F808.c)
 *     sub_180010D9C @ 0x180010D9C (sub_180010D9C.c)
 *     sub_180010E30 @ 0x180010E30 (sub_180010E30.c)
 *     sub_180012280 @ 0x180012280 (sub_180012280.c)
 *     sub_180012480 @ 0x180012480 (sub_180012480.c)
 *     sub_18006EA40 @ 0x18006EA40 (sub_18006EA40.c)
 *     sub_180081594 @ 0x180081594 (sub_180081594.c)
 *     sub_1800824E8 @ 0x1800824E8 (sub_1800824E8.c)
 *     sub_180082640 @ 0x180082640 (sub_180082640.c)
 *     sub_180083804 @ 0x180083804 (sub_180083804.c)
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_180084F38 @ 0x180084F38 (sub_180084F38.c)
 *     sub_180084F94 @ 0x180084F94 (sub_180084F94.c)
 *     sub_1800851A8 @ 0x1800851A8 (sub_1800851A8.c)
 *     sub_180085B0C @ 0x180085B0C (sub_180085B0C.c)
 *     GsDriverEntry @ 0x180085BBC (GsDriverEntry.c)
 *     sub_180085BF4 @ 0x180085BF4 (sub_180085BF4.c)
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 *     sub_18008644C @ 0x18008644C (sub_18008644C.c)
 *     sub_1800864BC @ 0x1800864BC (sub_1800864BC.c)
 *     sub_1800865F0 @ 0x1800865F0 (sub_1800865F0.c)
 *     sub_1800866D4 @ 0x1800866D4 (sub_1800866D4.c)
 *     sub_180086948 @ 0x180086948 (sub_180086948.c)
 *     sub_180086B30 @ 0x180086B30 (sub_180086B30.c)
 *     sub_18008717C @ 0x18008717C (sub_18008717C.c)
 *     sub_1800872AC @ 0x1800872AC (sub_1800872AC.c)
 *     sub_180087334 @ 0x180087334 (sub_180087334.c)
 *     sub_18008E014 @ 0x18008E014 (sub_18008E014.c)
 *     sub_1800984CC @ 0x1800984CC (sub_1800984CC.c)
 *     sub_18009A7C0 @ 0x18009A7C0 (sub_18009A7C0.c)
 *     sub_18009C25C @ 0x18009C25C (sub_18009C25C.c)
 *     sub_1800B8E94 @ 0x1800B8E94 (sub_1800B8E94.c)
 *     sub_1800B9094 @ 0x1800B9094 (sub_1800B9094.c)
 *     sub_1800B9290 @ 0x1800B9290 (sub_1800B9290.c)
 *     sub_1800B948C @ 0x1800B948C (sub_1800B948C.c)
 *     sub_1800B9688 @ 0x1800B9688 (sub_1800B9688.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800C1450 @ 0x1800C1450 (sub_1800C1450.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     sub_1800DA494 @ 0x1800DA494 (sub_1800DA494.c)
 *     sub_1801027B0 @ 0x1801027B0 (sub_1801027B0.c)
 *     sub_180102AC0 @ 0x180102AC0 (sub_180102AC0.c)
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180087524(__int64 a1)
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
    sub_1800635BC(v2 + 16, v1);
  if ( *((_QWORD *)&v2 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v4 + 1))(*((_QWORD *)&v4 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 8LL))(*((_QWORD *)&v4 + 1));
  }
}
