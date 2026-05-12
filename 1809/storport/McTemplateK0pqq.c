/*
 * XREFs of McTemplateK0pqq @ 0x1C003D8DC
 * Callers:
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     StorPortAdapterActiveCondition @ 0x1C00212A0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C0021360 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C00259A4 (StorPortAdapterPowerNotRequiredStep2.c)
 *     RaidpLinkDown @ 0x1C003DFF8 (RaidpLinkDown.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C00439A0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C0043D0C (StorPortAdapterPowerRequiredStep2.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqq(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWrite(a1, a2, 0LL, 4u, &EventData);
}
