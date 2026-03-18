/*
 * XREFs of EraseBitmap @ 0x1C0139B80
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     memset @ 0x1C0168440 (memset.c)
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
