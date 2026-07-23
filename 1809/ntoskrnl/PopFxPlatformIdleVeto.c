/*
 * XREFs of PopFxPlatformIdleVeto @ 0x1402D8E00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxPlatformIdleVeto(struct _IO_REMOVE_LOCK *a1, int a2, int a3, char a4)
{
  NTSTATUS v8; // edi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v10; // rcx
  __int64 v12; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v13[2]; // [rsp+50h] [rbp-48h] BYREF
  char v14; // [rsp+58h] [rbp-40h]

  v8 = -1073741822;
  if ( a1[4].Common.RemoveEvent.Header.WaitListHead.Blink )
  {
    v8 = IoAcquireRemoveLockEx(a1 + 7, 0LL, &File, 1u, 0x20u);
    if ( v8 >= 0 )
    {
      Blink = a1[4].Common.RemoveEvent.Header.WaitListHead.Blink;
      v12 = 0LL;
      v10 = a1[5].Common.RemoveEvent.Header.WaitListHead.Blink;
      v13[0] = a2;
      v13[1] = a3;
      v14 = a4;
      v8 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))Blink)(
             v10,
             &GUID_PLATFORM_IDLE_VETO,
             v13,
             12LL,
             0LL,
             0LL,
             &v12);
      if ( _InterlockedExchangeAdd(&a1[7].Common.IoCount, 0xFFFFFFFF) == 1 )
        KeSetEvent(&a1[7].Common.RemoveEvent, 0, 0);
    }
  }
  return (unsigned int)v8;
}
