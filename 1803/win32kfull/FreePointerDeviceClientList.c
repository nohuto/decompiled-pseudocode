/*
 * XREFs of FreePointerDeviceClientList @ 0x1C00BA7EC
 * Callers:
 *     InitializePointerDevicesPresenceState @ 0x1C00BAE90 (InitializePointerDevicesPresenceState.c)
 * Callees:
 *     <none>
 */

void FreePointerDeviceClientList()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rsi
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *v3; // rdx
  struct _LIST_ENTRY *Blink; // rax

  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v1 = Flink - 1;
    v2 = Flink;
    HMAssignmentUnlock(&Flink[-1]);
    v3 = Flink->Flink;
    Flink = v3;
    if ( v3->Blink != v2 || (Blink = v2->Blink, Blink->Flink != v2) )
      __fastfail(3u);
    Blink->Flink = v3;
    v3->Blink = Blink;
    Win32FreePool(v1);
  }
}
