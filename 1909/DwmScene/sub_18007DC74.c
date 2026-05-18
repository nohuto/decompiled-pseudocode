/*
 * XREFs of sub_18007DC74 @ 0x18007DC74
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 * Callees:
 *     sub_180065B10 @ 0x180065B10 (sub_180065B10.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     sub_180115278 @ 0x180115278 (sub_180115278.c)
 */

__int64 __fastcall sub_18007DC74(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_180115278(
    *(_QWORD *)(a1 + 464),
    0,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v2 = *(__int64 ***)(a1 + 464);
  v6 = *(_QWORD *)(a1 + 944);
  *(_QWORD *)(a1 + 944) = v6 + 1;
  sub_180065B10(
    v2,
    (__int64)"..\\Source\\Engine\\Engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v6);
  v4 = sub_1800D0D88(v3);
  return sub_1800D0C58(v4);
}
