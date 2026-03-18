/*
 * XREFs of EtwpInitializeRegistration @ 0x140A15944
 * Callers:
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400FD068 (KiInitializeMutant.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRegistration()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KiInitializeMutant(&EtwpGlobalMutex, 0, 1);
  EtwpReplyListLock = 0LL;
  qword_1404325B8 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v2[0]) = 120;
  v2[8] = EtwpCloseRegistrationObject;
  LODWORD(v2[1]) = 256;
  v2[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = EtwpGenericMapping;
  HIDWORD(v2[3]) = 2052;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&EtwpRegistrationObjectType);
}
