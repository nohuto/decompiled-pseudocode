/*
 * XREFs of EtwTranslationUpdateOffset @ 0x1C00DA410
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq @ 0x1C00AE7EC (McTemplateK0pqq.c)
 */

NTSTATUS __fastcall EtwTranslationUpdateOffset(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pqq(a1, &TranslationUpdateOffset, a3, a1, a2, a3);
  return result;
}
