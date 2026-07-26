/*
 * XREFs of ndisStartDeviceWorkItem @ 0x1C00BC030
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  void *v1; // rbx
  _IRP *v3; // rdi

  v1 = (void *)P[4];
  v3 = (_IRP *)P[5];
  ndisReferencePackage((__int64)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
}
