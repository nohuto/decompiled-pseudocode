/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54
 * Callers:
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x1402C701C (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1402E0924 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140687CD0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140465B00 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140465B00;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}
