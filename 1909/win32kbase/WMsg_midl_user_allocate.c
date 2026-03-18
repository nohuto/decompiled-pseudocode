/*
 * XREFs of WMsg_midl_user_allocate @ 0x1C0067A90
 * Callers:
 *     WmsgpPostMessage @ 0x1C0246224 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall WMsg_midl_user_allocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53637052u);
}
