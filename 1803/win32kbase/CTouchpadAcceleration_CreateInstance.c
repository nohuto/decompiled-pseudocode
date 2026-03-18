/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C0133960
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchpadAcceleration_CreateInstance(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rbx

  v2 = a1;
  if ( qword_1C019AAA0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v3 = Win32AllocPool(104LL, 0x64416363u);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  *(_BYTE *)(v3 + 8) = 0;
  memset((void *)(v3 + 16), 0, 0x50uLL);
  *(_DWORD *)(v4 + 96) = v2;
  *(_QWORD *)v4 = &CTouchpadAcceleration::`vftable';
  return v4;
}
