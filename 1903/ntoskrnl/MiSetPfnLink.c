/*
 * XREFs of MiSetPfnLink @ 0x1400D8E38
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MiAssembleLargePagePfnList @ 0x1408996D4 (MiAssembleLargePagePfnList.c)
 *     MiDeletePfnBitMaps @ 0x14089BD50 (MiDeletePfnBitMaps.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
