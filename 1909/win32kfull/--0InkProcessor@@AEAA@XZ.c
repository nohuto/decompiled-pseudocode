/*
 * XREFs of ??0InkProcessor@@AEAA@XZ @ 0x1C0118530
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C01185F0 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C012ACDC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     TraceLoggingRegisterEx @ 0x1C0368384 (TraceLoggingRegisterEx.c)
 */

InkProcessor *__fastcall InkProcessor::InkProcessor(InkProcessor *this)
{
  InkFeedbackServer *v2; // rbx

  *(_QWORD *)this = 0LL;
  v2 = (InkProcessor *)((char *)this + 96);
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 10) = "HideInkCursorProvider";
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 4) = &HideInkCursorProvider::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C031F298, 0LL, 0LL);
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_InkProcessor__private_propertyCache,
    8134488LL,
    &unk_1C02DB29C,
    1LL,
    3);
  *((_BYTE *)this + 8) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v2, (InkProcessor *)((char *)this + 32));
  return this;
}
