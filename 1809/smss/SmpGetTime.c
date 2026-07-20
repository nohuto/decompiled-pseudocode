/*
 * XREFs of SmpGetTime @ 0x14001555C
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpLogPFROError @ 0x1400157BC (SmpLogPFROError.c)
 * Callees:
 *     GetSystemTimeAndBias @ 0x14000D738 (GetSystemTimeAndBias.c)
 */

void __fastcall SmpGetTime(PTIME_FIELDS TimeFields)
{
  __int64 SystemTimeAndBias; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  union _LARGE_INTEGER Time; // [rsp+40h] [rbp+18h] BYREF

  SystemTimeAndBias = GetSystemTimeAndBias(&v3);
  Time.QuadPart = SystemTimeAndBias - v3;
  RtlTimeToTimeFields(&Time, TimeFields);
}
