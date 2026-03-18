/*
 * XREFs of PiDqFreeMem @ 0x1408656C0
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x58706E50u);
}
