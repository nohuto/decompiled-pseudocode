/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b3e55f7810137ca39e6ab1bd9a1e7155___ @ 0x1C01A94BC
 * Callers:
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008A00 (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b3e55f7810137ca39e6ab1bd9a1e7155___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int **a3)
{
  char *v5; // r9
  __m128i v6; // xmm0
  unsigned int v7; // ecx
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
    return 0;
  v5 = (char *)v9;
  *(_DWORD *)v9 = 28;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 17;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  v6 = *(__m128i *)(*((_QWORD *)*a3 + 21) * *a3[1] + *((_QWORD *)*a3 + 17));
  *((_DWORD *)v5 + 1) = 17;
  v7 = (*a3)[6];
  *((_DWORD *)v5 + 3) = v6.m128i_i32[0];
  *((_DWORD *)v5 + 4) = v6.m128i_i32[1];
  *((_DWORD *)v5 + 2) = v7;
  *(_QWORD *)(v5 + 20) = _mm_srli_si128(v6, 8).m128i_u64[0];
  return 1;
}
