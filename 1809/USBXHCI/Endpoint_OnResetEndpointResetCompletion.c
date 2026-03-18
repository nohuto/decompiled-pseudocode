/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C0017440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0014660 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0017638 (Endpoint_OnResetSetDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C0035EB0 (UsbDevice_GetEndpointState.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int StreamContextArray; // eax
  __int64 result; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  unsigned int i; // edi
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+38h] [rbp-10h]
  int EndpointState; // [rsp+38h] [rbp-10h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    v18 = *(_DWORD *)(v6 + 144);
    v15 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Cu,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v15,
      v18);
LABEL_3:
    StreamContextArray = -1073741823;
LABEL_4:
    *(_DWORD *)(v6 + 280) = StreamContextArray;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v6 + 288));
    return result;
  }
  v9 = *(_BYTE *)(a1 + 60);
  v10 = *(_QWORD *)(v6 + 16);
  if ( v9 != 1 )
  {
    v21 = v9;
    v19 = *(_DWORD *)(v6 + 144);
    v16 = *(unsigned __int8 *)(v10 + 135);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x2Du,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v16,
      v19,
      v21);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, *(_QWORD *)(v6 + 16), v6, 0LL);
    goto LABEL_3;
  }
  EndpointState = UsbDevice_GetEndpointState(v10, *(unsigned int *)(v6 + 144));
  v20 = *(_DWORD *)(v6 + 144);
  v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v6 + 80),
    4u,
    0xDu,
    0x2Eu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    v17,
    v20,
    EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v13 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v13 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v13, v11, v12);
  if ( StreamContextArray < 0 )
    goto LABEL_4;
  result = *(_QWORD *)(v6 + 136);
  for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
  {
    Endpoint_OnResetSetDequeuePointer(v3, i);
    result = *(_QWORD *)(v6 + 136);
  }
  return result;
}
