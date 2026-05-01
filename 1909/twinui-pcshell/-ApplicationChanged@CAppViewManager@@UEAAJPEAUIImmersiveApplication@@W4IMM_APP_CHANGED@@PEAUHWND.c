/*
 * XREFs of ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180066C40
 * Callers:
 *     <none>
 * Callees:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180066C6C (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 */

__int64 __fastcall CAppViewManager::ApplicationChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax

  if ( a3 <= 0xF )
  {
    v3 = 33088;
    if ( _bittest(&v3, a3) )
      CAppViewManager::_InvokePresentedWindowCallbackTriggers(a1 - 48);
  }
  return 0LL;
}
