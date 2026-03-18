/*
 * XREFs of EtwTracePointerCoalesce @ 0x1C010DFF0
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0162860 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     McTemplateK0hhq @ 0x1C010FFC8 (McTemplateK0hhq.c)
 */

__int64 __fastcall EtwTracePointerCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
      return McTemplateK0hhq(a1, (unsigned int)&PointerDelegateCoalesce, a3, (unsigned __int16)a1, a2, 0);
  }
  else if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
  {
    return McTemplateK0hhq(a1, (unsigned int)&PointerCoalesce, 0, (unsigned __int16)a1, a2, 0);
  }
  return result;
}
