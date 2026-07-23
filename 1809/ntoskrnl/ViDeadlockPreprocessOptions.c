/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x14093E718
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14093D260 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x14093D74C (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x14093DAA8 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x14093E948 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14093EAE4 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 */

__int64 ViDeadlockPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xFFF;
    if ( v9 >= 0xC )
      result = 4LL;
    else
      result = *(unsigned int *)&ViDeadlockDefaultActions[2 * v9];
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    ViDeadlockIssue = a3;
    qword_14040DFE8 = a4;
    qword_14040DFF0 = a5;
    qword_14040DFF8 = a6;
    VfUtilDbgPrint("************ Verifier Detected a Potential Deadlock *************\n");
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** ");
    if ( a2 )
      DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
