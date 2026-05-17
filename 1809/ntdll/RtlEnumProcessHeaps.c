/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800F1EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumProcessHeaps(__int64 a1, __int64 a2)
{
  return RtlpEnumProcessHeaps(a1, a2, 0);
}
