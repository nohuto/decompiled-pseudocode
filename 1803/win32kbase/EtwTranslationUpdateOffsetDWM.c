/*
 * XREFs of EtwTranslationUpdateOffsetDWM @ 0x1C00DA450
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq @ 0x1C00AE7EC (McTemplateK0pqq.c)
 */

NTSTATUS __fastcall EtwTranslationUpdateOffsetDWM(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v5; // [rsp+28h] [rbp-10h]

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x2000000) != 0 )
  {
    v5 = a3;
    return McTemplateK0pqq(a1, &TranslationUpdateOffsetDWM, a3, a1, a2, v5);
  }
  return result;
}
