/*
 * XREFs of CiLogThreadBuffering @ 0x1C0004014
 * Callers:
 *     CiSchedulerSetTaskIndexMode @ 0x1C0002200 (CiSchedulerSetTaskIndexMode.c)
 *     CiSystemUpdateThreadTag @ 0x1C0002980 (CiSystemUpdateThreadTag.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002EE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogThreadBuffering(__int64 a1, int a2)
{
  HANDLE ThreadId; // rax
  const EVENT_DESCRIPTOR *v4; // rdx
  HANDLE v6; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  ThreadId = PsGetThreadId(*(PETHREAD *)(a1 + 96));
  v4 = (const EVENT_DESCRIPTOR *)&CiThreadBufferingStartEvent;
  v6 = ThreadId;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v6;
  if ( !a2 )
    v4 = &CiThreadBufferingStopEvent;
  return EtwWrite(RegHandle, v4, 0LL, 1u, &UserData);
}
