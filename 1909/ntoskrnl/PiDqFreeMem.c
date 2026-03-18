/*
 * XREFs of PiDqFreeMem @ 0x140864DC0
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x58706E50u);
}
