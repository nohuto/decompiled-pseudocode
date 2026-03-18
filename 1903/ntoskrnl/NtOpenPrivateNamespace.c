/*
 * XREFs of NtOpenPrivateNamespace @ 0x140681830
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     ObpLookupNamespaceEntry @ 0x140680998 (ObpLookupNamespaceEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140680BEC (ObpCaptureBoundaryDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtOpenPrivateNamespace(HANDLE *a1, ACCESS_MASK a2, __int64 a3, __m128i *a4)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  __int64 result; // rax
  void *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v11; // rsi
  __int64 *v12; // r14
  void *v13; // r14
  unsigned int v14; // ebx
  int v15; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v15 = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( a3 )
    {
      if ( (a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = *(_DWORD *)(a3 + 24);
    }
  }
  else if ( a3 )
  {
    v15 = *(_DWORD *)(a3 + 24);
  }
  result = ObpCaptureBoundaryDescriptor(a4, (char **)&P);
  if ( (int)result >= 0 )
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = ObOpenObjectByPointer(
              v13,
              v15 & (AccessMode != 0 ? 7666 : 73714),
              0LL,
              a2,
              ObpDirectoryObjectType,
              AccessMode,
              &Handle);
      LODWORD(P) = v14;
      ObfDereferenceObject(v13);
      *a1 = Handle;
      return v14;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225530LL;
    }
  }
  return result;
}
