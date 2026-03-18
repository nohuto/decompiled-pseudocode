/*
 * XREFs of DisassociateShellFrameAppThreads2 @ 0x1C01D6900
 * Callers:
 *     NtUserAttachThreadInput @ 0x1C0011E10 (NtUserAttachThreadInput.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisassociateShellFrameAppThreads2(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx

  result = a1;
  for ( i = gShellFrameAppThreadsAssociationList.Flink; i != &gShellFrameAppThreadsAssociationList; i = i->Flink )
  {
    if ( i[1].Flink == (struct _LIST_ENTRY *)result && i[1].Blink == (struct _LIST_ENTRY *)a2 )
      goto LABEL_7;
  }
  i = 0LL;
LABEL_7:
  *(_DWORD *)(a2 + 1224) &= ~0x80000u;
  if ( i )
  {
    Flink = i->Flink;
    if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    return Win32FreePool(i);
  }
  return result;
}
