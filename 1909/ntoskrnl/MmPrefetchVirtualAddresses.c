/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1406DC3D0
 * Callers:
 *     VmpPrefetchForVirtualFault @ 0x1408ED774 (VmpPrefetchForVirtualFault.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  int IoPriorityThread; // eax
  int v3; // r8d
  __int64 v4; // r10
  int v5; // r9d

  if ( *a1 != 1 )
    return -1073741585;
  v1 = a1[1];
  if ( v1 >= 8 || (v1 & 6) > 4 )
    return -1073741585;
  if ( (v1 & 6) != 0 && (v1 & 6) != 2 )
    MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v5 = v3 | 0x400;
  if ( IoPriorityThread > 1 )
    v5 = v3;
  return MmPrefetchVirtualMemory(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24), v5);
}
