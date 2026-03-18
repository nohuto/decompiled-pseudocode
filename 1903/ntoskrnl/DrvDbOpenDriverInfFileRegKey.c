/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1406F18B4
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406F153C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406F1900 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14093FDF8 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140941738 (DrvDbSetDriverInfFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
