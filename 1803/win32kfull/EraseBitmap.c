/*
 * XREFs of EraseBitmap @ 0x1C00BCC8C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall EraseBitmap(HBRUSH a1)
{
  __int64 v2; // rbx
  int v4[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v4, 0, 0x20uLL);
  GreExtGetObjectW(a1, 32LL, (char *)v4);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0LL, 0, v4[1], v4[2], 66);
  return GreSelectBitmap(ghdcMem, v2);
}
