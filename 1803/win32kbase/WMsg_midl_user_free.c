/*
 * XREFs of WMsg_midl_user_free @ 0x1C01421C0
 * Callers:
 *     WmsgpPostMessage @ 0x1C01D7804 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall WMsg_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
