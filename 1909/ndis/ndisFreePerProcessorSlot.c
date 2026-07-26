/*
 * XREFs of ndisFreePerProcessorSlot @ 0x1C003E2E0
 * Callers:
 *     ndisAllocateOpenBlock @ 0x1C0024A4C (ndisAllocateOpenBlock.c)
 *     NdisFreeRWLock @ 0x1C003E2A0 (NdisFreeRWLock.c)
 *     ndisFreeOpenBlock @ 0x1C0081F70 (ndisFreeOpenBlock.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009A0C0 (ndisMCleanupMiniportBlockOnStop.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00AA66C (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

void __fastcall ndisFreePerProcessorSlot(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int i; // ecx
  unsigned int v7; // eax
  KIRQL v8; // al

  v2 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (__int64)(BugCheckParameter2 - (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)) >> 3;
  if ( *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v4 - 4076) != (_DWORD)BugCheckParameter4 )
    ndisBugCheckEx(
      0x2CuLL,
      BugCheckParameter2,
      *(unsigned int *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v4 - 4076),
      (unsigned int)BugCheckParameter4);
  v5 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < v5; *(_QWORD *)((v7 << 12) + BugCheckParameter2) = 0LL )
    v7 = i++;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  *(_DWORD *)(v2 + 4LL * (unsigned int)v4 - 4076) = *(_DWORD *)(v2 - 4080);
  *(_DWORD *)(v2 - 4080) = v4 | 0xFE000000;
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v8);
}
