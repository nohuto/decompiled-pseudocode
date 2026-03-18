/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x140696A70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x140696B30 (PspGetNextJobProcess.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C5088 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x1408CA138 (PspMarkServerSiloAsTerminating.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 NextJobProcess; // rax
  __int64 v11; // rbp
  int v13; // ebp
  _DWORD *ServerSiloGlobals; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF

  memset(v18, 0, 24);
  if ( PsIsServerSilo(a1) )
  {
    v13 = *v4;
    ServerSiloGlobals = PsGetServerSiloGlobals(v5);
    v6 = PspMarkServerSiloAsTerminating(v16, v15, v17);
    if ( v6 )
      ServerSiloGlobals[273] = v13;
  }
  else
  {
    v6 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 8 * (*(_BYTE *)(a2 + 4) & 1) + 6;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v18, v8);
    v11 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (*(_DWORD *)(NextJobProcess + 776) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess, 0LL, v9, *(_DWORD *)a2);
    v8 = v11;
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
