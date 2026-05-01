/*
 * XREFs of ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801563C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x180155CD0 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewsByAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  return CApplicationViewManager::GetApplicationViewsById(this - 17, a2, -1LL, 0, a3);
}
