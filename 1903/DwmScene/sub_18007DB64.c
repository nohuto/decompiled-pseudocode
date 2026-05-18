/*
 * XREFs of sub_18007DB64 @ 0x18007DB64
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_180065A00 @ 0x180065A00 (sub_180065A00.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 *     sub_180115168 @ 0x180115168 (sub_180115168.c)
 */

__int64 __fastcall sub_18007DB64(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_180115168(
    *(_QWORD *)(a1 + 464),
    0,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v2 = *(__int64 ***)(a1 + 464);
  v6 = *(_QWORD *)(a1 + 944);
  *(_QWORD *)(a1 + 944) = v6 + 1;
  sub_180065A00(
    v2,
    (__int64)"..\\Source\\Engine\\Engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v6);
  v4 = sub_1800D0C78(v3);
  return sub_1800D0B48(v4);
}
