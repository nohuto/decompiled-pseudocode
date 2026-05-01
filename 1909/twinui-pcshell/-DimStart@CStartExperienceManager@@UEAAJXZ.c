/*
 * XREFs of ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180085670
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x18004564C (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::DimStart(CStartExperienceManager *this)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 600) )
    return 0LL;
  result = CStartExperienceManager::ReactivateHelper(
             (CStartExperienceManager *)((char *)this - 40),
             L"OnDimmedStateChanged");
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
