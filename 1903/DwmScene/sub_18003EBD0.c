/*
 * XREFs of sub_18003EBD0 @ 0x18003EBD0
 * Callers:
 *     sub_18003FF34 @ 0x18003FF34 (sub_18003FF34.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003EBD0(__int64 a1)
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
  `eh vector constructor iterator'((void *)(a1 + 64), 0x30uLL, 2uLL, sub_18003EDA0, sub_18003EF20);
  return a1;
}
