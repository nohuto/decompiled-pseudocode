/*
 * XREFs of ?ptiSetDomainLockBit@@YAXW4DomainLockType@@@Z @ 0x1C00242F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ptiSetDomainLockBit(int a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rbx
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( !a1 )
  {
    v4 = *(_BYTE *)(ThreadWin32Thread + 1456);
    if ( (v4 & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v4 = *(_BYTE *)(v3 + 1456);
    }
    LOBYTE(ThreadWin32Thread) = v4 | 1;
    *(_BYTE *)(v3 + 1456) = ThreadWin32Thread;
  }
  if ( a1 == 3 )
  {
    v5 = *(_BYTE *)(v3 + 1456);
    if ( (v5 & 2) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v5 = *(_BYTE *)(v3 + 1456);
    }
    LOBYTE(ThreadWin32Thread) = v5 | 2;
    *(_BYTE *)(v3 + 1456) = ThreadWin32Thread;
  }
  if ( a1 == 4 )
  {
    v6 = *(_BYTE *)(v3 + 1456);
    if ( (v6 & 4) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = *(_BYTE *)(v3 + 1456);
    }
    LOBYTE(ThreadWin32Thread) = v6 | 4;
    *(_BYTE *)(v3 + 1456) = ThreadWin32Thread;
  }
  if ( a1 == 5 )
  {
    v7 = *(_BYTE *)(v3 + 1456);
    if ( (v7 & 8) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v7 = *(_BYTE *)(v3 + 1456);
    }
    LOBYTE(ThreadWin32Thread) = v7 | 8;
    *(_BYTE *)(v3 + 1456) = ThreadWin32Thread;
  }
  if ( a1 == 7 )
  {
    v8 = *(_BYTE *)(v3 + 1456);
    if ( (v8 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v8 = *(_BYTE *)(v3 + 1456);
    }
    LOBYTE(ThreadWin32Thread) = v8 | 0x20;
    *(_BYTE *)(v3 + 1456) = ThreadWin32Thread;
  }
  if ( a1 == 6 )
  {
    v9 = *(_BYTE *)(v3 + 1456);
    if ( (v9 & 0x10) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v9 = *(_BYTE *)(v3 + 1456);
    }
    LOBYTE(ThreadWin32Thread) = v9 | 0x10;
    *(_BYTE *)(v3 + 1456) = ThreadWin32Thread;
  }
  return ThreadWin32Thread;
}
