/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4
 * Callers:
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiPrefetchJumpVad @ 0x1402AF3B4 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1402C69AC (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140639940 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_14043B180 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_14043B180;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}
