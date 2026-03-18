/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x14028A2C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  PHYSICAL_ADDRESS v6[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[64]; // [rsp+40h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = HvlpAcquireHypercallPage(v6, 1, (__int64)v7, 32LL);
  *v4 = -1LL;
  v4[1] = a1;
  *((_OWORD *)v4 + 1) = *a2;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v6);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
