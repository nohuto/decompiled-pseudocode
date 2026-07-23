/*
 * XREFs of PopEtInitializeBuiltinAppId @ 0x14075D0B0
 * Callers:
 *     PopEtInit @ 0x1409D9A28 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtInitializeBuiltinAppId(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = PopEtGlobals;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 24) &= 0xFFFFC0000000FFFFuLL;
  *(_QWORD *)(a1 + 32) = v2 + 928;
  *(_QWORD *)(a1 + 64) = v2 + 936;
  LOWORD(v2) = *(unsigned __int8 *)(v2 + 937);
  *(_QWORD *)(a1 + 40) = a2;
  *(_WORD *)(a1 + 78) = 4 * (v2 + 2);
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a2 + 2 * result) );
  *(_WORD *)(a1 + 72) = result;
  return result;
}
