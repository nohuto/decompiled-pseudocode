/*
 * XREFs of sub_18006BA70 @ 0x18006BA70
 * Callers:
 *     sub_18006B1D8 @ 0x18006B1D8 (sub_18006B1D8.c)
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18006BA70(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
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
