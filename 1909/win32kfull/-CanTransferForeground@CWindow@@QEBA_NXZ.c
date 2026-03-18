/*
 * XREFs of ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023D0B0
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023CC98 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023DEE0 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0115874 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

char __fastcall CWindow::CanTransferForeground(CWindow *this, __int64 a2, __int64 a3)
{
  char v3; // bl
  const struct tagWND *v4; // rax

  v3 = 1;
  LOBYTE(a2) = 1;
  v4 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), a2, a3);
  if ( !v4 || !(unsigned int)CoreWindowProp::CompositeAppHasForeground(v4) )
    return 0;
  return v3;
}
