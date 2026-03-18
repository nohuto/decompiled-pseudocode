/*
 * XREFs of sub_14062720C @ 0x14062720C
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x140626BA0 (ExpHwidGetDeviceProperties.c)
 *     sub_140918A0C @ 0x140918A0C (sub_140918A0C.c)
 * Callees:
 *     sub_140627254 @ 0x140627254 (sub_140627254.c)
 */

__int64 __fastcall sub_14062720C(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_140627254(a1, a2, a1);
  sub_140627254(v2 + 40, v3, v4);
  sub_140627254(v5 + 56, v6, v5);
  return sub_140627254(v7 + 72, v8, v7);
}
