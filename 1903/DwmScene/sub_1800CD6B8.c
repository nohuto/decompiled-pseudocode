/*
 * XREFs of sub_1800CD6B8 @ 0x1800CD6B8
 * Callers:
 *     sub_1800CC558 @ 0x1800CC558 (sub_1800CC558.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800CD6B8(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RendererResource `RTTI Type Descriptor',
         &Spectre::Engine::DeviceDomainShader `RTTI Type Descriptor',
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
