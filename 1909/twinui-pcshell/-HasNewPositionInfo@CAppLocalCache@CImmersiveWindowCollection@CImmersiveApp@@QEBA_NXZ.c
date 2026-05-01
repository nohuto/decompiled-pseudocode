/*
 * XREFs of ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180164EB4
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18003CB1C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180168020 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     <none>
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo(const RECT *this)
{
  const RECT *v1; // rbx
  BOOL v2; // eax
  char v3; // cl

  v1 = this + 1;
  v2 = EqualRect(this, this + 1);
  v3 = 0;
  if ( !v2 && v1->left <= v1->right )
    return v1->top <= v1->bottom;
  return v3;
}
