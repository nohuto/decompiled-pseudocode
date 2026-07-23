/*
 * XREFs of EtwpInitializeRegistration @ 0x1409D13BC
 * Callers:
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 */

__int64 __fastcall EtwpInitializeRegistration(__int64 a1, __int64 a2, __int64 a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  LOBYTE(a3) = 1;
  KiInitializeMutant((__int64)&EtwpGlobalMutex, 0LL, a3);
  EtwpReplyListLock = 0LL;
  qword_14040AED8 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v5, 0, 0x78uLL);
  BYTE2(v5[0]) |= 0x18u;
  v5[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v5[0]) = 120;
  v5[8] = EtwpCloseRegistrationObject;
  LODWORD(v5[1]) = 256;
  v5[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v5[1] + 4) = EtwpGenericMapping;
  HIDWORD(v5[3]) = 2052;
  HIDWORD(v5[4]) = 512;
  HIDWORD(v5[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&EtwpRegistrationObjectType);
}
