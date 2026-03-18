/*
 * XREFs of ?VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00AE394
 * Callers:
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00AAE0C (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::VerifyAllocationForSubmissionPhysical(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  bool v7; // cf
  __int64 v9; // rax

  v4 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v4 + 76) & 0x100000) != 0 )
  {
    v5 = WdLogNewEntry5_WdError(v4, a2, a3);
    *(_QWORD *)(v5 + 24) = a2;
    WdLogEvent5_WdError(v5);
  }
  else
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 504) + 4LL);
    v7 = (_WORD)v6 == 2;
    LOWORD(v6) = v6 - 2;
    if ( !v7 && (_WORD)v6 != 1 && (*((_BYTE *)a2 + 28) & 3) == 2 )
      return 0LL;
    v9 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdAssertion(v9);
  }
  return 3221225473LL;
}
