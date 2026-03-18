/*
 * XREFs of ?ptiSetDomainLockBit@@YAXW4DomainLockType@@@Z @ 0x1C001F7F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ptiSetDomainLockBit(int a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( !a1 )
  {
    v6 = *(_BYTE *)(ThreadWin32Thread + 1464);
    if ( (v6 & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v6 = *(_BYTE *)(v5 + 1464);
    }
    LOBYTE(ThreadWin32Thread) = v6 | 1;
    *(_BYTE *)(v5 + 1464) = ThreadWin32Thread;
  }
  if ( a1 == 3 )
  {
    v7 = *(_BYTE *)(v5 + 1464);
    if ( (v7 & 2) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v7 = *(_BYTE *)(v5 + 1464);
    }
    LOBYTE(ThreadWin32Thread) = v7 | 2;
    *(_BYTE *)(v5 + 1464) = ThreadWin32Thread;
  }
  if ( a1 == 4 )
  {
    v8 = *(_BYTE *)(v5 + 1464);
    if ( (v8 & 4) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v8 = *(_BYTE *)(v5 + 1464);
    }
    LOBYTE(ThreadWin32Thread) = v8 | 4;
    *(_BYTE *)(v5 + 1464) = ThreadWin32Thread;
  }
  if ( a1 == 5 )
  {
    v9 = *(_BYTE *)(v5 + 1464);
    if ( (v9 & 8) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v9 = *(_BYTE *)(v5 + 1464);
    }
    LOBYTE(ThreadWin32Thread) = v9 | 8;
    *(_BYTE *)(v5 + 1464) = ThreadWin32Thread;
  }
  if ( a1 == 7 )
  {
    v10 = *(_BYTE *)(v5 + 1464);
    if ( (v10 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v10 = *(_BYTE *)(v5 + 1464);
    }
    LOBYTE(ThreadWin32Thread) = v10 | 0x20;
    *(_BYTE *)(v5 + 1464) = ThreadWin32Thread;
  }
  if ( a1 == 6 )
  {
    v11 = *(_BYTE *)(v5 + 1464);
    if ( (v11 & 0x10) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v11 = *(_BYTE *)(v5 + 1464);
    }
    LOBYTE(ThreadWin32Thread) = v11 | 0x10;
    *(_BYTE *)(v5 + 1464) = ThreadWin32Thread;
  }
  return ThreadWin32Thread;
}
