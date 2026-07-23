/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x18000EA90
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180104070 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180104F0C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180086DFC (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS v6; // edi
  ULONG v8; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rtt

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Value = RunOnce->Value;
  v6 = 0;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_6:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    if ( (Flags & 1) != 0 )
      return -1073741823;
    v8 = Flags & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v10 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v8 != 0 ? 3LL : 1LL, Value);
        if ( v10 == Value )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return -1073741584;
      Value = RtlpRunOnceWaitForInit(Value, RunOnce);
    }
    if ( v9 != 3 )
      goto LABEL_6;
    return v8 != 0 ? 259 : -1073741584;
  }
  return v6;
}
