/*
 * XREFs of sub_18007E030 @ 0x18007E030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E788 @ 0x18007E788 (sub_18007E788.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007E030(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  `eh vector destructor iterator'((void *)(a1 + 72), 0x18uLL, 0xAuLL, (void (*)(void *))sub_1800177A0);
  sub_18007E788(v1 + 32);
  return sub_18011E1A0(v1);
}
