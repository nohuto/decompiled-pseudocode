/*
 * XREFs of ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x180003FE4
 * Callers:
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180003F18 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x180003FE4 (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTransitionVisualController::_IsOwnedByWindow(
        CTransitionVisualController *this,
        const struct CWindowData *a2,
        HWND a3)
{
  char result; // al

  while ( 1 )
  {
    a2 = (const struct CWindowData *)*((_QWORD *)a2 + 69);
    result = 0;
    if ( !a2 )
      break;
    if ( *((HWND *)a2 + 5) == a3 )
      return 1;
  }
  return result;
}
