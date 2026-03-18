/*
 * XREFs of PsGetThreadCreateTime @ 0x140307100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadCreateTime(__int64 a1)
{
  return *(_QWORD *)(a1 + 1536);
}
