/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x140582188
 * Callers:
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA4F0 (MiIsImportOptimizationEnabled.c)
 *     MiCaptureRetpolineImportInfo @ 0x1401B4F78 (MiCaptureRetpolineImportInfo.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5434 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1402B8F08 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     VfIsDriverSuspect @ 0x140920ED4 (VfIsDriverSuspect.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // r8

  v4 = 0LL;
  if ( !MiIsImportOptimizationEnabled()
    || !MiDoesControlAreaRequireRetpolineFixups(a2)
    || *(_QWORD *)(*(_QWORD *)v6 + 32LL) != *(_QWORD *)(a1 + 48)
    || (v7 & 1) != 0
    || (unsigned int)VfIsDriverSuspect((PCUNICODE_STRING)(a1 + 88)) )
  {
    return 0;
  }
  if ( (MiFlags & 0x10000) == 0 )
  {
    v4 = MiReservePtes((__int64)&qword_14043AFA0, (unsigned __int64 *)1);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v5 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v5 < 0 )
      goto LABEL_13;
    MiWalkEntireImage(a2, v4, 0x10u, 0xFFFFFFFF);
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, v4);
  }
  v5 = 0;
LABEL_13:
  if ( v4 )
    MiReleasePtes((__int64)&qword_14043AFA0, v4, 1u);
  return (unsigned int)v5;
}
