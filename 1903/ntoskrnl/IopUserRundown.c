/*
 * XREFs of IopUserRundown @ 0x1406ECA70
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
