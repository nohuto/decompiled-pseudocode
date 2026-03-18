/*
 * XREFs of WheapGenerateETWEvents @ 0x140320E88
 * Callers:
 *     WheaReportHwError @ 0x14031FC20 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1403203D0 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x1407614A0 (WheapEtwEnableCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapGenerateETWEvents(__int64 a1)
{
  int v1; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]

  v4 = a1;
  v3.Ptr = a1 + 20;
  v1 = *(_DWORD *)(a1 + 20);
  *(_QWORD *)&v3.Size = 4LL;
  v5 = v1;
  v6 = 0;
  return EtwWriteEx((REGHANDLE)WheapDispatchPtr.Queue.ListEntry.Blink, &EVENT_WHEA_ERROR, 0LL, 0, 0LL, 0LL, 2u, &v3);
}
