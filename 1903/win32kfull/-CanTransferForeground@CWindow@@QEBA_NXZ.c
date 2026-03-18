/*
 * XREFs of ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023D6D0
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023D2B8 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023E500 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0010414 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

char __fastcall CWindow::CanTransferForeground(CWindow *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  const struct tagWND *v5; // rax

  v4 = 1;
  LOBYTE(a2) = 1;
  v5 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), a2, a3, a4);
  if ( !v5 || !(unsigned int)CoreWindowProp::CompositeAppHasForeground(v5) )
    return 0;
  return v4;
}
