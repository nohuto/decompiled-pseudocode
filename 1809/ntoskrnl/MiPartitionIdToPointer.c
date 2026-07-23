/*
 * XREFs of MiPartitionIdToPointer @ 0x140134DB8
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060851C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x140663B20 (MiFreeReadListPages.c)
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E1BA0 (MiDeleteLeakedSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14072AC5C (MiMarkBootGuardPage.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_14043B808 + 8LL * a1);
}
