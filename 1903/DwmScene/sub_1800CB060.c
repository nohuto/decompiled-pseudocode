/*
 * XREFs of sub_1800CB060 @ 0x1800CB060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_1800A5128 @ 0x1800A5128 (sub_1800A5128.c)
 *     ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800FB330 (-GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ.c)
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_1800CB060(__int64 a1, __int64 a2, _QWORD *a3)
{
  Concurrency::details::VirtualProcessor *v5; // rdi
  __int64 v6; // rbx
  const struct Concurrency::location *Location; // rax

  v5 = (Concurrency::details::VirtualProcessor *)_RTDynamicCast(
                                                   a2,
                                                   0LL,
                                                   &Spectre::Engine::ImageProcessingEffect `RTTI Type Descriptor',
                                                   &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor',
                                                   1);
  v6 = sub_180078118(*(_QWORD *)(a1 + 8));
  sub_1800A5128(v6, (__int64)&qword_18025C178, a3);
  Location = Concurrency::details::VirtualProcessor::GetLocation(v5);
  return sub_1800A516C(v6, (__int64)&qword_18025C178, Location);
}
