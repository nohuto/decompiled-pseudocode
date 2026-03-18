/*
 * XREFs of GetMonitorRectForDpi @ 0x1C0057E78
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorRect @ 0x1C0057744 (GetMonitorRect.c)
 *     GetScreenRectForDpi @ 0x1C00577BC (GetScreenRectForDpi.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00578D0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0057AE0 (PhysicalToLogicalDPIPoint.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0057C00 (PhysicalToLogicalDPIRect.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C00599F8 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  INT v6; // edi
  INT v7; // r12d
  INT v8; // esi
  INT v9; // eax
  INT v10; // r15d
  __m128i v11; // xmm6
  INT v12; // edi
  __int64 v13; // rbp
  int v14; // esi
  int v15; // edi

  v3 = *(_QWORD *)(a2 + 40);
  *a1 = *(__m128i *)(v3 + 28);
  if ( a3 )
  {
    v5 = a1->m128i_i64[0];
    v6 = *(unsigned __int16 *)(v3 + 66);
    v7 = a3;
    v8 = EngMulDiv(a1->m128i_i64[0], a3, v6);
    v9 = EngMulDiv(SHIDWORD(v5), v7, v6);
    v10 = *(unsigned __int16 *)(v3 + 64);
    v11 = *a1;
    v12 = v9;
    v13 = a1->m128i_i64[0];
    v14 = EngMulDiv(*(_OWORD *)a1 - v5, v7, v10) + v8;
    a1->m128i_i32[0] = v14;
    v15 = EngMulDiv(HIDWORD(v13) - HIDWORD(v5), v7, v10) + v12;
    v11.m128i_i64[0] = _mm_srli_si128(v11, 8).m128i_u64[0];
    a1->m128i_i32[1] = v15;
    a1->m128i_i32[2] = v14 + EngMulDiv(v11.m128i_i32[0] - v13, v7, v10);
    a1->m128i_i32[3] = v15 + EngMulDiv(v11.m128i_i32[1] - HIDWORD(v13), v7, v10);
  }
  return a1;
}
