/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1402FB914
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1402EDBC8 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1402EDC34 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpProbeUserBufferSafe @ 0x1402F2CE8 (RtlpProbeUserBufferSafe.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x1402FBDEC (RtlpHpHeapHandleError.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     RtlZeroHeap @ 0x140897190 (RtlZeroHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_140405570 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_140405570 + 1) = v2[1];
  *((_OWORD *)&unk_140405570 + 2) = v2[2];
  *((_OWORD *)&unk_140405570 + 3) = v2[3];
  *((_OWORD *)&unk_140405570 + 4) = v2[4];
  *((_OWORD *)&unk_140405570 + 5) = v2[5];
  *((_OWORD *)&unk_140405570 + 6) = v2[6];
  *((_OWORD *)&unk_140405570 + 7) = v2[7];
  *((_OWORD *)&unk_140405570 + 8) = v2[8];
  *((_QWORD *)&unk_140405570 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_140405610;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
