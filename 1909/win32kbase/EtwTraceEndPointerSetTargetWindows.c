/*
 * XREFs of EtwTraceEndPointerSetTargetWindows @ 0x1C010B3F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceEndPointerSetTargetWindows(int a1)
{
  __int64 v1; // rcx
  void *v2; // rdx
  __int64 result; // rax

  v1 = (unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x10) == 0 )
      return result;
    v2 = &EndPointerUpdateSetTargetWindows;
  }
  else
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) == 0 )
      return result;
    v2 = &EndPointerSetTargetWindows;
  }
  return McTemplateK0(v1, v2, &Context.Flags);
}
