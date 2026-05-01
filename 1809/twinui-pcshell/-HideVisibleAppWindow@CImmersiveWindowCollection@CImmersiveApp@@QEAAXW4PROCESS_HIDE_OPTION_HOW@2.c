/*
 * XREFs of ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x18011D218
 * Callers:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180121B28 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18011D1AC (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18011FB98 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z @ 0x180122134 (-_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::HideVisibleAppWindow(__int64 a1, int a2)
{
  unsigned int v4; // edx
  HWND v5; // rdx

  v4 = 0;
  if ( a2 )
  {
    v4 = 2;
    if ( a2 == 2 )
      v4 = 10;
  }
  CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
    (CImmersiveApp::CImmersiveWindowCollection *)a1,
    v4);
  *(_BYTE *)(a1 + 200) = 0;
  CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)a1);
  CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
    (CImmersiveApp::CImmersiveWindowCollection *)a1,
    0);
  v5 = *(HWND *)(a1 + 136);
  if ( v5 )
    CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)a1, v5);
}
