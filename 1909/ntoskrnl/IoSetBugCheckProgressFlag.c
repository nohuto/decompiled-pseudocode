/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x140295248
 * Callers:
 *     IoWriteCrashDump @ 0x14029556C (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14029547C (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 __fastcall IoSetBugCheckProgressFlag(int a1)
{
  __int64 result; // rax

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1;
    return IoUpdateBugCheckProgressEnvVariable();
  }
  return result;
}
