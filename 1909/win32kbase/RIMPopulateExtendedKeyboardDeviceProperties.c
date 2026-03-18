/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C005DD0C
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C005DB14 (RIMRegOpenDeviceInstanceKey.c)
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C005E264 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rax
  int v5; // edi
  void *v6; // rsi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v8 = 1;
    if ( ReadDevicePropertyFromRegistry(L"HasPhysicalKeys", v4, 0LL, 1, &v8) )
    {
      LOBYTE(v5) = v8 == 0;
      *(_DWORD *)(a1 + 500) = v5 | *(_DWORD *)(a1 + 500) & 0xFFFFFFFE;
    }
    LODWORD(v4) = ZwClose(v6);
  }
  return (int)v4;
}
