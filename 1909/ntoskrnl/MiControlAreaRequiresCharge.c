/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140071490
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x1402BA560 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140072750 (MiControlAreaExemptFromCrossPartitionCharges.c)
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
       ? *(ULONG_PTR **)(qword_140465E88
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 430))
       : &MiSystemPartition;
  else
    v5 = *(ULONG_PTR **)(qword_140465E88
                       + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
  if ( v5 == *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_140465E98;
  return 0LL;
}
