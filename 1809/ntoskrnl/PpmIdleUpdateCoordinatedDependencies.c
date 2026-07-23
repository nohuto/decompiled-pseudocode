/*
 * XREFs of PpmIdleUpdateCoordinatedDependencies @ 0x14087C544
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1408679B0 (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateCoordinatedDependencies(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v3; // r11d
  bool v4; // r9
  __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (HvlEnlightenments & 0x400) == 0 )
      return v1;
  }
  else if ( !HvlHypervisorConnected )
  {
    return v1;
  }
  v3 = 0;
  v4 = (HvlEnlightenments & 0x200) != 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      v5 = 56LL * v3;
      if ( !LOBYTE(a1[v5 + 64]) )
        return (unsigned int)-1073741637;
      for ( i = 0; i < a1[v5 + 63]; *(_BYTE *)(v11 + 4LL * v4 + 3) = 1 )
      {
        v7 = *(_QWORD *)&a1[v5 + 66] + 16LL * i;
        if ( *(_DWORD *)v7 == -1 || *(_DWORD *)(v7 + 4) <= (unsigned int)v4 )
          return (unsigned int)-1073741637;
        v8 = 0;
        *(_DWORD *)(v7 + 4) = v4 + 1;
        if ( !v4 )
        {
          v9 = 0LL;
          do
          {
            v10 = *(_QWORD *)(v7 + 8);
            *(_BYTE *)(v9 + v10) = v8++;
            *(_WORD *)(v9 + v10 + 1) = 1;
            *(_BYTE *)(v9 + v10 + 3) = 0;
            v9 += 4LL;
          }
          while ( v8 < (unsigned int)v4 - 1 );
        }
        v11 = *(_QWORD *)(v7 + 8);
        ++i;
        *(_BYTE *)(v11 + 4LL * v4) = v4;
        *(_WORD *)(v11 + 4LL * v4 + 1) = 257;
      }
      if ( ++v3 >= *a1 )
        return v1;
    }
  }
  return v1;
}
