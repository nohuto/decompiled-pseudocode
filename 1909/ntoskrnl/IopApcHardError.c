/*
 * XREFs of IopApcHardError @ 0x140852D70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopRaiseHardError @ 0x140853B00 (IopRaiseHardError.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
