/*
 * XREFs of ?ptiUnSetDomainLockBit@@YAXW4DomainLockType@@@Z @ 0x1C0022D30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ptiUnSetDomainLockBit(int a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( a1 == 1 )
  {
    v7 = *(_BYTE *)(ThreadWin32Thread + 1480);
    if ( (v7 & 1) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v7 = *(_BYTE *)(v6 + 1480);
    }
    LOBYTE(ThreadWin32Thread) = v7 & 0xFE;
    *(_BYTE *)(v6 + 1480) = ThreadWin32Thread;
  }
  if ( a1 == 5 )
  {
    v8 = *(_BYTE *)(v6 + 1480);
    if ( (v8 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v8 = *(_BYTE *)(v6 + 1480);
    }
    LOBYTE(ThreadWin32Thread) = v8 & 0xFD;
    *(_BYTE *)(v6 + 1480) = ThreadWin32Thread;
  }
  if ( a1 == 8 )
  {
    v9 = *(_BYTE *)(v6 + 1480);
    if ( (v9 & 4) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v9 = *(_BYTE *)(v6 + 1480);
    }
    LOBYTE(ThreadWin32Thread) = v9 & 0xFB;
    *(_BYTE *)(v6 + 1480) = ThreadWin32Thread;
  }
  if ( a1 == 9 )
  {
    v10 = *(_BYTE *)(v6 + 1480);
    if ( (v10 & 8) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v10 = *(_BYTE *)(v6 + 1480);
    }
    LOBYTE(ThreadWin32Thread) = v10 & 0xF7;
    *(_BYTE *)(v6 + 1480) = ThreadWin32Thread;
  }
  if ( a1 == 11 )
  {
    v11 = *(_BYTE *)(v6 + 1480);
    if ( (v11 & 0x20) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v11 = *(_BYTE *)(v6 + 1480);
    }
    LOBYTE(ThreadWin32Thread) = v11 & 0xDF;
    *(_BYTE *)(v6 + 1480) = ThreadWin32Thread;
  }
  if ( a1 == 10 )
  {
    v12 = *(_BYTE *)(v6 + 1480);
    if ( (v12 & 0x10) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v12 = *(_BYTE *)(v6 + 1480);
    }
    LOBYTE(ThreadWin32Thread) = v12 & 0xEF;
    *(_BYTE *)(v6 + 1480) = ThreadWin32Thread;
  }
  return ThreadWin32Thread;
}
