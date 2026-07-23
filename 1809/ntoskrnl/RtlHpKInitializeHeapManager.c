/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x14018D688
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14018D3B8 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x140170368 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x1401708D0 (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x14018D710 (RtlHpGlobalsInitialize.c)
 */

NTSTATUS RtlHpKInitializeHeapManager()
{
  _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_1404444C8 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_1404444C8 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1u, (_RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
