/*
 * XREFs of NtFreeVirtualMemory @ 0x1405F0A50
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x140893188 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  PVOID *v5; // rbx
  char PreviousMode; // r8
  __int64 v8; // rcx
  NTSTATUS result; // eax
  ULONG_PTR v10; // [rsp+38h] [rbp-20h] BYREF
  PVOID v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v5 = BaseAddress;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      BaseAddress = (PVOID *)0x7FFFFFFF0000LL;
    *BaseAddress = *BaseAddress;
    v8 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  v11[0] = *v5;
  v10 = *RegionSize;
  result = MmFreeVirtualMemory((ULONG_PTR)ProcessHandle, (unsigned __int64 *)v11, &v10, FreeType, PreviousMode, 0);
  if ( result >= 0 )
  {
    *RegionSize = v10;
    *v5 = v11[0];
  }
  return result;
}
