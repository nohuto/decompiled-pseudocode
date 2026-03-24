/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x14018D548
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14018D278 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x140170268 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x1401707D0 (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x14018D5D0 (RtlHpGlobalsInitialize.c)
 */

NTSTATUS RtlHpKInitializeHeapManager()
{
  union _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_140443408 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140443408 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1u, (union _RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
