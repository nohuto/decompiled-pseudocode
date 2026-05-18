/*
 * XREFs of sub_1800456E0 @ 0x1800456E0
 * Callers:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=8
void *sub_1800456E0()
{
  __int64 v1; // r8

  if ( dword_18026A050 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026A050);
    if ( dword_18026A050 == -1 )
    {
      memmove(&unk_180259220, "DepthOnly", 9uLL);
      byte_180259229 = 0;
      qword_180259258 = 15LL;
      byte_180259240 = 0;
      qword_180259250 = 11LL;
      memmove(&byte_180259240, "Diagnostics", 0xBuLL);
      byte_18025924B = 0;
      qword_180259278 = 15LL;
      byte_180259260 = 0;
      qword_180259270 = 10LL;
      memmove(&byte_180259260, "Background", 0xAuLL);
      byte_18025926A = 0;
      qword_180259298 = 15LL;
      byte_180259280 = 0;
      qword_180259290 = 9LL;
      memmove(&byte_180259280, "AlphaMask", 9uLL);
      byte_180259289 = 0;
      qword_1802592B8 = 15LL;
      byte_1802592A0 = 0;
      qword_1802592B0 = 10LL;
      memmove(&byte_1802592A0, "AlphaBlend", 0xAuLL);
      byte_1802592AA = 0;
      qword_1802592D8 = 15LL;
      byte_1802592C0 = 0;
      qword_1802592D0 = 8LL;
      memmove(&byte_1802592C0, "Skinning", 8uLL);
      byte_1802592C8 = 0;
      qword_1802592F8 = 15LL;
      byte_1802592E0 = 0;
      qword_1802592F0 = 12LL;
      memmove(&byte_1802592E0, "DepthToColor", 0xCuLL);
      byte_1802592EC = 0;
      xmmword_180259310 = (__int128)_mm_load_si128(xmmword_180145F90);
      byte_180259300 = 0;
      LOBYTE(v1) = 0;
      sub_18000E168((__int64 *)&byte_180259300, 0x16uLL, v1, "StochasticTransparency");
      qword_180259338 = 15LL;
      byte_180259320 = 0;
      qword_180259330 = 12LL;
      memmove(&byte_180259320, "GLTFMaterial", 0xCuLL);
      byte_18025932C = 0;
      atexit(sub_180134E90);
      Init_thread_footer(&dword_18026A050);
    }
  }
  return &unk_180259220;
}
