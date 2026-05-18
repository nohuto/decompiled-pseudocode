/*
 * XREFs of sub_1800FB0DC @ 0x1800FB0DC
 * Callers:
 *     sub_1800BCCC8 @ 0x1800BCCC8 (sub_1800BCCC8.c)
 * Callees:
 *     sub_18010A504 @ 0x18010A504 (sub_18010A504.c)
 */

__int64 __fastcall sub_1800FB0DC(__int64 a1)
{
  __int64 result; // rax

  sub_18010A504();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 232) = 1;
  return result;
}
