/*
 * XREFs of ?GetSpecialTargetInfo@CLauncherLaunch@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180003D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLauncherLaunch::GetSpecialTargetInfo(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  _DWORD *i; // r9

  v2 = 0;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CLauncherLaunch::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( ++v3 )
      return v2;
  }
  return (unsigned int)`CLauncherLaunch::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[2 * v3 + 1];
}
