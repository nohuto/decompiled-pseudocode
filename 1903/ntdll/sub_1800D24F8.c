/*
 * XREFs of sub_1800D24F8 @ 0x1800D24F8
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800E3820 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800E3890 (RtlResetRtlTranslations.c)
 */

__int64 __fastcall sub_1800D24F8(_QWORD *a1)
{
  _BYTE v2[152]; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], v2);
  return RtlResetRtlTranslations(v2);
}
