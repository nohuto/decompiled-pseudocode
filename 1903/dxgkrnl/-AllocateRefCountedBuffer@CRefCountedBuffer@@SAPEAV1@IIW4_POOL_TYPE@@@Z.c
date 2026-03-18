/*
 * XREFs of ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C0042B2C
 * Callers:
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0248CA8 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0281D68 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct CRefCountedBuffer *__fastcall CRefCountedBuffer::AllocateRefCountedBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a1;
  if ( (int)a1 + 8 >= (unsigned int)a1 )
    return (struct CRefCountedBuffer *)operator new[]((unsigned int)(a1 + 8), 0x4B677844u, (POOL_TYPE)512);
  v5 = WdLogNewEntry5_WdWarning(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = v3;
  WdLogEvent5_WdWarning(v5);
  return 0LL;
}
