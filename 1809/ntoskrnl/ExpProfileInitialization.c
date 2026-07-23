/*
 * XREFs of ExpProfileInitialization @ 0x1409DF2E0
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 */

bool __fastcall ExpProfileInitialization(__int64 a1, __int64 a2, __int64 a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v5[17]; // [rsp+30h] [rbp-88h] BYREF

  LOBYTE(a3) = 1;
  KiInitializeMutant((__int64)&ExpProfileStateMutex, 0LL, a3);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v5, 0, 0x78uLL);
  LOWORD(v5[0]) = 120;
  LODWORD(v5[1]) = 256;
  HIDWORD(v5[4]) = 512;
  HIDWORD(v5[5]) = 240;
  HIDWORD(v5[3]) = 983041;
  *(_OWORD *)((char *)&v5[1] + 4) = ExpProfileMapping;
  v5[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
