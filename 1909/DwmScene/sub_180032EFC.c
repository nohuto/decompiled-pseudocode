/*
 * XREFs of sub_180032EFC @ 0x180032EFC
 * Callers:
 *     sub_180036E90 @ 0x180036E90 (sub_180036E90.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180032EFC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceSampler `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::SamplerD3D11 `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
