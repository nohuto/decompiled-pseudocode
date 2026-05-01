/*
 * XREFs of _MIDL_user_allocate@4 @ 0x10007580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, size);
}
