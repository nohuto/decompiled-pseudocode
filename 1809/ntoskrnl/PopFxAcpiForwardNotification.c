/*
 * XREFs of PopFxAcpiForwardNotification @ 0x1402E852C
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1402E8420 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(
        struct _IO_REMOVE_LOCK *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  NTSTATUS v8; // edi
  char v9; // si

  v8 = IoAcquireRemoveLockEx(a1 + 8, (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, __int64))a1[2].Common.RemoveEvent.Header.WaitListHead.Flink[7].Flink)(a2, a3);
    if ( _InterlockedExchangeAdd(&a1[8].Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&a1[8].Common.RemoveEvent, 0, 0);
    *a5 = v9;
  }
  return (unsigned int)v8;
}
