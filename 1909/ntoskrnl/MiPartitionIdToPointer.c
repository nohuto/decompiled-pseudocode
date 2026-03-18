/*
 * XREFs of MiPartitionIdToPointer @ 0x1400F8738
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFreeReadListPages @ 0x140647C68 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x140647CF0 (MiFreeReadListPageList.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiDereferenceSessionFinal @ 0x140728ECC (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14074E424 (MiMarkBootGuardPage.c)
 *     MiAssembleLargePagePfnList @ 0x140898EF4 (MiAssembleLargePagePfnList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140465E88 + 8LL * a1);
}
