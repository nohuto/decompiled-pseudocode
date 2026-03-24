/*
 * XREFs of IoQueueThreadIrp @ 0x140160E10
 * Callers:
 *     PiPagePathSetState @ 0x14075C1DC (PiPagePathSetState.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1400BC380 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  IopQueueThreadIrp((__int64)Irp, v1, v2);
}
