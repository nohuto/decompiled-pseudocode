/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C003D198
 * Callers:
 *     GetMonitorRect @ 0x1C003CB48 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C003CBF0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C003CD40 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C003CF50 (PhysicalToLogicalDPIPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C003D2E0 (EngMulDiv.c)
 */

__m128i *__fastcall GetMonitorRectForDpiContext(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __m128i v4; // xmm6
  unsigned __int16 v5; // r8
  INT v6; // edi
  INT v7; // r13d
  INT v8; // esi
  INT v9; // eax
  INT v10; // r12d
  INT v11; // ebp
  __int32 v12; // edi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // xmm6_8
  INT v15; // eax
  __m128i v17; // [rsp+20h] [rbp-48h]
  __m128i *v18; // [rsp+70h] [rbp+8h]

  v18 = a1;
  if ( (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0 )
  {
    *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 72LL);
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 40);
    v4 = *(__m128i *)(v3 + 28);
    v5 = (a3 >> 8) & 0x1FF;
    if ( v5 )
    {
      v6 = *(unsigned __int16 *)(v3 + 66);
      v7 = v5;
      v8 = EngMulDiv(_mm_cvtsi128_si32(v4), v5, v6);
      v9 = EngMulDiv(v4.m128i_i32[1], v7, v6);
      v10 = *(unsigned __int16 *)(v3 + 64);
      v11 = v9;
      v12 = v4.m128i_i32[0];
      v13 = HIDWORD(v4.m128i_i64[0]);
      v17.m128i_i32[0] = EngMulDiv(0, v7, v10) + v8;
      v14 = _mm_srli_si128(v4, 8).m128i_u64[0];
      v17.m128i_i32[1] = EngMulDiv(0, v7, v10) + v11;
      v17.m128i_i32[2] = v17.m128i_i32[0] + EngMulDiv(v14 - v12, v7, v10);
      v15 = EngMulDiv(HIDWORD(v14) - v13, v7, v10);
      a1 = v18;
      v17.m128i_i32[3] = v17.m128i_i32[1] + v15;
      v4 = v17;
    }
    *a1 = v4;
  }
  return a1;
}
