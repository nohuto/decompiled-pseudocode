/*
 * XREFs of PsGetContextThread @ 0x14088BA20
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetContextThread(__int64 a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
