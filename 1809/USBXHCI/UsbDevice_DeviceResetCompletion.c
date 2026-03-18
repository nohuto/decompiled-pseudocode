/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x1C0034B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointState @ 0x1C0035EB0 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dLL @ 0x1C0038148 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqLL @ 0x1C0038A18 (WPP_RECORDER_SF_dqLL.c)
 */

void __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, __int64 *a3, int a4)
{
  __int64 *v4; // rbx
  char v6; // si
  int v8; // edx
  __int64 **v9; // rsi
  __int64 v10; // rdi
  char v11; // al
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 **v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-38h]

  v4 = *(__int64 **)(a1 + 48);
  v6 = a2;
  if ( a2 == 3 )
  {
    v8 = *((unsigned __int8 *)v4 + 135);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v4[1] + 72),
      v8,
      12,
      62,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *((_BYTE *)v4 + 135),
      *v4);
    v9 = (__int64 **)(v4 + 23);
    v10 = 30LL;
    do
    {
      if ( *v9 )
        Endpoint_Disable(*v9, 0LL);
      ++v9;
      --v10;
    }
    while ( v10 );
LABEL_14:
    *((_DWORD *)v4 + 38) = 3;
    v19 = v4[53];
    v4[53] = 0LL;
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v19,
      0LL);
    return;
  }
  v11 = *(_BYTE *)(a1 + 60);
  v12 = *(unsigned __int8 *)(a1 + 61);
  v13 = *v4;
  v14 = v4[1];
  if ( v11 == 1 )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v14 + 72),
      v13,
      12,
      63,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v12,
      *v4);
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1LL) )
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(v4[1] + 72),
        *(unsigned __int8 *)(a1 + 61),
        v15,
        v16,
        v20,
        *(_BYTE *)(a1 + 61),
        *(_BYTE *)(a1 + 60),
        v6);
    v17 = (__int64 **)(v4 + 23);
    v18 = 30LL;
    do
    {
      if ( *v17 )
        Endpoint_Disable(*v17, 0LL);
      ++v17;
      --v18;
    }
    while ( v18 );
    goto LABEL_14;
  }
  WPP_RECORDER_SF_dqLL(*(_QWORD *)(v14 + 72), v13, v12, a4);
  Controller_HwVerifierBreakIfEnabled(
    (_QWORD *)v4[1],
    *v4,
    0LL,
    0x200000LL,
    "Reset Device Command failed",
    (__int64 *)(a1 + 24),
    a3);
  Controller_ReportFatalError(v4[1], 2, 4121, 0LL, 0LL, 0LL);
}
