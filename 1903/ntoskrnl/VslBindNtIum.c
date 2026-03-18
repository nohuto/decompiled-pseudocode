/*
 * XREFs of VslBindNtIum @ 0x140A399D4
 * Callers:
 *     HvlEnableVsmCalls @ 0x140A22E78 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS VslBindNtIum()
{
  __int16 v0; // sp
  NTSTATUS result; // eax
  _QWORD BaseAddress[15]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v4[14]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v4, 0, 0x68uLL);
  BaseAddress[2] = 0LL;
  BaseAddress[10] = 0LL;
  v4[1] = BaseAddress;
  BaseAddress[0] = 36992LL;
  BaseAddress[1] = 384LL;
  BaseAddress[3] = 36608LL;
  BaseAddress[4] = 7LL;
  BaseAddress[5] = 25960LL;
  BaseAddress[6] = 208LL;
  BaseAddress[7] = 209LL;
  BaseAddress[8] = 36LL;
  BaseAddress[9] = 2080LL;
  BaseAddress[11] = 1536LL;
  BaseAddress[12] = 484LL;
  BaseAddress[13] = 486LL;
  BaseAddress[14] = 152LL;
  v3 = 796LL;
  v4[2] = 128LL;
  v4[3] = (unsigned int)((unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12);
  if ( (unsigned __int64)((v0 + 48) & 0xFFF) + 128 > 0x1000 )
    v4[4] = (unsigned int)((unsigned __int64)MmGetPhysicalAddress((char *)&v3 + 7).QuadPart >> 12);
  result = VslpEnterIumSecureMode(2, 254LL, 0LL, (__int64)v4);
  if ( result < 0 )
    KeBugCheckEx(0x6Fu, result, 0xFFuLL, 0LL, 0LL);
  return result;
}
