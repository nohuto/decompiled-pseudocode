/*
 * XREFs of ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C011F8FC
 * Callers:
 *     DestroyBaseWindow @ 0x1C011F9C0 (DestroyBaseWindow.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DeleteMinWindowProperties(struct tagBWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx

  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 + 4);
    v6 = v4 + 8;
    if ( *(_DWORD *)(v4 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v6 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v6)(*(_QWORD *)v6);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
        v6 += 16LL;
        --v5;
      }
      while ( v5 );
      v4 = *((_QWORD *)a1 + 10);
    }
    Win32FreePool(v4);
    *((_QWORD *)a1 + 10) = 0LL;
  }
}
