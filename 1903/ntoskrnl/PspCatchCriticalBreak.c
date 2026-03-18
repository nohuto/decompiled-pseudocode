/*
 * XREFs of PspCatchCriticalBreak @ 0x1408C9944
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140678480 (PspTerminateThreadByPointer.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     PsGetServerSiloState @ 0x14012CEA0 (PsGetServerSiloState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     DbgPrompt @ 0x14030B150 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x1408C4E30 (PsTerminateServerSilo.c)
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
