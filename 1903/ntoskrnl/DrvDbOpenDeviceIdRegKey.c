/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x1409409DC
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406FAC00 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FB124 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14093F728 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140940E00 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
