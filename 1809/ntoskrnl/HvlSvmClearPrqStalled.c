/*
 * XREFs of HvlSvmClearPrqStalled @ 0x140275940
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C7290 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279580 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallpExtendedFastHypercall(65705LL, (__int64)v3, 8LL);
  return HvlpHvToNtStatus(v1);
}
