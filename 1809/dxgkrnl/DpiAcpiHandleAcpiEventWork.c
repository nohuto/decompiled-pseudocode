/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x1C02703E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x1C026FF04 (DpiAcpiHandleAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rbx

  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C008E8E0);
    v4 = qword_1C008E920;
    qword_1C008E918 = (__int64)KeGetCurrentThread();
    if ( (__int64 *)qword_1C008E920 == &qword_1C008E920 )
    {
      v4 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_1C008E920 + 8) != &qword_1C008E920
        || (v5 = *(_QWORD *)qword_1C008E920, *(_QWORD *)(*(_QWORD *)qword_1C008E920 + 8LL) != qword_1C008E920) )
      {
        __fastfail(3u);
      }
      qword_1C008E920 = *(_QWORD *)qword_1C008E920;
      *(_QWORD *)(v5 + 8) = &qword_1C008E920;
    }
    qword_1C008E918 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C008E8E0);
    if ( !v4 )
      break;
    v6 = *(void **)(v4 + 16);
    DpiAcpiHandleAcpiEvent((char *)v4);
    ObfDereferenceObject(v6);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
