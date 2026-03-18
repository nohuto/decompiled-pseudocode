/*
 * XREFs of NtCreateSemaphore @ 0x1405D7D50
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x14000A390 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  PHANDLE v6; // rdi
  unsigned __int8 v7; // si
  NTSTATUS Object; // ecx
  struct _KSEMAPHORE *Semaphore; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF

  v6 = SemaphoreHandle;
  v7 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  if ( v7 )
  {
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      SemaphoreHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SemaphoreHandle = *SemaphoreHandle;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  Object = ObCreateObjectEx(v7, (_DWORD)ExSemaphoreObjectType, (_DWORD)ObjectAttributes, v7);
  if ( Object >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    Object = ObInsertObjectEx(Semaphore, 0LL, 0, 0LL, (__int64)&v11);
    if ( Object >= 0 )
      *v6 = (HANDLE)v11;
  }
  return Object;
}
