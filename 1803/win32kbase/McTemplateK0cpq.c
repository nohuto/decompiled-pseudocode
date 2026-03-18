/*
 * XREFs of McTemplateK0cpq @ 0x1C00ADC9C
 * Callers:
 *     EtwTraceInputQueueLocked @ 0x1C00134B0 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C006CE10 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C006E3B0 (EtwTraceInputQueueUnLocked.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C0072BD0 (EtwTraceInputQueueNoRemoveLocker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0cpq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  char *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v9 = 1LL;
  v8 = &v14;
  v11 = 8LL;
  v10 = &a5;
  v13 = 4LL;
  v12 = &a6;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 4u, &v7);
}
