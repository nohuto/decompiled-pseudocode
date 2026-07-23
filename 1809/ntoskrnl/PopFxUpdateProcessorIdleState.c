/*
 * XREFs of PopFxUpdateProcessorIdleState @ 0x1402DA650
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxUpdateProcessorIdleState(struct _IO_REMOVE_LOCK *a1, int a2, _DWORD *a3)
{
  NTSTATUS v6; // ebx
  int v7; // eax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v9; // rax
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-38h] BYREF

  if ( *a3 )
  {
    v6 = -1073741822;
    if ( a1[4].Common.RemoveEvent.Header.WaitListHead.Blink )
    {
      v6 = IoAcquireRemoveLockEx(a1 + 7, 0LL, &File, 1u, 0x20u);
      if ( v6 >= 0 )
      {
        v7 = a3[1];
        v11 = 0LL;
        Blink = a1[5].Common.RemoveEvent.Header.WaitListHead.Blink;
        v12[1] = v7;
        v12[2] = a3[2];
        v9 = a1[4].Common.RemoveEvent.Header.WaitListHead.Blink;
        v12[0] = a2;
        v6 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))v9)(
               Blink,
               &GUID_PROCESSOR_IDLE_UPDATE,
               v12,
               12LL,
               0LL,
               0LL,
               &v11);
        if ( _InterlockedExchangeAdd(&a1[7].Common.IoCount, 0xFFFFFFFF) == 1 )
          KeSetEvent(&a1[7].Common.RemoveEvent, 0, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
