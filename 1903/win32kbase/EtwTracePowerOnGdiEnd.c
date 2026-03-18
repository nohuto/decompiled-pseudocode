/*
 * XREFs of EtwTracePowerOnGdiEnd @ 0x1C00BABE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C010FAEC (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePowerOnGdiEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &PowerOnGdiEnd, a3, (unsigned int)a1);
  return result;
}
