/*
 * XREFs of VslBindNtIum @ 0x1409F54C4
 * Callers:
 *     HvlEnableVsmCalls @ 0x1409E0548 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

NTSTATUS VslBindNtIum()
{
  __int16 v0; // sp
  NTSTATUS result; // eax
  _QWORD BaseAddress[15]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v4[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v5; // [rsp+B8h] [rbp-48h]
  __int64 v6; // [rsp+C0h] [rbp-40h]
  __int64 v7; // [rsp+C8h] [rbp-38h]
  __int64 v8; // [rsp+D0h] [rbp-30h]

  BaseAddress[2] = 0LL;
  BaseAddress[10] = 0LL;
  v5 = BaseAddress;
  BaseAddress[0] = 32832LL;
  BaseAddress[1] = 384LL;
  BaseAddress[3] = 32448LL;
  BaseAddress[4] = 7LL;
  BaseAddress[5] = 25960LL;
  BaseAddress[6] = 208LL;
  BaseAddress[7] = 209LL;
  BaseAddress[8] = 36LL;
  BaseAddress[9] = 2064LL;
  BaseAddress[11] = 1520LL;
  BaseAddress[12] = 484LL;
  BaseAddress[13] = 486LL;
  BaseAddress[14] = 152LL;
  v3 = 796LL;
  v6 = 128LL;
  v7 = (unsigned int)((unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12);
  if ( (unsigned __int64)((v0 + 48) & 0xFFF) + 128 > 0x1000 )
    v8 = (unsigned int)((unsigned __int64)MmGetPhysicalAddress((char *)&v3 + 7).QuadPart >> 12);
  result = VslpEnterIumSecureMode(2u, 237LL, 0, (__int64)v4);
  if ( result < 0 )
    KeBugCheckEx(0x6Fu, result, 0xFFuLL, 0LL, 0LL);
  return result;
}
