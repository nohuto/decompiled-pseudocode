/*
 * XREFs of MiSetPfnLink @ 0x1400B8CB8
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiAssembleLargePagePfnList @ 0x140898EF4 (MiAssembleLargePagePfnList.c)
 *     MiDeletePfnBitMaps @ 0x14089B570 (MiDeletePfnBitMaps.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
