/*
 * XREFs of RIMSetTestModeStatus @ 0x1C00DE220
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1C00DFB10 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetTestModeStatus(int a1)
{
  struct _LIST_ENTRY *i; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _LIST_ENTRY *j; // rbx

  RIMLockExclusive((__int64)&gObListLock);
  gbTestModeOn = a1;
  if ( !a1 )
  {
    for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
    {
      if ( (HIDWORD(i[3].Blink) & 0x14) != 0 )
      {
        RIMLockExclusive((__int64)&i[33].Blink);
        for ( j = i[24].Blink; j; j = j[2].Blink )
        {
          if ( !j[30].Flink )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
          if ( ((__int64)j[11].Blink & 0x1000) != 0 )
            RIMEndAllActiveContacts((__int64)&i[-1], (__int64)j[30].Flink, 0LL);
        }
        i[34].Flink = 0LL;
        ExReleasePushLockExclusiveEx(&i[33].Blink, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
