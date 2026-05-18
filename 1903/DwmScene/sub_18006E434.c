/*
 * XREFs of sub_18006E434 @ 0x18006E434
 * Callers:
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 * Callees:
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006E434(__int64 a1)
{
  __int64 v2; // rbx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::CpuProfiler>::`vftable';
  v2 = a1 + 16;
  memset((void *)(a1 + 16), 0, 0x128uLL);
  sub_18011E078(v2);
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
    (void (*)(void *))sub_180017730);
  return a1;
}
