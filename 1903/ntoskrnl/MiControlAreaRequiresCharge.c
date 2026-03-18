/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140071220
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiSessionInsertImage @ 0x14017F614 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x1400724E0 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // r8d
  __int64 v4; // r9
  ULONG_PTR *v5; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1, a2, (unsigned int)a2, a1) == 1 )
    return 1LL;
  if ( v2 > 1 )
    v5 = v3 == 2
       ? *(ULONG_PTR **)(qword_140466188
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 430))
       : &MiSystemPartition;
  else
    v5 = *(ULONG_PTR **)(qword_140466188
                       + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
  if ( v5 == *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_140466198;
  return 0LL;
}
