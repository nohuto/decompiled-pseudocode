/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x14068E5B0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 *     PspCompleteServerSiloShutdown @ 0x140887F18 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x14088CF1C (PspMarkServerSiloAsTerminating.c)
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
  char v15[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( PsIsServerSilo(a1) )
  {
    v13 = *v4;
    ServerSiloGlobals = PsGetServerSiloGlobals(v5);
    v6 = PspMarkServerSiloAsTerminating();
    if ( v6 )
      ServerSiloGlobals[277] = v13;
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
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v15, v8);
    v11 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (*(_DWORD *)(NextJobProcess + 768) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess, 0LL, v9, *(_DWORD *)a2);
    v8 = v11;
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
