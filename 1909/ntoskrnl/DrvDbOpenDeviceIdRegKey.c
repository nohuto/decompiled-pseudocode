/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x14094044C
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406FC9E0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FCF04 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14093F198 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140940870 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406F38E4 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
