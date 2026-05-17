/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x18010A820
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 */

__int64 __fastcall RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit(__int64 a1)
{
  __int64 result; // rax

  result = RtlGetSuiteMask(a1);
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
