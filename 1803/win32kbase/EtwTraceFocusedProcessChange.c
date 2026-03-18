/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C006B130
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00AEFD0 (McTemplateK0qqq.c)
 */

char __fastcall EtwTraceFocusedProcessChange(GUID *Activity, __int64 a2)
{
  char result; // al
  struct _MCGEN_TRACE_CONTEXT *Arg1; // rcx
  unsigned int Arg2; // edx

  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0 )
  {
    result = byte_1C019A1D8 - 1;
    if ( (unsigned __int8)(byte_1C019A1D8 - 1) > 2u && (qword_1C019A1C0 & 0x8000000000020000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C019A1C8 & 0x8000000000020000uLL) == qword_1C019A1C8 )
      {
        Arg1 = 0LL;
        if ( Activity )
          Arg2 = *(_DWORD *)(*(_QWORD *)&Activity[26].Data1 + 56LL);
        else
          Arg2 = 0;
        if ( a2 )
          Arg1 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(*(_QWORD *)(a2 + 416) + 56LL);
        result = (char)Microsoft_Windows_Win32kEnableBits;
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
          return McTemplateK0qqq(Arg1, &FocusedProcessChangeEvent, Activity, gSessionId, (const unsigned int)Arg1, Arg2);
      }
    }
  }
  return result;
}
