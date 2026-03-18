/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C0036060
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v6; // rsi
  struct _LIST_ENTRY *v7; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v6 = Flink - 1;
    v7 = Flink;
    Flink = Flink->Flink;
    if ( a1 == v6->Flink )
    {
      HMAssignmentUnlock(v6);
      v4 = v7->Flink;
      if ( v7->Flink->Blink != v7 || (Blink = v7->Blink, Blink->Flink != v7) )
        __fastfail(3u);
      Blink->Flink = v4;
      v4->Blink = Blink;
      result = (_UNKNOWN **)Win32FreePool(v6);
    }
  }
  return result;
}
