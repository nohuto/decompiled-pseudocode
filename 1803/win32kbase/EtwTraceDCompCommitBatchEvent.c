/*
 * XREFs of EtwTraceDCompCommitBatchEvent @ 0x1C00665E0
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     McTemplateK0qpq @ 0x1C00AEB84 (McTemplateK0qpq.c)
 */

__int64 __fastcall EtwTraceDCompCommitBatchEvent(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0qpq(a1, a2, a3, a1, a2, a3);
  return result;
}
