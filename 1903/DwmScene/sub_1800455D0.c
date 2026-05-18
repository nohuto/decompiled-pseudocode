/*
 * XREFs of sub_1800455D0 @ 0x1800455D0
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=8
void *sub_1800455D0()
{
  __int64 v1; // r8

  if ( dword_180269050 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180269050);
    if ( dword_180269050 == -1 )
    {
      memmove(&unk_180258220, "DepthOnly", 9uLL);
      byte_180258229 = 0;
      qword_180258258 = 15LL;
      byte_180258240 = 0;
      qword_180258250 = 11LL;
      memmove(&byte_180258240, "Diagnostics", 0xBuLL);
      byte_18025824B = 0;
      qword_180258278 = 15LL;
      byte_180258260 = 0;
      qword_180258270 = 10LL;
      memmove(&byte_180258260, "Background", 0xAuLL);
      byte_18025826A = 0;
      qword_180258298 = 15LL;
      byte_180258280 = 0;
      qword_180258290 = 9LL;
      memmove(&byte_180258280, "AlphaMask", 9uLL);
      byte_180258289 = 0;
      qword_1802582B8 = 15LL;
      byte_1802582A0 = 0;
      qword_1802582B0 = 10LL;
      memmove(&byte_1802582A0, "AlphaBlend", 0xAuLL);
      byte_1802582AA = 0;
      qword_1802582D8 = 15LL;
      byte_1802582C0 = 0;
      qword_1802582D0 = 8LL;
      memmove(&byte_1802582C0, "Skinning", 8uLL);
      byte_1802582C8 = 0;
      qword_1802582F8 = 15LL;
      byte_1802582E0 = 0;
      qword_1802582F0 = 12LL;
      memmove(&byte_1802582E0, "DepthToColor", 0xCuLL);
      byte_1802582EC = 0;
      xmmword_180258310 = (__int128)_mm_load_si128(xmmword_180144F90);
      byte_180258300 = 0;
      LOBYTE(v1) = 0;
      sub_18000E118((__int64 *)&byte_180258300, 0x16uLL, v1, "StochasticTransparency");
      qword_180258338 = 15LL;
      byte_180258320 = 0;
      qword_180258330 = 12LL;
      memmove(&byte_180258320, "GLTFMaterial", 0xCuLL);
      byte_18025832C = 0;
      atexit(sub_180134D80);
      Init_thread_footer(&dword_180269050);
    }
  }
  return &unk_180258220;
}
