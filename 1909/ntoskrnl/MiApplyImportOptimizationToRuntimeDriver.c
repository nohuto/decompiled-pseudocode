/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     MiIsImportOptimizationEnabled @ 0x140154A74 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1401552BC (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCaptureRetpolineImportInfo @ 0x140714468 (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x140852AD8 (VslCaptureSecureImageIat.c)
 *     VfIsDriverSuspect @ 0x1409603A8 (VfIsDriverSuspect.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  int v8; // ebx
  void *v10; // rbx
  PVOID v11; // rax
  ULONG Size; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !MiIsImportOptimizationEnabled()
    || !MiDoesControlAreaRequireRetpolineFixups(v5)
    || *(_QWORD *)(*(_QWORD *)v6 + 32LL) != *(_QWORD *)(a1 + 48)
    || (v7 & 1) != 0
    || (unsigned int)VfIsDriverSuspect((PCUNICODE_STRING)(a1 + 88)) )
  {
    return 0;
  }
  if ( (MiFlags & 0x10000) != 0 )
  {
    v10 = *(void **)(a1 + 48);
    Size = 0;
    v11 = RtlImageDirectoryEntryToData(v10, 1u, 0xCu, &Size);
    if ( v11 )
    {
      v8 = VslCaptureSecureImageIat(v10, v11, Size);
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  else
  {
    v4 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v8 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v8 < 0 )
      goto LABEL_12;
  }
  MiWalkEntireImage(a2, v4, 16, 0xFFFFFFFF);
  if ( (MiFlags & 0x10000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, v4);
  v8 = 0;
LABEL_12:
  if ( v4 )
    MiReleasePtes((__int64)&qword_1404666C0, v4, 1u);
  return (unsigned int)v8;
}
