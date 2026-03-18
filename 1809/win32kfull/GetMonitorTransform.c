/*
 * XREFs of GetMonitorTransform @ 0x1C0079FE8
 * Callers:
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0079F78 (UpdateTopLevelWindowDPITransform.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C011E808 (TransformVectorWithInputTargetPrecedence.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v6; // bx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  int v10; // r14d
  __int64 result; // rax
  float v12; // xmm4_4
  int v13; // ecx
  __m128i v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8) & 0x1FF;
  if ( !a1 )
    return 0LL;
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL);
  if ( !v7 )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) == 0 )
    return 0LL;
  v8 = *GetMonitorRectForDpi(v14, a1, v6);
  v9 = *(_QWORD *)(a1 + 40);
  v14[0] = v8;
  v10 = v8.m128i_i32[0];
  if ( *(_WORD *)(v9 + 64) == v6
    && !(unsigned int)IsChildWindowDpiBoundary((struct tagWND *)a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 40) + 28LL) == v8.m128i_i64[0] )
  {
    return 0LL;
  }
  v12 = (float)v6;
  v13 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL);
  *(_DWORD *)(a3 + 40) = 1065353216;
  *(_DWORD *)(a3 + 60) = 1065353216;
  *(float *)v8.m128i_i32 = (float)v13 / v12;
  *(_DWORD *)a3 = v8.m128i_i32[0];
  *(_DWORD *)(a3 + 20) = v8.m128i_i32[0];
  result = 1LL;
  *(float *)(a3 + 48) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 28LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL) * (float)v10) / v12);
  *(float *)(a3 + 52) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 32LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL)
                                      * (float)v8.m128i_i32[1])
                              / v12);
  return result;
}
