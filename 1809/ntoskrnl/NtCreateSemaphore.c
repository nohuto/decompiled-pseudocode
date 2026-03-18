/*
 * XREFs of NtCreateSemaphore @ 0x1405F8710
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x14008A3E0 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  PHANDLE v6; // rdi
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v10; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF

  v6 = SemaphoreHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      SemaphoreHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SemaphoreHandle = *SemaphoreHandle;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExSemaphoreObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v10,
               32,
               0,
               0,
               &Semaphore,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    inserted = ObInsertObjectEx(Semaphore, 0LL, 0, 0LL, (__int64)&v12);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *v6 = (HANDLE)v12;
  }
  return inserted;
}
