/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x140195BCC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140195768 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x1401799EC (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x140179F60 (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x140195C54 (RtlHpGlobalsInitialize.c)
 */

NTSTATUS RtlHpKInitializeHeapManager()
{
  _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_14046FA10 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_14046FA10 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1u, (_RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
