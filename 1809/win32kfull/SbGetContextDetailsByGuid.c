/*
 * XREFs of SbGetContextDetailsByGuid @ 0x1C00FBC9C
 * Callers:
 *     SetManifestWinVer @ 0x1C00FBB80 (SetManifestWinVer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsByGuid(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 && a1 )
  {
    *a2 = 0LL;
    v4 = 0;
    while ( 1 )
    {
      v5 = 32LL * v4;
      v6 = *a1 - *(_QWORD *)((char *)&SbSupportedOsList + v5 + 4);
      if ( *a1 == *(_QWORD *)((char *)&SbSupportedOsList + v5 + 4) )
        v6 = a1[1] - *(_QWORD *)((char *)&SbSupportedOsList + v5 + 12);
      if ( !v6 )
        break;
      if ( ++v4 >= 5 )
        return v2;
    }
    v2 = 1;
    *a2 = (char *)&SbSupportedOsList + v5;
  }
  return v2;
}
