/*
 * XREFs of EtwTraceTouchPadTypeDiscovered @ 0x1C00ACD10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00ADFE8 (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceTouchPadTypeDiscovered(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0q(a1, &TouchPadTypeDiscovered, a3, (unsigned int)a1);
  return result;
}
