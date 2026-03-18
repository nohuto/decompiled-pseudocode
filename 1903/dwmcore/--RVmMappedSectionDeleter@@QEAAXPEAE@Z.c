/*
 * XREFs of ??RVmMappedSectionDeleter@@QEAAXPEAE@Z @ 0x180177050
 * Callers:
 *     ??1CWetInkManager@@QEAA@XZ @ 0x180176F74 (--1CWetInkManager@@QEAA@XZ.c)
 *     _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BC9F0 (_anonymous_namespace_--TryOpenVmConsumerQueue.c)
 *     ??1CRemoteSuperWetSharedSection@@UEAA@XZ @ 0x1801C7C54 (--1CRemoteSuperWetSharedSection@@UEAA@XZ.c)
 *     _anonymous_namespace_::MapSharedMemory @ 0x18022A4F8 (_anonymous_namespace_--MapSharedMemory.c)
 *     ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x18022A5A8 (-OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VmMappedSectionDeleter::operator()(__int64 a1, void *a2)
{
  HANDLE CurrentProcess; // rax

  if ( a2 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, a2);
  }
}
