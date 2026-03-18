/*
 * XREFs of IoSaveBugCheckProgress @ 0x140280120
 * Callers:
 *     IoWriteCrashDump @ 0x1402804AC (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140292474 (KiDisplayBlueScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140328A0C (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402803BC (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 __fastcall IoSaveBugCheckProgress(unsigned __int16 a1)
{
  int v1; // r8d
  __int64 result; // rax

  if ( CrashdmpDumpBlock )
  {
    v1 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v1 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v1 ^ (a1 ^ (unsigned __int16)v1) & 0x1FF;
      return IoUpdateBugCheckProgressEnvVariable();
    }
  }
  return result;
}
