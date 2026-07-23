/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x1402764CC
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x140275A40 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x140275D70 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
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
