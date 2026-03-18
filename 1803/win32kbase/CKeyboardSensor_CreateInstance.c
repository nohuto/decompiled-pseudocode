/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C012B060
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C012184C (--0CBaseInput@@IEAA@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CBaseInput *__fastcall CKeyboardSensor_CreateInstance(__int64 a1, __int64 a2)
{
  CBaseInput *v2; // rax
  CBaseInput *v3; // rbx

  if ( gpKeyboardSensor )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  gpKeyboardSensor = 0LL;
  v2 = (CBaseInput *)Win32AllocPool(1096LL, 0x70694843u);
  v3 = v2;
  if ( v2 )
  {
    CBaseInput::CBaseInput(v2, 2u);
    *((_QWORD *)v3 + 136) = 0LL;
    *(_QWORD *)v3 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    gpKeyboardSensor = v3;
  return v3;
}
