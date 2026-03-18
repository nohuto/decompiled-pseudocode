/*
 * XREFs of McTemplateK0pqn @ 0x1C00018D4
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x1C006F530 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001254 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqn(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v16; // [rsp+B8h] [rbp+38h]
  __int64 v17; // [rsp+C0h] [rbp+40h]
  va_list va2; // [rsp+C8h] [rbp+48h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v11 = 0;
  va_copy(v5, va);
  va_copy(v7, va1);
  v9 = v17;
  v10 = v16;
  v8 = 4LL;
  return McGenEventWrite(0LL, a2, a3, 4u, &EventData);
}
