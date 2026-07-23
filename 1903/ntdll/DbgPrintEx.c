/*
 * XREFs of DbgPrintEx @ 0x180052780
 * Callers:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800261E0 (RtlFindActivationContextSectionGuid.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     RtlFindActivationContextSectionString @ 0x180026BF0 (RtlFindActivationContextSectionString.c)
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 *     sub_18002715C @ 0x18002715C (sub_18002715C.c)
 *     sub_1800274B0 @ 0x1800274B0 (sub_1800274B0.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 *     RtlAcquireResourceShared @ 0x18005FB10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005FC20 (RtlAcquireResourceExclusive.c)
 *     TpCheckTerminateWorker @ 0x18006D560 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x18006EB00 (RtlDeactivateActivationContext.c)
 *     sub_180070B08 @ 0x180070B08 (sub_180070B08.c)
 *     sub_180070C28 @ 0x180070C28 (sub_180070C28.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180071608 @ 0x180071608 (sub_180071608.c)
 *     sub_180071730 @ 0x180071730 (sub_180071730.c)
 *     RtlCreateActivationContext @ 0x180071A00 (RtlCreateActivationContext.c)
 *     sub_180071B68 @ 0x180071B68 (sub_180071B68.c)
 *     sub_180071BEC @ 0x180071BEC (sub_180071BEC.c)
 *     sub_180075F10 @ 0x180075F10 (sub_180075F10.c)
 *     sub_180076000 @ 0x180076000 (sub_180076000.c)
 *     sub_1800763D0 @ 0x1800763D0 (sub_1800763D0.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180077860 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_18008C4D0 @ 0x18008C4D0 (sub_18008C4D0.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800DEB44 @ 0x1800DEB44 (sub_1800DEB44.c)
 *     sub_1800DEDD4 @ 0x1800DEDD4 (sub_1800DEDD4.c)
 *     sub_1800DF114 @ 0x1800DF114 (sub_1800DF114.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6B30 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 *     sub_1800F8F8C @ 0x1800F8F8C (sub_1800F8F8C.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return sub_180053DE8(&dword_18011D492, ComponentId, Level, Format, (__int64 *)va, 1);
}
