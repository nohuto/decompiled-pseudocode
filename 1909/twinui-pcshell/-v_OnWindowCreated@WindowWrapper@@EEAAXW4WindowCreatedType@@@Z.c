/*
 * XREFs of ?v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18007BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007BCF4 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 */

BOOL __fastcall WindowWrapper::v_OnWindowCreated(_DWORD *a1, int a2)
{
  BOOL result; // eax

  if ( a2 != 1 )
  {
    PushWindowTransparencyModeToWindow((int)a1[76], (unsigned int)a1[139], (unsigned int)a1[159]);
    return SetPropW((HWND)(int)a1[76], L"CanOpenInNewTab", (HANDLE)(a1[140] != 0));
  }
  return result;
}
