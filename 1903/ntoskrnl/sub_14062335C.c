/*
 * XREFs of sub_14062335C @ 0x14062335C
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x140622CF0 (ExpHwidGetDeviceProperties.c)
 *     sub_140918FAC @ 0x140918FAC (sub_140918FAC.c)
 * Callees:
 *     sub_1406233A4 @ 0x1406233A4 (sub_1406233A4.c)
 */

__int64 __fastcall sub_14062335C(__int64 a1, __int64 a2)
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
  sub_1406233A4(a1, a2, a1);
  sub_1406233A4(v2 + 40, v3, v4);
  sub_1406233A4(v5 + 56, v6, v5);
  return sub_1406233A4(v7 + 72, v8, v7);
}
