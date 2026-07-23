/*
 * XREFs of IopReplaceSeperatorWithPound @ 0x1406DA5C8
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140703314 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopReplaceSeperatorWithPound(__int64 a1, __int16 *a2)
{
  unsigned __int16 v2; // ax
  __int16 *v4; // r9
  __int16 v5; // dx
  __int16 *v6; // r10
  __int16 v7; // ax

  v2 = *a2;
  if ( (unsigned __int16)*a2 > *(_WORD *)(a1 + 2) )
    return 3221225507LL;
  v4 = (__int16 *)*((_QWORD *)a2 + 1);
  v5 = v2 >> 1;
  v6 = *(__int16 **)(a1 + 8);
  if ( v2 >> 1 )
  {
    do
    {
      --v5;
      v7 = *v4;
      if ( *v4 == 92 || v7 == 47 )
        v7 = 35;
      *v6 = v7;
      ++v4;
      ++v6;
    }
    while ( v5 );
    v2 = *a2;
  }
  *(_WORD *)a1 = v2;
  return 0LL;
}
