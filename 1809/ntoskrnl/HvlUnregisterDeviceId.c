/*
 * XREFs of HvlUnregisterDeviceId @ 0x1402763A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnregisterDeviceId(unsigned __int64 a1)
{
  unsigned __int16 v2; // ax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    return 3221225485LL;
  v3[1] = a1;
  v3[0] = -1LL;
  v2 = HvcallpExtendedFastHypercall(65667LL, (__int64)v3, 16LL);
  return HvlpHvToNtStatus(v2);
}
