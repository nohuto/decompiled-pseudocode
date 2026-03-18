/*
 * XREFs of HvlpWritePerfRegister @ 0x140287100
 * Callers:
 *     HvlWritePerfIoPort @ 0x140285790 (HvlWritePerfIoPort.c)
 *     HvlWritePerfMsr @ 0x140285800 (HvlWritePerfMsr.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpWritePerfRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  _DWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  v6[1] = 0;
  v6[0] = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v4 = HvcallpExtendedFastHypercall(65563LL, (__int64)v6, 32LL);
  return HvlpHvToNtStatus(v4);
}
