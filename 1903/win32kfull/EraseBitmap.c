/*
 * XREFs of EraseBitmap @ 0x1C0081880
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall EraseBitmap(HBRUSH a1)
{
  int v3[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v3, 0, 0x20uLL);
  GreExtGetObjectW(a1, 32LL, (char *)v3);
  GreSelectBitmap(ghdcMem);
  NtGdiPatBlt(ghdcMem, 0LL, 0, v3[1], v3[2], 66);
  return GreSelectBitmap(ghdcMem);
}
