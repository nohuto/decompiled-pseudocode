/*
 * XREFs of PfLogForegroundProcess @ 0x14009619C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     PfLogEvent @ 0x1400956A8 (PfLogEvent.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1)
{
  int v1; // eax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v1 = *(_DWORD *)(a1 - 100);
  v5 = 0;
  v3 = a1 - 1280;
  v4 = v1;
  return PfLogEvent(
           7,
           dword_140467B5C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v3,
           0x10u);
}
