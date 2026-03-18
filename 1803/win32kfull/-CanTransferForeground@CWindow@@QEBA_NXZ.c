/*
 * XREFs of ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C01FC7E4
 * Callers:
 *     _lambda_5263f2b98af0f98a991993afa5dd0415_::operator() @ 0x1C01FC328 (_lambda_5263f2b98af0f98a991993afa5dd0415_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C01FD5A8 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00062F8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
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
