/*
 * XREFs of MiSetPfnLink @ 0x140065CA4
 * Callers:
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BEC (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140715F58 (MiMapNewSession.c)
 *     MiAssembleLargePagePfnList @ 0x14085CC1C (MiAssembleLargePagePfnList.c)
 *     MiDeletePfnBitMaps @ 0x14085F530 (MiDeletePfnBitMaps.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
