/*
 * XREFs of ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C00F3AD4
 * Callers:
 *     DestroyBaseWindow @ 0x1C00F3B70 (DestroyBaseWindow.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall DeleteMinWindowProperties(struct tagBWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rbx

  v2 = *((_QWORD *)a1 + 10);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = v2 + 8;
    if ( *(_DWORD *)(v2 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v4 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v4)(*(_QWORD *)v4);
        else
          MicrosoftTelemetryAssertTriggeredMsgKM("Currently Base window: all properties expected to be internal and only used for Input Sink purposes");
        v4 += 16LL;
        --v3;
      }
      while ( v3 );
      v2 = *((_QWORD *)a1 + 10);
    }
    Win32FreePool(v2);
    *((_QWORD *)a1 + 10) = 0LL;
  }
}
