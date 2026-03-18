/*
 * XREFs of IopUserRundown @ 0x1406CD9D0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1400B9650 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
