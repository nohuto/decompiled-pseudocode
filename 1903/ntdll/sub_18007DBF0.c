/*
 * XREFs of sub_18007DBF0 @ 0x18007DBF0
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 *     sub_1800F915C @ 0x1800F915C (sub_1800F915C.c)
 * Callees:
 *     sub_18007DC3C @ 0x18007DC3C (sub_18007DC3C.c)
 */

char __fastcall sub_18007DBF0(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rcx
  int v7; // r11d
  __int64 v8; // rax
  char result; // al

  if ( !(unsigned __int8)sub_18007DC3C(a1, a2) )
    return 0;
  v8 = *(_QWORD *)(v6 + 40) - 2LL;
  *(_DWORD *)(v6 + 56) = v7;
  *(_QWORD *)(v6 + 64) = v8;
  result = 1;
  *(_BYTE *)(v6 + 72) = a3;
  *(_BYTE *)(v6 + 73) = a4;
  return result;
}
