/*
 * XREFs of ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C023D604
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___ @ 0x1C023C9F4 (CWindowGroupManager--_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023D4C4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall CWindow::GetWindowToForegroundActivate(CWindow *this, __int64 a2, __int64 a3)
{
  struct tagWND *result; // rax
  __int64 v4; // r8

  LOBYTE(a2) = 1;
  result = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), a2, a3);
  if ( result )
  {
    v4 = *((_QWORD *)result + 25);
    if ( v4 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x18) == 0x10 )
        return (struct tagWND *)*((_QWORD *)result + 25);
    }
  }
  return result;
}
