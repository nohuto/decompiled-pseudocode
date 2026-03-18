/*
 * XREFs of MiReInsertPlaceholderVad @ 0x1402C4D90
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 * Callees:
 *     MiInsertVad @ 0x14011014C (MiInsertVad.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1)
{
  MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3);
}
