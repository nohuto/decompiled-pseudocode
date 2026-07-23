/*
 * XREFs of NtOpenPrivateNamespace @ 0x1406C3870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     ObpLookupNamespaceEntry @ 0x140655828 (ObpLookupNamespaceEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140655A58 (ObpCaptureBoundaryDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  NTSTATUS result; // eax
  void *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v11; // rsi
  __int64 *v12; // r14
  void *v13; // r14
  NTSTATUS v14; // ebx
  ULONG Attributes; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  Attributes = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)NamespaceHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      Attributes = ObjectAttributes->Attributes;
    }
  }
  else if ( ObjectAttributes )
  {
    Attributes = ObjectAttributes->Attributes;
  }
  result = ObpCaptureBoundaryDescriptor((__m128i *)BoundaryDescriptor, (char **)&P);
  if ( result >= 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (ULONG_PTR)CurrentServerSiloGlobals + 720;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)CurrentServerSiloGlobals + 720, 0LL);
    v12 = ObpLookupNamespaceEntry((__int64)CurrentServerSiloGlobals + 128, (__int64)P);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v12 && (v13 = (void *)v12[2]) != 0LL )
    {
      ObfReferenceObject(v13);
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v14 = ObOpenObjectByPointer(
              v13,
              Attributes & (AccessMode != 0 ? 7666 : 73714),
              0LL,
              DesiredAccess,
              ObpDirectoryObjectType,
              AccessMode,
              &Handle);
      LODWORD(P) = v14;
      ObfDereferenceObject(v13);
      *NamespaceHandle = Handle;
      return v14;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return -1073741766;
    }
  }
  return result;
}
