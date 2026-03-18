/*
 * XREFs of Register_UnmapSecureMmio @ 0x1C006861C
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0063E20 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_UnmapSecureMmio(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  v4[3] = *(_QWORD *)(a1 + 120);
  *(_OWORD *)&v4[1] = 0LL;
  v4[4] = 9LL;
  return SecureChannel_SendRequestSynchronously(v2, (unsigned int)v4, 40, 0, 0);
}
