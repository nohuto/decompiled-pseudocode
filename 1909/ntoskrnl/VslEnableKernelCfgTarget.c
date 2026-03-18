/*
 * XREFs of VslEnableKernelCfgTarget @ 0x1408519C8
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x140135AA8 (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2, 217LL, 0LL, (__int64)v3);
}
