/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x14066FFB0
 * Callers:
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MiParseComImage @ 0x1406DE6D4 (MiParseComImage.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x14089BC04 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess((struct _KTHREAD *)(a1 + 32), 0);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_140464960, v1, 1);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
