/*
 * XREFs of DxgkResumeMemorySegments @ 0x1C01F6D54
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C017D7D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F6030 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkResumeMemorySegments(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  ADAPTER_RENDER *v7; // rcx

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2, a3);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return v5;
  }
  v7 = *(ADAPTER_RENDER **)(a1 + 2560);
  if ( !v7 )
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v4 + 24) = a1;
    v5 = -1073741637;
    *(_QWORD *)(v4 + 32) = -1073741637LL;
    goto LABEL_3;
  }
  return ADAPTER_RENDER::ResumeMemorySegments(v7);
}
