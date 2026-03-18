/*
 * XREFs of MmUnsecureVirtualMemory @ 0x14060AA10
 * Callers:
 *     RtlFileMapFree @ 0x140153E28 (RtlFileMapFree.c)
 *     AlpcpForceUnlinkSecureView @ 0x1405B52BC (AlpcpForceUnlinkSecureView.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AAAC (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x14064CABC (AlpcpRestoreWriteAccess.c)
 *     WbFreeMemoryBlock @ 0x1406AF0E4 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x140718E68 (MmStoreAllocateVirtualMemory.c)
 *     MiDeleteHotPatchEntry @ 0x14088DF90 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x1408ED790 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x14092C248 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x1400739F0 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x140073B10 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140465A28 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
