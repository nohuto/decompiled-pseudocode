/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1400947A4
 * Callers:
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiPrefetchJumpVad @ 0x1402AF0C4 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1402C66BC (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140638920 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_14043A0C0 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_14043A0C0;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}
