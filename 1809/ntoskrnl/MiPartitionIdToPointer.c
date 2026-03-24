/*
 * XREFs of MiPartitionIdToPointer @ 0x140134CE8
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060751C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x140662960 (MiFreeReadListPages.c)
 *     MiDereferenceSessionFinal @ 0x1406E05B8 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E0900 (MiDeleteLeakedSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x140729A6C (MiMarkBootGuardPage.c)
 *     MiCopyDirectMapHeader @ 0x140852BA4 (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * a1);
}
