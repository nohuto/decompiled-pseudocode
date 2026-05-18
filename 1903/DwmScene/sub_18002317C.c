/*
 * XREFs of sub_18002317C @ 0x18002317C
 * Callers:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_1800219BC @ 0x1800219BC (sub_1800219BC.c)
 *     sub_180022F70 @ 0x180022F70 (sub_180022F70.c)
 *     sub_1800231F0 @ 0x1800231F0 (sub_1800231F0.c)
 *     sub_1800252A0 @ 0x1800252A0 (sub_1800252A0.c)
 *     sub_1800298D8 @ 0x1800298D8 (sub_1800298D8.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 *     sub_180033E7C @ 0x180033E7C (sub_180033E7C.c)
 *     sub_180038E40 @ 0x180038E40 (sub_180038E40.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_18003DD40 @ 0x18003DD40 (sub_18003DD40.c)
 *     sub_18003E2F0 @ 0x18003E2F0 (sub_18003E2F0.c)
 *     sub_18003F720 @ 0x18003F720 (sub_18003F720.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 *     sub_180041D80 @ 0x180041D80 (sub_180041D80.c)
 *     sub_180042614 @ 0x180042614 (sub_180042614.c)
 *     sub_180043400 @ 0x180043400 (sub_180043400.c)
 *     sub_1800437F0 @ 0x1800437F0 (sub_1800437F0.c)
 *     sub_180043BB0 @ 0x180043BB0 (sub_180043BB0.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_180044440 @ 0x180044440 (sub_180044440.c)
 *     sub_180044E88 @ 0x180044E88 (sub_180044E88.c)
 *     sub_180045004 @ 0x180045004 (sub_180045004.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002317C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4256);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
