/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C0127974
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0126518 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 *     rimProcessHidInput @ 0x1C012704C (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C0127584 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0127610 (rimProcessMouseInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C010B51C (WPP_RECORDER_SF_qqqD.c)
 *     rimProcessInput @ 0x1C0127258 (rimProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  char v5; // si
  struct _KPROCESS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v5 = 0;
  if ( *(_BYTE *)(a1 + 584) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(struct _KPROCESS **)(a1 + 32);
  if ( v10 != (struct _KPROCESS *)PsGetCurrentProcess(a1) )
  {
    if ( *(_BYTE *)(a1 + 10) )
    {
      DbgPrintRIMAlways(
        "rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n",
        *(const void **)(a1 + 72),
        v10,
        *(const void **)(a1 + 40),
        *(_DWORD *)(a1 + 84));
      v14 = *(_DWORD *)(a1 + 84);
      WPP_RECORDER_SF_qqqD(
        v12,
        v11,
        v13,
        0x13u,
        (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
        *(_QWORD *)(a1 + 72),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        v14);
      *(_BYTE *)(a1 + 584) = 1;
      return;
    }
    KeStackAttachProcess(v10, &ApcState);
    v5 = 1;
  }
  rimProcessInput(a1, a2, a3, a4, a5);
  if ( v5 )
    KeUnstackDetachProcess(&ApcState);
}
