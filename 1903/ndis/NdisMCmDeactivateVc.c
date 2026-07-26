/*
 * XREFs of NdisMCmDeactivateVc @ 0x1C00860C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisMCmDeactivateVc(NDIS_HANDLE NdisVcHandle)
{
  __int64 v1; // rdi
  KIRQL v2; // al
  int v3; // ecx
  NDIS_STATUS v4; // ebx

  v1 = *((_QWORD *)NdisVcHandle + 9);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
  v3 = *(_DWORD *)(v1 + 4);
  if ( (v3 & 1) != 0 )
  {
    v4 = 0;
    *(_DWORD *)(v1 + 4) = v3 & 0xFFFFFFFE;
  }
  else
  {
    v4 = 65539;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 8), v2);
  return v4;
}
