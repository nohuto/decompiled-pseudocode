/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C00A9A30
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C00A9B14 (--0CBaseInput@@IEAA@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CBaseInput *__fastcall CKeyboardSensor_CreateInstance(__int64 a1, __int64 a2, __int64 a3)
{
  CBaseInput *v3; // rax
  CBaseInput *v4; // rbx

  if ( gpKeyboardSensor )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  gpKeyboardSensor = 0LL;
  v3 = (CBaseInput *)Win32AllocPool(1224LL, 0x70694843u);
  v4 = v3;
  if ( v3 )
  {
    CBaseInput::CBaseInput(v3, 2u);
    *((_QWORD *)v4 + 152) = 0LL;
    *(_QWORD *)v4 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    gpKeyboardSensor = v4;
  return v4;
}
