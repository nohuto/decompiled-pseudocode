/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA?AW4Border@CSingleViewShellExperience@@W4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180097F3C
 * Callers:
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x18009A338 (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::GetBorderFlagFromStuckEdge(_DWORD *a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // edx
  int v4; // edx

  v2 = 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          v2 = 7;
      }
      else
      {
        v2 = 11;
      }
    }
    else
    {
      v2 = 13;
    }
  }
  else
  {
    v2 = 14;
  }
  if ( (v2 & 8) != 0 && a1[105] == a1[101] )
    v2 &= ~8u;
  if ( (v2 & 2) != 0 && a1[103] == a1[99] )
    v2 &= ~2u;
  if ( (v2 & 4) != 0 && a1[104] == a1[100] )
    v2 &= ~4u;
  if ( (v2 & 1) != 0 && a1[102] == a1[98] )
    v2 &= ~1u;
  return v2;
}
