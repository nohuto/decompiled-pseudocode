/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C00947F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchpadAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rbx

  v3 = a1;
  if ( qword_1C01C30B0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = Win32AllocPool(104LL, 0x64416363u);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  *(_BYTE *)(v4 + 8) = 0;
  memset((void *)(v4 + 16), 0, 0x50uLL);
  *(_DWORD *)(v5 + 96) = v3;
  *(_QWORD *)v5 = &CTouchpadAcceleration::`vftable';
  return v5;
}
