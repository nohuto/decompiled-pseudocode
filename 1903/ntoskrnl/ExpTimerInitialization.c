/*
 * XREFs of ExpTimerInitialization @ 0x140A037B8
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A038D0 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCreateObjectType @ 0x140759A60 (ObCreateObjectType.c)
 */

bool ExpTimerInitialization()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  ExpWakeTimerLock = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  qword_14042F5F8 = (__int64)&ExpWakeTimerList;
  ExpWakeTimerList = (__int64)&ExpWakeTimerList;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  LODWORD(v3[1]) = 256;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 328;
  HIDWORD(v3[3]) = 2031619;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpTimerMapping;
  v3[9] = ExpDeleteTimer;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExTimerObjectType);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    HIDWORD(v3[5]) = 168;
    v3[9] = ExpDeleteTimer2;
    v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExpIRTimerObjectType);
    ExpTimerFreedCookie = ExGenRandom(0);
  }
  return v0 >= 0;
}
