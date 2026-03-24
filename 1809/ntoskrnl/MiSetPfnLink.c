/*
 * XREFs of MiSetPfnLink @ 0x140065CA4
 * Callers:
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BCC (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiAssembleLargePagePfnList @ 0x14085CBFC (MiAssembleLargePagePfnList.c)
 *     MiDeletePfnBitMaps @ 0x14085F510 (MiDeletePfnBitMaps.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
