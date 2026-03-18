/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x14084A38C
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1401C3810 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-38h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL, 0LL) >= 0 && v3 )
    v1 = (int)ZwUpdateWnfStateData((__int64)&WNF_WER_SERVICE_START, 0LL, 0LL) >= 0;
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
