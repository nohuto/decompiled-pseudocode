/*
 * XREFs of GetMonitorRectForDpi @ 0x1C00399C0
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetScreenRectForDpi @ 0x1C002B318 (GetScreenRectForDpi.c)
 *     GetMonitorRect @ 0x1C0039468 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00394B0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00395D0 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C003A6F0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0039AE0 (EngMulDiv.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  INT v7; // edi
  INT v8; // r12d
  INT v9; // esi
  INT v10; // eax
  INT v11; // r15d
  __m128i v12; // xmm6
  INT v13; // edi
  __int64 v14; // rbp
  int v15; // esi
  int v16; // edi

  v3 = *(_QWORD *)(a2 + 40);
  *a1 = *(__m128i *)(v3 + 28);
  if ( a3 )
  {
    v6 = a1->m128i_i64[0];
    v7 = *(unsigned __int16 *)(v3 + 66);
    v8 = a3;
    v9 = EngMulDiv(a1->m128i_i64[0], a3, v7);
    v10 = EngMulDiv(SHIDWORD(v6), v8, v7);
    v11 = *(unsigned __int16 *)(v3 + 64);
    v12 = *a1;
    v13 = v10;
    v14 = a1->m128i_i64[0];
    v15 = EngMulDiv(*(_OWORD *)a1 - v6, v8, v11) + v9;
    a1->m128i_i32[0] = v15;
    v16 = EngMulDiv(HIDWORD(v14) - HIDWORD(v6), v8, v11) + v13;
    v12.m128i_i64[0] = _mm_srli_si128(v12, 8).m128i_u64[0];
    a1->m128i_i32[1] = v16;
    a1->m128i_i32[2] = v15 + EngMulDiv(v12.m128i_i32[0] - v14, v8, v11);
    a1->m128i_i32[3] = v16 + EngMulDiv(v12.m128i_i32[1] - HIDWORD(v14), v8, v11);
  }
  return a1;
}
