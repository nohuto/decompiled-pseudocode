/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C0017750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C00186E8 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+38h] [rbp-10h]
  int v16; // [rsp+38h] [rbp-10h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    v12 = *(_DWORD *)(v6 + 144);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x29u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v9,
      v12);
    goto LABEL_5;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    v15 = v7;
    v13 = *(_DWORD *)(v6 + 144);
    v10 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x2Au,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v10,
      v13,
      v15);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4122, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
LABEL_5:
    *(_DWORD *)(v6 + 280) = -1073741823;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v6 + 288));
  }
  v16 = *(unsigned __int16 *)(a1 + 34);
  v14 = *(_DWORD *)(v6 + 144);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v6 + 80),
    4u,
    0xDu,
    0x2Bu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    v11,
    v14,
    v16);
  if ( *(_BYTE *)(v6 + 37) )
    return Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  *(_DWORD *)(v6 + 280) = 0;
  return ESM_AddEvent((PVOID)(v6 + 288));
}
