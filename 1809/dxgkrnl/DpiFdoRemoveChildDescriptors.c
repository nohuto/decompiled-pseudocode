/*
 * XREFs of DpiFdoRemoveChildDescriptors @ 0x1C0266AE8
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0146340 (DpiFdoEnumChildDevices.c)
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0265190 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoRemoveChildDescriptor @ 0x1C0266AA0 (DpiFdoRemoveChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3232), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3336), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3392); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3336), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3232));
  KeLeaveCriticalRegion();
}
