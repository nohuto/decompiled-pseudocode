/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1402762F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  PHYSICAL_ADDRESS v6[3]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[64]; // [rsp+40h] [rbp-58h] BYREF

  v4 = HvlpAcquireHypercallPage(v6, 1, (__int64)v7, 32LL);
  *v4 = -1LL;
  v4[1] = a1;
  *((_OWORD *)v4 + 1) = *a2;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v6);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
