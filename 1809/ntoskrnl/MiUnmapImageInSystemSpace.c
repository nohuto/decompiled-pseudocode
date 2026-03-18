/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406508AC
 * Callers:
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x14064FEE4 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140652E30 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140682F60 (MiGetSystemAddressForImage.c)
 *     MiParseComImage @ 0x1406C06DC (MiParseComImage.c)
 *     MiOpenHotPatchFile @ 0x14085690C (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x140856CA0 (MiPerformImageHotPatch.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A39C (MiLoadSectionIntoVsmEnclave.c)
 *     MiCreateSessionDriverProtos @ 0x14085F13C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3134 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
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
    MiRemoveFromSystemSpace(qword_140438F40, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
