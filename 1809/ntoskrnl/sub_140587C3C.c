/*
 * XREFs of sub_140587C3C @ 0x140587C3C
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1405875BC (ExpHwidGetDeviceProperties.c)
 *     sub_1408DC4BC @ 0x1408DC4BC (sub_1408DC4BC.c)
 * Callees:
 *     sub_140587C84 @ 0x140587C84 (sub_140587C84.c)
 */

__int64 __fastcall sub_140587C3C(__int64 a1, __int64 a2)
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
  sub_140587C84(a1, a2, a1);
  sub_140587C84(v2 + 40, v3, v4);
  sub_140587C84(v5 + 56, v6, v5);
  return sub_140587C84(v7 + 72, v8, v7);
}
