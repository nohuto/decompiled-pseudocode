/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x14064437C
 * Callers:
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406423A4 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiParseComImage @ 0x1406DFA74 (MiParseComImage.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x14088FA30 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x14089B424 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
    KiUnstackDetachProcess((struct _KTHREAD *)(a1 + 32), 0);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_140464660, *(_QWORD *)a1, 1);
  }
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiReturnCrossPartitionControlAreaCharges(v2);
}
