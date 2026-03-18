/*
 * XREFs of ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C023DC24
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___ @ 0x1C023D014 (CWindowGroupManager--_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023DAE4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall CWindow::GetWindowToForegroundActivate(CWindow *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *result; // rax
  __int64 v5; // r8

  LOBYTE(a2) = 1;
  result = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), a2, a3, a4);
  if ( result )
  {
    v5 = *((_QWORD *)result + 25);
    if ( v5 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x18) == 0x10 )
        return (struct tagWND *)*((_QWORD *)result + 25);
    }
  }
  return result;
}
