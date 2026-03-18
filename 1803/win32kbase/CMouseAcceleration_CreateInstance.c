/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C0133900
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C01336B8 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  CMouseAcceleration *v4; // rax

  v2 = 0LL;
  v3 = a1;
  if ( qword_1C019AA88 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = (CMouseAcceleration *)Win32AllocPool(120LL, 0x64416363u);
  if ( v4 )
    return CMouseAcceleration::CMouseAcceleration(v4, v3);
  return (CMouseAcceleration *)v2;
}
