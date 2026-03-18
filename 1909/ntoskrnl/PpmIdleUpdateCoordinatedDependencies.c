/*
 * XREFs of PpmIdleUpdateCoordinatedDependencies @ 0x1408B71AC
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1408A24A0 (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateCoordinatedDependencies(_DWORD *a1)
{
  unsigned int v1; // edx
  bool v2; // zf
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // r10
  unsigned int i; // r11d
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = 0;
  if ( (HvlpFlags & 2) != 0 )
    v2 = (HvlEnlightenments & 0x400) == 0;
  else
    v2 = HvlHypervisorConnected == 0;
  if ( !v2 )
  {
    v3 = 0;
    v4 = ((unsigned int)HvlEnlightenments >> 9) & 1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v5 = 56LL * v3;
        if ( !LOBYTE(a1[v5 + 64]) )
          return (unsigned int)-1073741637;
        for ( i = 0; i < a1[v5 + 63]; *(_BYTE *)(v8 + 3) = 1 )
        {
          v7 = *(_QWORD *)&a1[v5 + 66] + 16LL * i;
          if ( *(_DWORD *)v7 == -1 || !*(_DWORD *)(v7 + 4) )
            return (unsigned int)-1073741637;
          *(_DWORD *)(v7 + 4) = 1;
          ++i;
          v8 = *(_QWORD *)(v7 + 8);
          *(_BYTE *)v8 = v4;
          *(_WORD *)(v8 + 1) = 257;
        }
        if ( ++v3 >= *a1 )
          return v1;
      }
    }
  }
  return v1;
}
