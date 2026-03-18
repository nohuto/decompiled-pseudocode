/*
 * XREFs of HvlDmaDeleteDeviceDomain @ 0x140287320
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDeleteDeviceDomain(int *a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  BOOL v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+44h] [rbp-24h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v4 = *((_BYTE *)a1 + 4) != 0;
  v5 = *a1;
  v1 = HvcallpExtendedFastHypercall(65733LL, (__int64)v3, 24LL);
  return HvlpHvToNtStatus(v1);
}
