/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x14028A688
 * Callers:
 *     HvlSvmFlushPasid @ 0x140289E20 (HvlSvmFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14028A790 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(int a1, int a2)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v3[1] = a1;
  v3[0] = a2;
  return HvcallpExtendedFastHypercall(65696LL, (__int64)v3, 16LL);
}
