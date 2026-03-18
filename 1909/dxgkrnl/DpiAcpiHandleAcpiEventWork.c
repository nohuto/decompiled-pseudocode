/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x1C02ACD70
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC8A4 (DpiAcpiHandleAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rbx

  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C00A28E0);
    v4 = qword_1C00A2920;
    qword_1C00A2918 = (__int64)KeGetCurrentThread();
    if ( (__int64 *)qword_1C00A2920 == &qword_1C00A2920 )
    {
      v4 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_1C00A2920 + 8) != &qword_1C00A2920
        || (v5 = *(_QWORD *)qword_1C00A2920, *(_QWORD *)(*(_QWORD *)qword_1C00A2920 + 8LL) != qword_1C00A2920) )
      {
        __fastfail(3u);
      }
      qword_1C00A2920 = *(_QWORD *)qword_1C00A2920;
      *(_QWORD *)(v5 + 8) = &qword_1C00A2920;
    }
    qword_1C00A2918 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C00A28E0);
    if ( !v4 )
      break;
    v6 = *(void **)(v4 + 16);
    DpiAcpiHandleAcpiEvent((char *)v4);
    ObfDereferenceObject(v6);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
