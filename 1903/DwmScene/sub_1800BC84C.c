/*
 * XREFs of sub_1800BC84C @ 0x1800BC84C
 * Callers:
 *     sub_1800BE470 @ 0x1800BE470 (sub_1800BE470.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C52FC @ 0x1800C52FC (sub_1800C52FC.c)
 *     sub_1800C6D70 @ 0x1800C6D70 (sub_1800C6D70.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800BC84C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
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
