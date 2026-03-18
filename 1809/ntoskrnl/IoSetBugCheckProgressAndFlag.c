/*
 * XREFs of IoSetBugCheckProgressAndFlag @ 0x140280164
 * Callers:
 *     IoWriteCrashDump @ 0x1402804AC (IoWriteCrashDump.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402803BC (IoUpdateBugCheckProgressEnvVariable.c)
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
