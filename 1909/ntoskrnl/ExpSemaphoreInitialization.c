/*
 * XREFs of ExpSemaphoreInitialization @ 0x140A21F8C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A03DEC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 */

bool ExpSemaphoreInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v2[32]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Semaphore");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  v2[1] = 8;
  v2[2] = 256;
  v2[9] = 512;
  *(_OWORD *)&v2[3] = ExpSemaphoreMapping;
  v2[11] = 32;
  v2[7] = 2031619;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExSemaphoreObjectType) >= 0;
}
