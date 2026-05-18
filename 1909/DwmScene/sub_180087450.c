/*
 * XREFs of sub_180087450 @ 0x180087450
 * Callers:
 *     sub_18000FA08 @ 0x18000FA08 (sub_18000FA08.c)
 *     sub_180010550 @ 0x180010550 (sub_180010550.c)
 *     sub_180012680 @ 0x180012680 (sub_180012680.c)
 *     sub_1800127D4 @ 0x1800127D4 (sub_1800127D4.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800160E0 @ 0x1800160E0 (sub_1800160E0.c)
 *     sub_18006B2E8 @ 0x18006B2E8 (sub_18006B2E8.c)
 *     sub_18006EEA0 @ 0x18006EEA0 (sub_18006EEA0.c)
 *     sub_1800824B0 @ 0x1800824B0 (sub_1800824B0.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_1800836F8 @ 0x1800836F8 (sub_1800836F8.c)
 *     sub_180083798 @ 0x180083798 (sub_180083798.c)
 *     sub_180083804 @ 0x180083804 (sub_180083804.c)
 *     sub_180083A24 @ 0x180083A24 (sub_180083A24.c)
 *     sub_180083BA4 @ 0x180083BA4 (sub_180083BA4.c)
 *     sub_180083D50 @ 0x180083D50 (sub_180083D50.c)
 *     sub_180083F00 @ 0x180083F00 (sub_180083F00.c)
 *     sub_180084118 @ 0x180084118 (sub_180084118.c)
 *     sub_1800842E4 @ 0x1800842E4 (sub_1800842E4.c)
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_18008468C @ 0x18008468C (sub_18008468C.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     sub_180084F94 @ 0x180084F94 (sub_180084F94.c)
 *     sub_1800852E4 @ 0x1800852E4 (sub_1800852E4.c)
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 *     sub_1800866D4 @ 0x1800866D4 (sub_1800866D4.c)
 *     sub_180086948 @ 0x180086948 (sub_180086948.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_180086E38 @ 0x180086E38 (sub_180086E38.c)
 *     sub_180086F3C @ 0x180086F3C (sub_180086F3C.c)
 *     sub_18008717C @ 0x18008717C (sub_18008717C.c)
 *     sub_1800872AC @ 0x1800872AC (sub_1800872AC.c)
 *     sub_180088348 @ 0x180088348 (sub_180088348.c)
 *     sub_1800883C0 @ 0x1800883C0 (sub_1800883C0.c)
 *     sub_18008B808 @ 0x18008B808 (sub_18008B808.c)
 *     sub_18008BE00 @ 0x18008BE00 (sub_18008BE00.c)
 *     sub_18008C330 @ 0x18008C330 (sub_18008C330.c)
 *     sub_18008CB6C @ 0x18008CB6C (sub_18008CB6C.c)
 *     sub_18008D004 @ 0x18008D004 (sub_18008D004.c)
 *     sub_1800BABD8 @ 0x1800BABD8 (sub_1800BABD8.c)
 *     sub_1800BAD2C @ 0x1800BAD2C (sub_1800BAD2C.c)
 *     sub_1800BAE80 @ 0x1800BAE80 (sub_1800BAE80.c)
 *     sub_1800BAFD4 @ 0x1800BAFD4 (sub_1800BAFD4.c)
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_1800F1160 @ 0x1800F1160 (sub_1800F1160.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 *     sub_180102120 @ 0x180102120 (sub_180102120.c)
 *     sub_180102AC0 @ 0x180102AC0 (sub_180102AC0.c)
 *     sub_180108188 @ 0x180108188 (sub_180108188.c)
 *     sub_18010D190 @ 0x18010D190 (sub_18010D190.c)
 * Callees:
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180087450(__int64 a1)
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
    sub_180063540(v2 + 16);
  if ( *((_QWORD *)&v2 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v4 + 1))(*((_QWORD *)&v4 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 8LL))(*((_QWORD *)&v4 + 1));
  }
}
