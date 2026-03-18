/*
 * XREFs of ExpMutantInitialization @ 0x140A21514
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A03DEC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 */

bool ExpMutantInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Mutant");
  memset(v2, 0, 0x78uLL);
  memset(&KeGetCurrentThread()->ApcState.Process->DirectoryTableBase, 0, (unsigned int)KdDumpEnableOffset);
  LOWORD(v2[0]) = 120;
  HIDWORD(v2[0]) = 64;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 56;
  *(_OWORD *)((char *)&v2[1] + 4) = ExpMutantMapping;
  HIDWORD(v2[3]) = 2031617;
  v2[9] = ExpDeleteMutant;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExMutantObjectType) >= 0;
}
