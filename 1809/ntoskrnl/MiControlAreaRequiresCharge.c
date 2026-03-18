/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140079E68
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x1402A3350 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543E8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140077CF0 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // r9
  ULONG_PTR *v4; // rdx

  if ( MiControlAreaExemptFromCrossPartitionCharges(a1) )
    return 1LL;
  if ( v1 > 1 )
    v4 = v2 == 2
       ? *(ULONG_PTR **)(qword_14043A748
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3182))
       : &MiSystemPartition;
  else
    v4 = *(ULONG_PTR **)(qword_14043A748
                       + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
  if ( v4 == *(ULONG_PTR **)(qword_14043A748 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v3 + 62) & 1) == 0 || v2 == 1 || v2 == 4 )
    return 2LL;
  ++dword_14043A758;
  return 0LL;
}
