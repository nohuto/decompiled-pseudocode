/*
 * XREFs of _anonymous_namespace_::FramesReport::FramesReport @ 0x1800D1DC8
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x18003B678 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::State::State @ 0x1800DFB2C (_anonymous_namespace_--State--State.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::FramesReport::FramesReport(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[18] = v2;
  a1[20] = 0LL;
  a1[21] = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  a1[20] = v3;
  a1[22] = 0LL;
  a1[23] = 0LL;
  return a1;
}
