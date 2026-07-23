/*
 * XREFs of sub_18005D77C @ 0x18005D77C
 * Callers:
 *     sub_18005C988 @ 0x18005C988 (sub_18005C988.c)
 *     RtlCreateEnvironmentEx @ 0x18005CB80 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180080C20 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_18005D77C(SIZE_T a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
