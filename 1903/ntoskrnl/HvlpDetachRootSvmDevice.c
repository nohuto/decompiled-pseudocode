/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x14028A48C
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x140289A10 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x140289CE0 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpDetachRootSvmDevice(unsigned int a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 | 0x4000000000000000LL;
  v1 = HvcallpExtendedFastHypercall(65667LL, (__int64)v3, 16LL);
  return HvlpHvToNtStatus(v1);
}
