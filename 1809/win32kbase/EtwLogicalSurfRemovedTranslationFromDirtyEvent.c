/*
 * XREFs of EtwLogicalSurfRemovedTranslationFromDirtyEvent @ 0x1C0107CB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq @ 0x1C00EA1AC (McTemplateK0pqqqq.c)
 */

ULONG __fastcall EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        struct _MCGEN_TRACE_CONTEXT *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5)
{
  ULONG result; // eax
  int v7; // [rsp+28h] [rbp-20h]

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    v7 = a3;
    return McTemplateK0pqqqq(a1, &LogicalSurfRemovedTranslationFromDirtyEvent, a3, a1, a2, v7, a4, a5);
  }
  return result;
}
