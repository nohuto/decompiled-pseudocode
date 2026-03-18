/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1405F3430
 * Callers:
 *     RtlFileMapFree @ 0x1400F5124 (RtlFileMapFree.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     AlpcViewDestroyProcedure @ 0x140616E90 (AlpcViewDestroyProcedure.c)
 *     AlpcpPrepareViewForDelivery @ 0x140617954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpRestoreWriteAccess @ 0x140618FC0 (AlpcpRestoreWriteAccess.c)
 *     WbFreeMemoryBlock @ 0x140691044 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E0BB0 (MmStoreAllocateVirtualMemory.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084B1A8 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x140854B58 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x140856CA0 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x1408B05E0 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x1408EE338 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140074550 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x1400860C0 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x1400861D0 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_14043A010 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
