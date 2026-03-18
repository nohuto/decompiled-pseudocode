/*
 * XREFs of EtwTraceDITResolveDCompInputHandleToHwnd @ 0x1C0012A10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppxq @ 0x1C00AE6D4 (McTemplateK0ppxq.c)
 */

__int64 __fastcall EtwTraceDITResolveDCompInputHandleToHwnd(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0ppxq(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
