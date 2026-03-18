/*
 * XREFs of rimFindReferencedKernelModeRimObj @ 0x1C00A0C44
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedKernelModeRimObj(int a1, struct _LIST_ENTRY **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v7; // rbx
  NTSTATUS v8; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_13;
  do
  {
    v7 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink)
      && !BYTE1(v7[5].Flink)
      && (a1 & HIDWORD(v7[5].Flink)) != 0
      && LODWORD(v7[54].Flink)
      && v7[2].Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(v5, v4)
      && (struct _KTHREAD *)v7[2].Blink == KeGetCurrentThread() )
    {
      break;
    }
    Flink = Flink->Flink;
    v7 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v7 )
  {
LABEL_13:
    v8 = -1073741637;
  }
  else
  {
    v8 = ObReferenceObjectByPointer(v7, 3u, ExRawInputManagerObjectType, 1);
    if ( v8 >= 0 )
      *a2 = v7;
  }
  qword_1C0218788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
