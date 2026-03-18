/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C00A3B20
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C00A3B74 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  CMouseAcceleration *v5; // rax

  v3 = 0LL;
  v4 = a1;
  if ( qword_1C020B0A8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (CMouseAcceleration *)Win32AllocPool(120LL, 0x64416363u);
  if ( v5 )
    return CMouseAcceleration::CMouseAcceleration(v5, v4);
  return (CMouseAcceleration *)v3;
}
