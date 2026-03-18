/*
 * XREFs of RIMOnProcessDestroy @ 0x1C003B520
 * Callers:
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 * Callees:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C003B1F4 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMOnProcessDestroy(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( i[1].Flink == a1 )
      BYTE1(i[-1].Blink) = 1;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return RIMUnregisterCurrentProcessForInput(v4, v3);
}
