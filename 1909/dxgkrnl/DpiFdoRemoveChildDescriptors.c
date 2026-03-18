/*
 * XREFs of DpiFdoRemoveChildDescriptors @ 0x1C02A27C8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 *     DpiFdoEnumChildDevices @ 0x1C017B670 (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02A0CF0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoRemoveChildDescriptor @ 0x1C02A2780 (DpiFdoRemoveChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3304), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3408), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3464); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3408), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3304));
  KeLeaveCriticalRegion();
}
