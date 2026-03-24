/*
 * XREFs of IoSaveBugCheckProgress @ 0x140280220
 * Callers:
 *     IoWriteCrashDump @ 0x1402805AC (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140292574 (KiDisplayBlueScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140328B0C (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402804BC (IoUpdateBugCheckProgressEnvVariable.c)
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
