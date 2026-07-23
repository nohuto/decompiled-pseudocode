/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x14084AC8C
 * Callers:
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1401C2C90 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  int v1; // edi
  int InfoBuffer; // [rsp+40h] [rbp-38h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  v1 = 0;
  if ( ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u) >= 0
    && InfoBuffer )
  {
    v1 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  }
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    *(_QWORD *)&EventDescriptor.Id = 0LL;
    EventDescriptor.Keyword = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0 )
      ++v1;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
