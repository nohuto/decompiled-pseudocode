/*
 * XREFs of EtwLogicalSurfRemovedTranslationFromMoveEvent @ 0x1C00DA030
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq @ 0x1C00AE868 (McTemplateK0pqqqq.c)
 */

NTSTATUS __fastcall EtwLogicalSurfRemovedTranslationFromMoveEvent(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  NTSTATUS result; // eax
  int v7; // [rsp+28h] [rbp-20h]

  result = (int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    v7 = a3;
    return McTemplateK0pqqqq(a1, &LogicalSurfRemovedTranslationFromMoveEvent, a3, a1, a2, v7, a4, a5);
  }
  return result;
}
