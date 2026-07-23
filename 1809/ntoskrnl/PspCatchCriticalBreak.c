/*
 * XREFs of PspCatchCriticalBreak @ 0x14088C6D0
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140016610 (KeStackAttachProcess.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     PsGetServerSiloState @ 0x14012A2CC (PsGetServerSiloState.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x1402ECB80 (DbgPrompt.c)
 *     PspLatchCriticalProcessName @ 0x140583780 (PspLatchCriticalProcessName.c)
 *     PsTerminateServerSilo @ 0x140887CD0 (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, ...)
{
  char v8; // bl
  const CHAR *v9; // r8
  char v10; // r14
  char v11; // bl
  struct _KPROCESS *v12; // rdi
  CHAR Response[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v8 = 0;
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    v10 = 0;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
LABEL_15:
      v11 = *(_BYTE *)a2 & 0x7F;
      if ( v11 == 6 )
        v12 = *(struct _KPROCESS **)(a2 + 544);
      else
        v12 = (struct _KPROCESS *)a2;
      if ( PsIsHostSilo(a4) )
      {
        if ( v12 != KeGetCurrentThread()->ApcState.Process )
          KeStackAttachProcess(v12, &ApcState);
        KeBugCheckEx(0xEFu, a2, v11 == 6, 0LL, 0LL);
      }
      if ( !v10 )
      {
        PspLatchCriticalProcessName(a4, a3, a5);
        PsTerminateServerSilo(a4);
      }
      return;
    }
    DbgPrintEx(0, 0, v9, a2, a3);
    while ( 1 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
        goto LABEL_14;
      DbgPrompt("Break, or Ignore (bi)? ", Response, 2u);
      if ( Response[0] == 66 )
        goto LABEL_11;
      if ( Response[0] != 73 )
        break;
LABEL_12:
      v8 = 1;
LABEL_13:
      if ( v8 )
        goto LABEL_14;
    }
    if ( Response[0] != 98 )
    {
      if ( Response[0] != 105 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_11:
    __debugbreak();
    goto LABEL_12;
  }
  v10 = 1;
  v8 = 1;
LABEL_14:
  if ( !v8 )
    goto LABEL_15;
}
