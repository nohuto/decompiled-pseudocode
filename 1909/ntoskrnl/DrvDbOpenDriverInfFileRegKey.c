/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1406F3354
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406F2FDC (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406F33A0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14093F868 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x1409411A8 (DrvDbSetDriverInfFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406F38E4 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
