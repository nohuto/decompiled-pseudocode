/*
 * XREFs of RtlCreateAtomTable @ 0x18005BC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, (__int64)a2, a2);
}
