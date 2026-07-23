/*
 * XREFs of RtlpAllocateEnvBlock @ 0x180057FB8
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18005539C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x180055450 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085E60 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvBlock(SIZE_T a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
