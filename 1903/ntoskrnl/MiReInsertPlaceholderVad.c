/*
 * XREFs of MiReInsertPlaceholderVad @ 0x1402DEDC0
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 * Callees:
 *     MiInsertVad @ 0x14015A7D0 (MiInsertVad.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1)
{
  MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3);
}
