/*
 * XREFs of HvlSvmDisablePasid @ 0x140275DE0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDisablePasid(unsigned int a1, int a2)
{
  unsigned __int16 v2; // ax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v4 = a1;
  v5 = a2;
  v2 = HvcallpExtendedFastHypercall(65701LL, (__int64)&v4, 16LL);
  return HvlpHvToNtStatus(v2);
}
