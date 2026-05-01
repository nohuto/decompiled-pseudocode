/*
 * XREFs of ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x1801259D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetApplicationId(
        CallerIdentity **this,
        unsigned int **a2,
        unsigned __int16 **a3)
{
  return CallerIdentity::GetImmersiveAppIdFromWindow(this[2], a2, a3);
}
