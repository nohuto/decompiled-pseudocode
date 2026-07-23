/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1402766D0
 * Callers:
 *     HvlSvmFlushPasid @ 0x140275EB0 (HvlSvmFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1402767D0 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
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
