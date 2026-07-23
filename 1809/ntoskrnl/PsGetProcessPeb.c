/*
 * XREFs of PsGetProcessPeb @ 0x140126D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessPeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 1016);
}
