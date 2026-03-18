/*
 * XREFs of PopMarkComponentsBootPhase @ 0x14059D210
 * Callers:
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14013DB34 (VfIsVerifierEnabled.c)
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 *     FirstEntrySList @ 0x1401CC560 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvlMarkHiberPhase @ 0x14028AB80 (HvlMarkHiberPhase.c)
 *     MmIsAddressValid @ 0x1402C4970 (MmIsAddressValid.c)
 *     RtlMarkHiberPhase @ 0x140317FCC (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x140327004 (VfIsVerifierExtensionEnabled.c)
 *     BgkResumePrepare @ 0x14059B590 (BgkResumePrepare.c)
 *     MiConvertHiberPhasePages @ 0x14059C7E4 (MiConvertHiberPhasePages.c)
 *     KdMarkHiberPhase @ 0x1405AAC98 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x1405AAD28 (KeMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x1405AC2F8 (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x1405ACE94 (PopMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(PVOID Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v5; // rbx
  PVOID *m; // rbx

  if ( !byte_1404433C1 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&SListHead); j; j = j->Next )
      KeMarkHiberPhase(*((PVOID *)&j[-1].Next + 1));
    ((void (__fastcall *)(_QWORD))off_1404242E8[0])(0LL);
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() == 1 && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    MmMarkHiberPhase();
    for ( k = 0; k < IopNumTriageDumpDataBlocks; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        (PVOID)IopTriageDumpDataBlocks[2 * k],
        _mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * k], 8).m128i_u64[0] - IopTriageDumpDataBlocks[2 * k],
        0x42706D44u);
    v5 = PopShutdownNotificationCallback;
    if ( PopShutdownNotificationCallback )
    {
      PoSetHiberRange(0LL, 0x10000u, PopShutdownNotificationCallback, 0x18uLL, 0x6E72654Bu);
      ((void (__fastcall *)(_QWORD))*v5)(v5[2]);
    }
    for ( m = (PVOID *)PopThermal; m != &PopThermal; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages((__int64)Address + 32);
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
}
