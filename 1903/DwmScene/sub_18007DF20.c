/*
 * XREFs of sub_18007DF20 @ 0x18007DF20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E678 @ 0x18007E678 (sub_18007E678.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007DF20(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  `eh vector destructor iterator'((void *)(a1 + 72), 0x18uLL, 0xAuLL, (void (*)(void *))sub_180017730);
  sub_18007E678(v1 + 32);
  return sub_18011E090(v1);
}
