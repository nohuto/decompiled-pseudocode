/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C015233C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0150818 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C01509D4 (rimDispatchCompleteFrame.c)
 *     rimProcessHidInput @ 0x1C0151984 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C0151EF0 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0151F7C (rimProcessMouseInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01331FC (WPP_RECORDER_SF_qqqD.c)
 *     rimProcessInput @ 0x1C0151BA0 (rimProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KPROCESS *v13; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v9 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 584) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v13 = *(struct _KPROCESS **)(a1 + 32);
  if ( v13 == (struct _KPROCESS *)PsGetCurrentProcess(v11, v10) )
    goto LABEL_6;
  if ( !*(_BYTE *)(a1 + 9) )
  {
    KeStackAttachProcess(v13, &ApcState);
    v9 = 1;
LABEL_6:
    rimProcessInput(a1, a2, a3, a4, a5);
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  DbgPrintGDI(
    "rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n",
    *(const void **)(a1 + 72),
    v13,
    *(const void **)(a1 + 40),
    *(_DWORD *)(a1 + 84));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      v15,
      v14,
      v16,
      18,
      (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 84));
  *(_BYTE *)(a1 + 584) = 1;
}
