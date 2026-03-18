/*
 * XREFs of MmUnsecureVirtualMemory @ 0x14060C520
 * Callers:
 *     RtlFileMapFree @ 0x1401544C8 (RtlFileMapFree.c)
 *     AlpcpForceUnlinkSecureView @ 0x1405B569C (AlpcpForceUnlinkSecureView.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x140660750 (AlpcpRestoreWriteAccess.c)
 *     WbFreeMemoryBlock @ 0x1406B1014 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x14071AC58 (MmStoreAllocateVirtualMemory.c)
 *     MiDeleteHotPatchEntry @ 0x14088D7B0 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x1408ED0A0 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x14092BCBC (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x140073C60 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x140073D80 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140465728 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
