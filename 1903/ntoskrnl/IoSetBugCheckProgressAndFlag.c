/*
 * XREFs of IoSetBugCheckProgressAndFlag @ 0x14029549C
 * Callers:
 *     IoWriteCrashDump @ 0x14029580C (IoWriteCrashDump.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14029571C (IoUpdateBugCheckProgressEnvVariable.c)
 */

void IoSetBugCheckProgressAndFlag()
{
  int v0; // eax

  if ( CrashdmpDumpBlock )
  {
    v0 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v0 & 0x60000) == 0 )
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v0 & 0xFFFFFE00 | 0x25;
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x800u;
    IoUpdateBugCheckProgressEnvVariable();
  }
}
