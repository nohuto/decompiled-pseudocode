/*
 * XREFs of sub_18006E544 @ 0x18006E544
 * Callers:
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 * Callees:
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006E544(__int64 a1)
{
  __int64 v2; // rbx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::CpuProfiler>::`vftable';
  v2 = a1 + 16;
  memset((void *)(a1 + 16), 0, 0x128uLL);
  sub_18011E188(v2);
  *(_BYTE *)(v2 + 8) = 1;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  `eh vector constructor iterator'(
    (void *)(v2 + 56),
    0x18uLL,
    0xAuLL,
    (void (*)(void *))unknown_libname_175,
    (void (*)(void *))sub_1800177A0);
  return a1;
}
