/*
 * XREFs of ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180133850
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180013DC0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18012A4F4 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18015E570 (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007641C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x18012F424 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

char __fastcall CAppManagerTelemetry::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_1805C1F30;
    qword_1805C1F30[0] = &IamTraceLogging::`vftable';
    atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_1805C1F30);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_1805C1F30);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3, 0);
}
