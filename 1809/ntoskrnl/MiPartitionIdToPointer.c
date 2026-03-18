/*
 * XREFs of MiPartitionIdToPointer @ 0x140134CC8
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060751C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x140662980 (MiFreeReadListPages.c)
 *     MiDereferenceSessionFinal @ 0x1406E05D8 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E0920 (MiDeleteLeakedSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140715F58 (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x140729A8C (MiMarkBootGuardPage.c)
 *     MiCopyDirectMapHeader @ 0x140852BC4 (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * a1);
}
