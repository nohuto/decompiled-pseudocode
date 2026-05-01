/*
 * XREFs of ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x18011CE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800443F0 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800444FC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

void __fastcall CImmersiveApp::HandleNewProcess(CImmersiveApp *this, void *a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax

  if ( *((_BYTE *)this + 664) )
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 152))
      && ((*((_QWORD *)this + 84) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      CurrentProcess = GetCurrentProcess();
      v5 = GetCurrentProcess();
      if ( DuplicateHandle(v5, a2, CurrentProcess, (LPHANDLE)this + 84, 0x1200u, 0, 0) )
      {
        if ( (*((_BYTE *)this + 440) & 2) != 0 )
          CImmersiveApp::_SetApplicationForegroundPriority((__int64)this - 112, 0);
      }
    }
  }
}
