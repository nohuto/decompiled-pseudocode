/*
 * XREFs of EtwTraceFocusChange @ 0x1C006B250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qq @ 0x1C00AECC8 (McTemplateK0qq.c)
 */

void __fastcall EtwTraceFocusChange(PETHREAD *a1, __int64 a2, const GUID *a3)
{
  unsigned int Arg1; // ebx
  unsigned int ThreadId; // esi

  if ( (W32kEtwEnabledKeyword & 0x8000000000002000uLL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x8000000000002000uLL) != 0
    && (qword_1C019A1C8 & 0x8000000000002000uLL) == qword_1C019A1C8 )
  {
    Arg1 = 0;
    if ( gptiForeground || a1 )
    {
      ThreadId = 0;
      if ( gptiForeground )
        ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)gptiForeground);
      if ( a1 )
        Arg1 = (unsigned int)PsGetThreadId(*a1);
      if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        McTemplateK0qq(
          (PMCGEN_TRACE_CONTEXT)(unsigned int)Microsoft_Windows_Win32kEnableBits,
          &FocusEvent,
          a3,
          ThreadId,
          Arg1);
    }
  }
}
