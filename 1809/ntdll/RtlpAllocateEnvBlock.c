/*
 * XREFs of RtlpAllocateEnvBlock @ 0x180057FB8
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18005539C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x180055450 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085E50 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvBlock(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
