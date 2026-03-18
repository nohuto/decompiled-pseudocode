/*
 * XREFs of PsSetProcessPriorityClass @ 0x140306D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessPriorityClass(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 1119) = a2;
}
