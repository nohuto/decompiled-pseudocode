/*
 * XREFs of sub_180101EC0 @ 0x180101EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180081E0C @ 0x180081E0C (sub_180081E0C.c)
 *     sub_1800F0D40 @ 0x1800F0D40 (sub_1800F0D40.c)
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 */

bool __fastcall sub_180101EC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  bool result; // al

  result = 0;
  if ( sub_1800F0D40(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Aimer `RTTI Type Descriptor',
           1);
    v5 = v4;
    if ( *(_QWORD *)(v4 + 96) == *(_QWORD *)(a1 + 96)
      && *(_DWORD *)(v4 + 88) == *(_DWORD *)(a1 + 88)
      && !sub_180081E0C((unsigned __int64 *)(v4 + 112), (unsigned __int64 *)(a1 + 112))
      && !sub_180081E0C((unsigned __int64 *)(v5 + 124), (unsigned __int64 *)(a1 + 124))
      && !sub_180081E0C((unsigned __int64 *)(v5 + 140), (unsigned __int64 *)(a1 + 140))
      && *(float *)(v5 + 136) == *(float *)(a1 + 136) )
    {
      return 1;
    }
  }
  return result;
}
