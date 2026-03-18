/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4
 * Callers:
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolvePrivateZeroFault @ 0x1400AD2E0 (MiResolvePrivateZeroFault.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x1402C6D7C (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1402E0684 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x14064DEA0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140465800 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140465800;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}
