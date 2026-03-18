/*
 * XREFs of IoSaveBugCheckProgress @ 0x1402953B0
 * Callers:
 *     IoWriteCrashDump @ 0x14029580C (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x14029CA20 (IoAddPagesForPartialKernelDump.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14034A390 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14029571C (IoUpdateBugCheckProgressEnvVariable.c)
 */

LONG __fastcall IoSaveBugCheckProgress(int a1)
{
  LONG result; // eax
  int v3; // edx
  int v4; // edx
  _DWORD Src[10]; // [rsp+20h] [rbp-30h] BYREF

  result = (unsigned int)memset(Src, 0, sizeof(Src));
  if ( CrashdmpDumpBlock )
  {
    v3 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v3 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v3 ^ ((unsigned __int16)a1 ^ (unsigned __int16)v3) & 0x1FF;
      result = IoUpdateBugCheckProgressEnvVariable();
    }
    if ( a1 == 4 )
    {
      v4 = 4 - *(_DWORD *)(CrashdmpDumpBlock + 1336);
      Src[3] = 0;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[5] = -2147483613;
      Src[4] = 8961 - (v4 != 0);
      Src[6] = 24;
      Src[7] = 8;
      Src[9] = *(_DWORD *)(CrashdmpDumpBlock + 1404);
      Src[8] = *(_DWORD *)(CrashdmpDumpBlock + 24);
      return WheaLogInternalEvent(Src);
    }
  }
  return result;
}
