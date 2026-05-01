/*
 * XREFs of ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801B8BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x18004D2E4 (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1801B80FC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::TakeKeyboardFocus(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // eax

  result = CSingleViewShellExperience::BringToForeground((CSingleViewShellExperience *)(a1 + 272));
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v6 = CStartExperienceManager::ReactivateHelper(
           (CStartExperienceManager *)(a1 - 40),
           L"OnReceivingKeyboardFocus",
           a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v5;
  }
  return result;
}
