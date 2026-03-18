/*
 * XREFs of KiIsWinPEBoot @ 0x1401B4820
 * Callers:
 *     KiDetermineRetpolineEnablement @ 0x1401930BC (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     strstr @ 0x140194EA0 (strstr.c)
 */

bool __fastcall KiIsWinPEBoot(__int64 a1)
{
  const char *v1; // rcx

  v1 = *(const char **)(a1 + 216);
  return v1 && strstr(v1, "MININT");
}
