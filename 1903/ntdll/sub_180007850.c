/*
 * XREFs of sub_180007850 @ 0x180007850
 * Callers:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E6E60 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 */

HANDLE __fastcall sub_180007850(__int64 a1)
{
  signed __int64 v1; // rdi
  signed __int64 v3; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1LL;
  Handle = (HANDLE)-1LL;
  if ( byte_180163EC2 )
  {
    v5 = ZwCreateEvent(&Handle, 0x100003u, 0LL, SynchronizationEvent, 0);
    v6 = (__int64)Handle;
    if ( v5 < 0 )
      v6 = -1LL;
    v1 = v6;
    Handle = (HANDLE)v6;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1, 0LL);
  if ( !v3 )
    return Handle;
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  return (HANDLE)v3;
}
