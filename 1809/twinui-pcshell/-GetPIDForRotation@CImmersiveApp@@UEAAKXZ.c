/*
 * XREFs of ?GetPIDForRotation@CImmersiveApp@@UEAAKXZ @ 0x18011C340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800444FC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetPIDForRotation(CImmersiveApp *this)
{
  HWND ApplicationWindow; // rax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  dwProcessId = 0;
  if ( (*((_BYTE *)this + 440) & 1) != 0 )
  {
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 152));
    if ( ApplicationWindow )
      GetWindowThreadProcessId(ApplicationWindow, &dwProcessId);
  }
  return dwProcessId;
}
