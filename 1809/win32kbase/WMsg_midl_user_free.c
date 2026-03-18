/*
 * XREFs of WMsg_midl_user_free @ 0x1C01656F0
 * Callers:
 *     WmsgpPostMessage @ 0x1C0200890 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall WMsg_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
