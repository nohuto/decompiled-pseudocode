/*
 * XREFs of EtwGdiSysMemToken @ 0x1C0098FE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqxx @ 0x1C0111994 (McTemplateK0qqxx.c)
 */

__int64 __fastcall EtwGdiSysMemToken(int a1, char a2, int a3, char a4)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qqxx(a1, (unsigned int)&GdiSysMemToken, a3, a1, a2, a3, a4);
  return result;
}
