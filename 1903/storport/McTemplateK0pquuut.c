/*
 * XREFs of McTemplateK0pquuut @ 0x1C003E854
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C0007150 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C00071D4 (StorPortUnitActiveConditionStep2.c)
 *     StorPortUnitIdleCondition @ 0x1C00072E0 (StorPortUnitIdleCondition.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0010B18 (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0040E08 (StorPortUnitPowerNotRequiredStep2.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0041218 (StorPortUnitPowerRequiredStep2.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG McTemplateK0pquuut(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  va_list v9; // [rsp+60h] [rbp-21h]
  __int64 v10; // [rsp+68h] [rbp-19h]
  va_list v11; // [rsp+70h] [rbp-11h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  va_list v13; // [rsp+80h] [rbp-1h]
  __int64 v14; // [rsp+88h] [rbp+7h]
  va_list v15; // [rsp+90h] [rbp+Fh]
  __int64 v16; // [rsp+98h] [rbp+17h]
  __int64 v17; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v19; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v21; // [rsp+E8h] [rbp+67h] BYREF
  va_list va2; // [rsp+E8h] [rbp+67h]
  __int64 v23; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F0h] [rbp+6Fh]
  __int64 v25; // [rsp+F8h] [rbp+77h] BYREF
  va_list va4; // [rsp+F8h] [rbp+77h]
  va_list va5; // [rsp+100h] [rbp+7Fh] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v25 = va_arg(va5, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 1LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  va_copy(v15, va5);
  v12 = 1LL;
  v14 = 1LL;
  v16 = 4LL;
  return McGenEventWrite(a1, a2, 0LL, 7u, &EventData);
}
