/*
 * XREFs of _anonymous_namespace_::MapSharedMemory @ 0x18022A4F8
 * Callers:
 *     ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x18022A5A8 (-OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ??RVmMappedSectionDeleter@@QEAAXPEAE@Z @ 0x180177050 (--RVmMappedSectionDeleter@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall anonymous_namespace_::MapSharedMemory(
        HANDLE SectionHandle,
        PSIZE_T ViewSize,
        unsigned __int8 a3,
        void **a4)
{
  ULONG AccessProtection; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  void *v11; // rdx
  PVOID v12; // rcx
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  *ViewSize = 0LL;
  AccessProtection = 2 * (a3 ^ 1) + 2;
  CurrentProcess = GetCurrentProcess();
  v9 = NtMapViewOfSection(
         SectionHandle,
         CurrentProcess,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         ViewSize,
         ViewUnmap,
         0,
         AccessProtection);
  v10 = v9 | 0x10000000;
  if ( v9 >= 0 )
  {
    v11 = *a4;
    v12 = BaseAddress;
    *a4 = BaseAddress;
    if ( v11 )
      VmMappedSectionDeleter::operator()((__int64)v12, v11);
  }
  return v10;
}
