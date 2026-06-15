/*
 * XREFs of McTemplateU0 @ 0x14003DAF8
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003420 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     wil::details::lambda_call__lambda_a92c9648f12195957338b33834e376d4___::_lambda_call__lambda_a92c9648f12195957338b33834e376d4___ @ 0x14003D520 (wil--details--lambda_call__lambda_a92c9648f12195957338b33834e376d4___--_lambda_call__lambda_a92c.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x140032758 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(a1, (__int64)&CreateDeviceEndpointInstance_Task_Stop, a3, 1, (__int64)v4);
}
