/*
 * XREFs of sub_1800BC8F0 @ 0x1800BC8F0
 * Callers:
 *     sub_1800BAE80 @ 0x1800BAE80 (sub_1800BAE80.c)
 *     sub_1801001B0 @ 0x1801001B0 (sub_1801001B0.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800BC8F0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
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
