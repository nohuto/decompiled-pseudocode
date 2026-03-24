/*
 * XREFs of NtCreateIRTimer @ 0x14071F190
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14068A550 (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(__int64 *a1, __int64 a2, unsigned int a3)
{
  return NtCreateTimer2(a1, a2, 0LL, 2, a3);
}
