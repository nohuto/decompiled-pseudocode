/*
 * XREFs of ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1801DDFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801DC9CC (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::SetCortanaTaskbarButtonRect(
        CortanaStoreAppExperienceManager *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 216) )
    CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility((const RECT *)((char *)this - 120), 0);
  result = 0LL;
  *(struct tagRECT *)((char *)this + 200) = *a2;
  return result;
}
