/*
 * XREFs of McTemplateK0cpq @ 0x1C010F7A0
 * Callers:
 *     EtwTraceInputQueueLocked @ 0x1C0094160 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C0099B90 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C00A15C0 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C00A8360 (EtwTraceInputQueueUnLocked.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0cpq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
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
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 4u, &EventData);
}
