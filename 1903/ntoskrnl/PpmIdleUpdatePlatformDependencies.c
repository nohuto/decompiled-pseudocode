/*
 * XREFs of PpmIdleUpdatePlatformDependencies @ 0x1408B79D8
 * Callers:
 *     PpmInstallPlatformIdleStates @ 0x1408A3200 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdatePlatformDependencies(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // r9
  unsigned int i; // edx
  __int64 v5; // r11

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
    v2 = (HvlEnlightenments & 0x400) == 0;
  else
    v2 = HvlHypervisorConnected == 0;
  if ( !v2 )
  {
    v3 = 0LL;
    for ( i = ((unsigned int)HvlEnlightenments >> 9) & 1;
          (unsigned int)v3 < *(_DWORD *)(a1 + 8);
          v3 = (unsigned int)(v3 + 1) )
    {
      v5 = 0LL;
      for ( *(_BYTE *)(a1 + 48 * v3 + 61) = i;
            (unsigned int)v5 < *(_DWORD *)(a1 + 48 * v3 + 72);
            v5 = (unsigned int)(v5 + 1) )
      {
        result = *(_QWORD *)(a1 + 48 * v3 + 96);
        *(_BYTE *)(result + 8 * v5 + 4) = i;
      }
    }
  }
  return result;
}
