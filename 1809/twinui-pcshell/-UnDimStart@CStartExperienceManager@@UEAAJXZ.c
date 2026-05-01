/*
 * XREFs of ?UnDimStart@CStartExperienceManager@@UEAAJXZ @ 0x18007EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180025FDC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::UnDimStart(CStartExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = CStartExperienceManager::ReactivateHelper(
         (CStartExperienceManager *)((char *)this - 40),
         L"OnDimmedStateChanged");
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
