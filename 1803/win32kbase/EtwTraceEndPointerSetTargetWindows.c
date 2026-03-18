/*
 * XREFs of EtwTraceEndPointerSetTargetWindows @ 0x1C00ABFA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceEndPointerSetTargetWindows(int a1)
{
  __int64 v1; // rcx
  void *v2; // rdx
  __int64 result; // rax

  v1 = (unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x100000) == 0 )
      return result;
    v2 = &EndPointerUpdateSetTargetWindows;
  }
  else
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) == 0 )
      return result;
    v2 = &EndPointerSetTargetWindows;
  }
  return McTemplateK0(v1, v2, &W32kControlGuid);
}
