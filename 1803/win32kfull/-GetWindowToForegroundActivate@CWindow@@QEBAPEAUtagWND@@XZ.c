/*
 * XREFs of ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C01FCD28
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C01FC104 (CWindowGroupManager--_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C01FCC08 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall CWindow::GetWindowToForegroundActivate(CWindow *this, __int64 a2)
{
  struct tagWND *result; // rax
  __int64 v3; // r8

  LOBYTE(a2) = 1;
  result = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), a2);
  if ( result )
  {
    v3 = *((_QWORD *)result + 23);
    if ( v3 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x18) == 0x10 )
        return (struct tagWND *)*((_QWORD *)result + 23);
    }
  }
  return result;
}
