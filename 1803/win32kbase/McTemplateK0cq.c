/*
 * XREFs of McTemplateK0cq @ 0x1C00AD5B4
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1C005EC10 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceEndDispatchMessage @ 0x1C0065F50 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceBeginDispatchMessage @ 0x1C0065F70 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceWakeDIT @ 0x1C00676A0 (EtwTraceWakeDIT.c)
 *     EtwTraceEndTranslateMessage @ 0x1C006C190 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x1C006C1B0 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceWakeRIT @ 0x1C006DE80 (EtwTraceWakeRIT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0cq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  char *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 1;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 3u, &v6);
}
