/*
 * XREFs of ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C0225254
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C0224E40 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

char __fastcall CWindow::CanTransferForeground(CWindow *this, __int64 a2)
{
  char v2; // bl
  const struct tagWND *v3; // rax

  v2 = 1;
  LOBYTE(a2) = 1;
  v3 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), a2);
  if ( !v3 || !(unsigned int)CoreWindowProp::CompositeAppHasForeground(v3) )
    return 0;
  return v2;
}
