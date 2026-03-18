/*
 * XREFs of ExpProfileInitialization @ 0x140A2180C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A03DEC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400FD068 (KiInitializeMutant.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KiInitializeMutant(&ExpProfileStateMutex, 0, 1);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 240;
  HIDWORD(v2[3]) = 983041;
  *(_OWORD *)((char *)&v2[1] + 4) = ExpProfileMapping;
  v2[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
