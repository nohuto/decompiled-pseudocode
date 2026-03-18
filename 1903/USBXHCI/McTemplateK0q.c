/*
 * XREFs of McTemplateK0q @ 0x1C001F6E8
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C001F5E0 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00029D4 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0q(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite(a1, a2, 0LL, 2u, &v5);
}
