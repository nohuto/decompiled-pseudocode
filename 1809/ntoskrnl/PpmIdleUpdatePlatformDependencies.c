/*
 * XREFs of PpmIdleUpdatePlatformDependencies @ 0x14087C6B8
 * Callers:
 *     PpmInstallPlatformIdleStates @ 0x140867F50 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdatePlatformDependencies(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  bool i; // r8
  __int64 v4; // r11

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (HvlEnlightenments & 0x400) == 0 )
      return result;
  }
  else if ( !HvlHypervisorConnected )
  {
    return result;
  }
  v2 = 0LL;
  for ( i = (HvlEnlightenments & 0x200) != 0; (unsigned int)v2 < *(_DWORD *)(a1 + 8); v2 = (unsigned int)(v2 + 1) )
  {
    v4 = 0LL;
    for ( *(_BYTE *)(a1 + 48 * v2 + 61) = i; (unsigned int)v4 < *(_DWORD *)(a1 + 48 * v2 + 72); v4 = (unsigned int)(v4 + 1) )
    {
      result = *(_QWORD *)(a1 + 48 * v2 + 96);
      *(_BYTE *)(result + 8 * v4 + 4) = i;
    }
  }
  return result;
}
