/*
 * XREFs of WheapCheckForAndReportErrorsFromPreviousSession @ 0x14017D41C
 * Callers:
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 * Callees:
 *     WheapReportBootError @ 0x14031FCDC (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14031FD9C (WheapReportPersistedErrorRecord.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void WheapCheckForAndReportErrorsFromPreviousSession()
{
  int BootErrorPacket; // eax
  PVOID v1; // rcx
  bool v2; // sf
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+60h] [rbp+18h] BYREF
  char v6; // [rsp+68h] [rbp+20h] BYREF
  PVOID v7; // [rsp+70h] [rbp+28h] BYREF
  PVOID P; // [rsp+78h] [rbp+30h] BYREF

  BootErrorPacket = PshedGetBootErrorPacket(&v5, &v7);
  v1 = v7;
  v2 = BootErrorPacket < 0;
  v4[0] = 0LL;
  v3 = 0LL;
  if ( v2 )
    v1 = 0LL;
  v7 = v1;
  do
  {
    if ( (int)PshedReadErrorRecord(0LL, v3, v4, &v6, &P) < 0 )
      break;
    if ( (unsigned __int8)WheapReportPersistedErrorRecord(P) == 1 )
      PshedClearErrorRecord(
        (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)((char *)P + 108)) >> 8),
        *((_QWORD *)P + 12));
    ExFreePoolWithTag(P, 0x44485350u);
    v3 = v4[0];
  }
  while ( v4[0] != -1LL );
  if ( v7 )
  {
    WheapReportBootError();
    ExFreePoolWithTag(v7, 0x44485350u);
  }
}
