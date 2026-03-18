/*
 * XREFs of PspCatchCriticalBreak @ 0x1408C9224
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x14067A1DC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     PsGetServerSiloState @ 0x14012D970 (PsGetServerSiloState.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     DbgPrompt @ 0x14030AC00 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x1408C4700 (PsTerminateServerSilo.c)
 */

void __fastcall PspCatchCriticalBreak(
        PCSTR Format,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        __int64 a4)
{
  char v8; // bl
  char v9; // bp
  char v10; // bl
  struct _KPROCESS *v11; // rdi
  CHAR Response[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v8 = 0;
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    v9 = 0;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
LABEL_15:
      v10 = *(_BYTE *)BugCheckParameter1 & 0x7F;
      if ( v10 == 6 )
        v11 = *(struct _KPROCESS **)(BugCheckParameter1 + 544);
      else
        v11 = (struct _KPROCESS *)BugCheckParameter1;
      if ( PsIsHostSilo(a4) )
      {
        if ( v11 != KeGetCurrentThread()->ApcState.Process )
          KeStackAttachProcess(v11, &ApcState);
        KeBugCheckEx(0xEFu, BugCheckParameter1, v10 == 6, 0LL, 0LL);
      }
      if ( !v9 )
        PsTerminateServerSilo(a4);
      return;
    }
    DbgPrintEx(0, 0, Format, BugCheckParameter1, BugCheckParameter4);
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
  v9 = 1;
  v8 = 1;
LABEL_14:
  if ( !v8 )
    goto LABEL_15;
}
