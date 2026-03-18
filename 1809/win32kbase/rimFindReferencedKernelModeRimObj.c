/*
 * XREFs of rimFindReferencedKernelModeRimObj @ 0x1C008E14C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedKernelModeRimObj(int a1, struct _LIST_ENTRY **a2)
{
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v6; // rbx
  NTSTATUS v7; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_13;
  do
  {
    v6 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink)
      && !BYTE1(v6[5].Flink)
      && (a1 & HIDWORD(v6[5].Flink)) != 0
      && LODWORD(v6[54].Flink)
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
LABEL_13:
    v7 = -1073741637;
  }
  else
  {
    v7 = ObReferenceObjectByPointer(v6, 3u, ExRawInputManagerObjectType, 1);
    if ( v7 >= 0 )
      *a2 = v6;
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
