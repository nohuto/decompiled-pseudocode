/*
 * XREFs of rimFindReferencedPrimaryRimObj @ 0x1C00DEAF0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedPrimaryRimObj(int a1, struct _LIST_ENTRY **a2)
{
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v6; // rbx
  NTSTATUS v7; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_12;
  do
  {
    v6 = Flink - 1;
    if ( !LOBYTE(Flink[3].Blink)
      && !BYTE1(v6[4].Blink)
      && (a1 & HIDWORD(v6[4].Blink)) != 0
      && LODWORD(v6[53].Flink)
      && v6[2].Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(v4)
      && (struct _KTHREAD *)v6[2].Blink == KeGetCurrentThread() )
    {
      break;
    }
    Flink = Flink->Flink;
    v6 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v6 )
  {
LABEL_12:
    v7 = -1073741637;
  }
  else
  {
    v7 = ObReferenceObjectByPointer(v6, 3u, ExRawInputManagerObjectType, 1);
    if ( v7 >= 0 )
      *a2 = v6;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
