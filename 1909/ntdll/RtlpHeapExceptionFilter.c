/*
 * XREFs of RtlpHeapExceptionFilter @ 0x18010A6B0
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x18003A9E0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1800407A0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180045138 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x18006E818 (RtlpProbeUserBufferSafe.c)
 *     RtlValidateHeap @ 0x1800705A0 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x180089B20 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF630 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x180101780 (RtlpHpHeapHandleError.c)
 *     RtlDebugAllocateHeap @ 0x1801046F0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104AA4 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104EEC (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010558C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105C34 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180105F94 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180106118 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1801061A4 (RtlDebugZeroHeap.c)
 *     RtlpValidateLFHBlock @ 0x180107C7C (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010B280 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unk_180162950 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180162950 + 1) = v2[1];
  *((_OWORD *)&unk_180162950 + 2) = v2[2];
  *((_OWORD *)&unk_180162950 + 3) = v2[3];
  *((_OWORD *)&unk_180162950 + 4) = v2[4];
  *((_OWORD *)&unk_180162950 + 5) = v2[5];
  *((_OWORD *)&unk_180162950 + 6) = v2[6];
  *((_OWORD *)&unk_180162950 + 7) = v2[7];
  *((_OWORD *)&unk_180162950 + 8) = v2[8];
  *((_QWORD *)&unk_180162950 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801629F0;
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
