/*
 * XREFs of EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C008D750
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E945C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &DwmSyncFlushForceRenderAndWaitForBatchBegin, a3, (unsigned int)a1);
  return result;
}
