/*
 * XREFs of sub_18003ECE0 @ 0x18003ECE0
 * Callers:
 *     sub_180040044 @ 0x180040044 (sub_180040044.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003ECE0(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`vftable';
  memset((void *)(a1 + 17), 0, 0x8FuLL);
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  `eh vector constructor iterator'((void *)(a1 + 64), 0x30uLL, 2uLL, sub_18003EEB0, sub_18003F030);
  return a1;
}
