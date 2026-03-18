/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C009AD20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C010D1E0 (McTemplateK0qqq.c)
 */

char __fastcall EtwTraceFocusedProcessChange(GUID *Activity, __int64 a2)
{
  __int64 v4; // rax
  struct _MCGEN_TRACE_CONTEXT *Arg1; // rcx
  unsigned int Arg2; // edx

  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0 )
  {
    LOBYTE(v4) = byte_1C020C438 - 1;
    if ( (unsigned __int8)(byte_1C020C438 - 1) > 2u && (qword_1C020C420 & 0x8000000000020000uLL) != 0 )
    {
      LOBYTE(v4) = 0;
      if ( (qword_1C020C428 & 0x8000000000020000uLL) == qword_1C020C428 )
      {
        Arg1 = 0LL;
        if ( Activity )
        {
          v4 = *(_QWORD *)&Activity[26].Data1;
          Arg2 = *(_DWORD *)(v4 + 56);
        }
        else
        {
          Arg2 = 0;
        }
        if ( a2 )
        {
          v4 = *(_QWORD *)(a2 + 416);
          Arg1 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(v4 + 56);
        }
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
          LOBYTE(v4) = McTemplateK0qqq(
                         Arg1,
                         &FocusedProcessChangeEvent,
                         Activity,
                         gSessionId,
                         (const unsigned int)Arg1,
                         Arg2);
      }
    }
  }
  return v4;
}
