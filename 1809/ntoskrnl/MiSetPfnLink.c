/*
 * XREFs of MiSetPfnLink @ 0x140065C94
 * Callers:
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiAssembleLargePagePfnList @ 0x14085DE5C (MiAssembleLargePagePfnList.c)
 *     MiDeletePfnBitMaps @ 0x140860770 (MiDeletePfnBitMaps.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
