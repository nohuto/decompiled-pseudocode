/*
 * XREFs of RtlGetNtSystemRoot @ 0x180029260
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     sub_180025714 @ 0x180025714 (sub_180025714.c)
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 *     sub_18005BC5C @ 0x18005BC5C (sub_18005BC5C.c)
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 *     sub_18008BF20 @ 0x18008BF20 (sub_18008BF20.c)
 *     sub_1800CBCD0 @ 0x1800CBCD0 (sub_1800CBCD0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->NtSystemRoot;
  else
    return (PWSTR)2147352624;
}
