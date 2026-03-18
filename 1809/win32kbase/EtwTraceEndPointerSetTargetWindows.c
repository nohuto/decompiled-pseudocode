/*
 * XREFs of EtwTraceEndPointerSetTargetWindows @ 0x1C00E67D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceEndPointerSetTargetWindows(int a1)
{
  struct _MCGEN_TRACE_CONTEXT *v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx
  ULONG result; // eax

  v1 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x10) == 0 )
      return result;
    v2 = (const EVENT_DESCRIPTOR *)&EndPointerUpdateSetTargetWindows;
  }
  else
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) == 0 )
      return result;
    v2 = (const EVENT_DESCRIPTOR *)&EndPointerSetTargetWindows;
  }
  return McTemplateK0(v1, v2, (const GUID *)&Context.Flags);
}
