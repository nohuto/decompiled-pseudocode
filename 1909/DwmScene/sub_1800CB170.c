/*
 * XREFs of sub_1800CB170 @ 0x1800CB170
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A5238 @ 0x1800A5238 (sub_1800A5238.c)
 *     ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800FB440 (-GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ.c)
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_1800CB170(__int64 a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_180078228(*(_QWORD *)(a1 + 8));
  sub_1800A5238(v6, (__int64)&qword_18025D178, a3);
  Location = Concurrency::details::VirtualProcessor::GetLocation(v5);
  return sub_1800A527C(v6, (__int64)&qword_18025D178, Location);
}
