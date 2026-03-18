/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C00FFA5C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C00FE4B0 (rimDispatchCompleteFrame.c)
 *     rimProcessKeyboardInput @ 0x1C00FF620 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C00FF6C4 (rimProcessMouseInput.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C0103AD4 (rimDispatchHidKeyboardInputData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00DE4B0 (WPP_RECORDER_SF_qqqD.c)
 *     rimProcessInput @ 0x1C00FF314 (rimProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  char v5; // si
  struct _KPROCESS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v5 = 0;
  if ( *(_BYTE *)(a1 + 568) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v10 = *(struct _KPROCESS **)(a1 + 32);
  if ( v10 != (struct _KPROCESS *)PsGetCurrentProcess(a1) )
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      DbgPrintRIMAlways(
        "rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n",
        *(const void **)(a1 + 64),
        v10,
        *(const void **)(a1 + 40),
        *(_DWORD *)(a1 + 76));
      v13 = *(_DWORD *)(a1 + 76);
      WPP_RECORDER_SF_qqqD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v12,
        0x13u,
        (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
        *(_QWORD *)(a1 + 64),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        v13);
      *(_BYTE *)(a1 + 568) = 1;
      return;
    }
    KeStackAttachProcess(v10, &ApcState);
    v5 = 1;
  }
  rimProcessInput(a1, a2, a3, a4, a5);
  if ( v5 )
    KeUnstackDetachProcess(&ApcState);
}
