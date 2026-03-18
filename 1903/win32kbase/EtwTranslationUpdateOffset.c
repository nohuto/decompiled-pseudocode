/*
 * XREFs of EtwTranslationUpdateOffset @ 0x1C0132380
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq @ 0x1C01108A8 (McTemplateK0pqq.c)
 */

ULONG __fastcall EtwTranslationUpdateOffset(struct _MCGEN_TRACE_CONTEXT *a1, int a2, __int64 a3)
{
  ULONG result; // eax
  int v5; // [rsp+28h] [rbp-10h]

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
  {
    v5 = a3;
    return McTemplateK0pqq(a1, &TranslationUpdateOffset, a3, a1, a2, v5);
  }
  return result;
}
