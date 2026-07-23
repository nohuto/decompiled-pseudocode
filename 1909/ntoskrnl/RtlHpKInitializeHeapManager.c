/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1401963AC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140195F48 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x14017A0DC (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x14017A650 (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x140196434 (RtlHpGlobalsInitialize.c)
 */

NTSTATUS RtlHpKInitializeHeapManager()
{
  _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_14046F750 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_14046F750 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1u, (_RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
