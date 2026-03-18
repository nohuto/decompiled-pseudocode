/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x14012AF78
 * Callers:
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14007A204 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     CcReEngageWorkerThreads @ 0x140171634 (CcReEngageWorkerThreads.c)
 */

_QWORD *__fastcall CcAdjustWriteBehindThreadPool(__int64 a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    *(_DWORD *)(a1 + 896) = 1;
    if ( *(_BYTE *)(a1 + 736) )
      *(_BYTE *)(a1 + 736) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 896) = -1;
    result = (_QWORD *)(a1 + 256);
    if ( (_QWORD *)*result != result && !*(_BYTE *)(a1 + 312) )
      return (_QWORD *)CcReEngageWorkerThreads(a1, *(unsigned int *)(a1 + 200), 0LL);
  }
  return result;
}
