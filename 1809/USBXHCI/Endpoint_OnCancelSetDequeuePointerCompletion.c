/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0016990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C0018644 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C001A264 (WPP_RECORDER_SF_dddL.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  char v6; // r9
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // edx
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v13 = *(unsigned __int16 *)(a1 + 34);
    v12 = *(_DWORD *)(v3 + 144);
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 80),
      4u,
      0xDu,
      0x3Du,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v11,
      v12,
      v13);
    goto LABEL_5;
  }
  v6 = *(_BYTE *)(a1 + 60);
  v7 = *(_DWORD *)(v3 + 144);
  v8 = *(_QWORD *)(v3 + 80);
  if ( v6 != 1 )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_dddL(v8, v9, v7, 62);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512LL,
      "Set Dequeue Pointer command following a Stop Endpoint command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_5:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 288));
  }
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_dddL(v8, a2, v7, 63);
  if ( *(_BYTE *)(v3 + 37) )
    return Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  return ESM_AddEvent((PVOID)(v3 + 288));
}
