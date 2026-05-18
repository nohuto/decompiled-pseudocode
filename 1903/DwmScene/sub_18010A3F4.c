/*
 * XREFs of sub_18010A3F4 @ 0x18010A3F4
 * Callers:
 *     sub_1800FA010 @ 0x1800FA010 (sub_1800FA010.c)
 *     sub_1800FAFCC @ 0x1800FAFCC (sub_1800FAFCC.c)
 *     sub_18011206C @ 0x18011206C (sub_18011206C.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18010A3F4(__int64 a1)
{
  _QWORD *v1; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v1 = (_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 128) = 15LL;
  *(_BYTE *)(a1 + 104) = 0;
  if ( *(_QWORD *)(a1 + 128) >= 0x10uLL )
    v1 = (_QWORD *)*v1;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)v1 = 0;
  *(_BYTE *)(a1 + 136) = 1;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 2;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_DWORD *)(a1 + 176) = 0;
  return a1;
}
