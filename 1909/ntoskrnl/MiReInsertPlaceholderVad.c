/*
 * XREFs of MiReInsertPlaceholderVad @ 0x1402DEB20
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 * Callees:
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1)
{
  MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3);
}
