/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x140651A4C
 * Callers:
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 *     MiParseComImage @ 0x1406C195C (MiParseComImage.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 *     MiCreateSessionDriverProtos @ 0x14086037C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_14043A000, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
