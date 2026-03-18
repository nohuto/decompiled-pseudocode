/*
 * XREFs of EtwTraceTouchPadTypeDiscovered @ 0x1C010E960
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C010FAEC (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceTouchPadTypeDiscovered(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0q(a1, &TouchPadTypeDiscovered, a3, (unsigned int)a1);
  return result;
}
