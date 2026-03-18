/*
 * XREFs of MiJumpStack @ 0x1402C4200
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 */

char __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
