/*
 * XREFs of IopUserRundown @ 0x1406CEC50
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
