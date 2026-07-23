/*
 * XREFs of KeInvalidAccessAllowed @ 0x140117D7C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1400E93A0 (MiCheckSystemPageTables.c)
 *     MiAllowGuardFault @ 0x140117D28 (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x1401291F8 (MiRaisedIrqlFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140168D38 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeInvalidAccessAllowed(__int64 a1)
{
  __int16 v1; // ax
  void *v2; // rax

  if ( a1 )
  {
    v1 = *(_WORD *)(a1 + 368);
    if ( v1 == 16 )
    {
      v2 = &ExpInterlockedPopEntrySListFault;
      return *(_QWORD *)(a1 + 360) == (_QWORD)v2;
    }
    if ( v1 == 51 )
    {
      v2 = (void *)KeUserPopEntrySListFault;
      return *(_QWORD *)(a1 + 360) == (_QWORD)v2;
    }
  }
  return 0;
}
