/*
 * XREFs of CiLogTaskIndexPreDeadlineExpired @ 0x1C0003F10
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001B30 (CiSchedulerProcessDeadlines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002EE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexPreDeadlineExpired(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &UserData);
}
