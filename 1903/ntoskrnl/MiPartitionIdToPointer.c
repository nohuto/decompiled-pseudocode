/*
 * XREFs of MiPartitionIdToPointer @ 0x1401367DC
 * Callers:
 *     MiFreeReadListPages @ 0x14066E208 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14066E290 (MiFreeReadListPageList.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E5C84 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14074D994 (MiMarkBootGuardPage.c)
 *     MiAssembleLargePagePfnList @ 0x1408996D4 (MiAssembleLargePagePfnList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140466188 + 8LL * a1);
}
